
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct alpha_operand {int flags; scalar_t__ default_reloc; scalar_t__ bits; } ;
struct alpha_opcode {unsigned int opcode; unsigned char* operands; int name; } ;
struct alpha_insn {scalar_t__ nfixups; unsigned int insn; struct alpha_fixup* fixups; } ;
struct TYPE_6__ {int X_op; int X_unsigned; int X_add_number; } ;
struct alpha_fixup {scalar_t__ reloc; TYPE_2__ exp; } ;
struct TYPE_5__ {scalar_t__ bitsize; } ;
typedef TYPE_1__ reloc_howto_type ;
typedef TYPE_2__ expressionS ;
typedef scalar_t__ bfd_reloc_code_real_type ;





 int AXP_OPERAND_FAKE ;
 int AXP_OPERAND_OPTIONAL_MASK ;
 scalar_t__ BFD_RELOC_ALPHA_GPDISP ;
 scalar_t__ BFD_RELOC_ALPHA_GPDISP_HI16 ;
 scalar_t__ BFD_RELOC_ALPHA_GPDISP_LO16 ;
 scalar_t__ BFD_RELOC_ALPHA_HINT ;
 scalar_t__ BFD_RELOC_UNUSED ;
 scalar_t__ MAX_INSN_FIXUPS ;
 int O_absent ;




 int _ (char*) ;
 int abort () ;
 struct alpha_operand* alpha_operands ;
 int as_bad (int ) ;
 int as_fatal (int ) ;
 int assert (int ) ;
 TYPE_1__* bfd_reloc_type_lookup (int ,scalar_t__) ;
 unsigned int insert_operand (unsigned int,struct alpha_operand const*,int ,int *,int ) ;
 int memset (struct alpha_insn*,int ,int) ;
 int regno (int ) ;
 int stdoutput ;
 scalar_t__ strcmp (int ,char*) ;

__attribute__((used)) static void
assemble_insn (const struct alpha_opcode *opcode,
        const expressionS *tok,
        int ntok,
        struct alpha_insn *insn,
        bfd_reloc_code_real_type reloc)
{
  const struct alpha_operand *reloc_operand = ((void*)0);
  const expressionS *reloc_exp = ((void*)0);
  const unsigned char *argidx;
  unsigned image;
  int tokidx = 0;

  memset (insn, 0, sizeof (*insn));
  image = opcode->opcode;

  for (argidx = opcode->operands; *argidx; ++argidx)
    {
      const struct alpha_operand *operand = &alpha_operands[*argidx];
      const expressionS *t = (const expressionS *) 0;

      if (operand->flags & AXP_OPERAND_FAKE)
 {

   image = insert_operand (image, operand, 0, ((void*)0), 0);
   continue;
 }

      if (tokidx >= ntok)
 {
   switch (operand->flags & AXP_OPERAND_OPTIONAL_MASK)
     {
     case 134:
       t = &tok[0];
       break;
     case 133:
       t = &tok[1];
       break;
     case 132:
       {
  static expressionS zero_exp;
  t = &zero_exp;
  zero_exp.X_op = 131;
  zero_exp.X_unsigned = 1;
       }
       break;
     default:
       abort ();
     }
 }
      else
 t = &tok[tokidx++];

      switch (t->X_op)
 {
 case 128:
 case 129:
 case 130:
   image = insert_operand (image, operand, regno (t->X_add_number),
      ((void*)0), 0);
   break;

 case 131:
   image = insert_operand (image, operand, t->X_add_number, ((void*)0), 0);
   assert (reloc_operand == ((void*)0));
   reloc_operand = operand;
   reloc_exp = t;
   break;

 default:


   if (operand->default_reloc == 0)
     abort ();




   if (operand->default_reloc == BFD_RELOC_ALPHA_HINT)
     {
       struct alpha_fixup *fixup;

       if (insn->nfixups >= MAX_INSN_FIXUPS)
  as_fatal (_("too many fixups"));

       fixup = &insn->fixups[insn->nfixups++];
       fixup->exp = *t;
       fixup->reloc = BFD_RELOC_ALPHA_HINT;
     }
   else
     {
       if (reloc == BFD_RELOC_UNUSED)
  reloc = operand->default_reloc;

       assert (reloc_operand == ((void*)0));
       reloc_operand = operand;
       reloc_exp = t;
     }
   break;
 }
    }

  if (reloc != BFD_RELOC_UNUSED)
    {
      struct alpha_fixup *fixup;

      if (insn->nfixups >= MAX_INSN_FIXUPS)
 as_fatal (_("too many fixups"));




      if (reloc == BFD_RELOC_ALPHA_GPDISP)
 {
   if (strcmp (opcode->name, "ldah") == 0)
     reloc = BFD_RELOC_ALPHA_GPDISP_HI16;
   else if (strcmp (opcode->name, "lda") == 0)
     reloc = BFD_RELOC_ALPHA_GPDISP_LO16;
   else
     as_bad (_("invalid relocation for instruction"));
 }



      else if (reloc < BFD_RELOC_UNUSED)
 {
   reloc_howto_type *reloc_howto
     = bfd_reloc_type_lookup (stdoutput, reloc);
   if (reloc_howto->bitsize != reloc_operand->bits)
     {
       as_bad (_("invalid relocation for field"));
       return;
     }
 }

      fixup = &insn->fixups[insn->nfixups++];
      if (reloc_exp)
 fixup->exp = *reloc_exp;
      else
 fixup->exp.X_op = O_absent;
      fixup->reloc = reloc;
    }

  insn->insn = image;
}
