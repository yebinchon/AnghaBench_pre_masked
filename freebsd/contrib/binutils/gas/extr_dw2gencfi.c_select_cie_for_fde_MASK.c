
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int X_op; scalar_t__ X_add_number; int X_add_symbol; int X_unsigned; } ;
struct fde_entry {scalar_t__ return_column; scalar_t__ signal_frame; scalar_t__ per_encoding; scalar_t__ lsda_encoding; struct cfi_insn_data* data; TYPE_4__ personality; } ;
struct cie_entry {scalar_t__ return_column; scalar_t__ signal_frame; scalar_t__ per_encoding; scalar_t__ lsda_encoding; struct cfi_insn_data* last; struct cfi_insn_data* first; TYPE_4__ personality; struct cie_entry* next; } ;
struct TYPE_6__ {int reg2; int reg1; } ;
struct TYPE_5__ {int offset; int reg; } ;
struct TYPE_7__ {int i; int r; TYPE_2__ rr; TYPE_1__ ri; } ;
struct cfi_insn_data {int insn; struct cfi_insn_data* next; TYPE_3__ u; } ;
 scalar_t__ VAR_0 ;


 int FUNC_0 () ;
 struct cie_entry* VAR_1 ;
 int FUNC_1 (struct cie_entry*) ;
 struct cie_entry* FUNC_2 (int) ;

__attribute__((used)) static struct cie_entry *
FUNC_3 (struct fde_entry *VAR_2, struct cfi_insn_data **VAR_3)
{
  struct cfi_insn_data *VAR_4, *VAR_5;
  struct cie_entry *VAR_6;

  for (VAR_6 = VAR_1; VAR_6; VAR_6 = VAR_6->next)
    {
      if (VAR_6->return_column != VAR_2->return_column
   || VAR_6->signal_frame != VAR_2->signal_frame
   || VAR_6->per_encoding != VAR_2->per_encoding
   || VAR_6->lsda_encoding != VAR_2->lsda_encoding)
 continue;
      if (VAR_6->per_encoding != VAR_0)
 {
   if (VAR_6->personality.X_op != VAR_2->personality.X_op
       || VAR_6->personality.X_add_number
   != VAR_2->personality.X_add_number)
     continue;
   switch (VAR_6->personality.X_op)
     {
     case 129:
       if (VAR_6->personality.X_unsigned != VAR_2->personality.X_unsigned)
  continue;
       break;
     case 128:
       if (VAR_6->personality.X_add_symbol
    != VAR_2->personality.X_add_symbol)
  continue;
       break;
     default:
       FUNC_0 ();
     }
 }
      for (VAR_4 = VAR_6->first, VAR_5 = VAR_2->data;
    VAR_4 != VAR_6->last && VAR_5 != ((void*)0);
    VAR_4 = VAR_4->next, VAR_5 = VAR_5->next)
 {
   if (VAR_4->insn != VAR_5->insn)
     goto fail;
   switch (VAR_4->insn)
     {
     case 139:
     case 133:


       goto fail;

     case 135:
     case 138:
       if (VAR_4->u.ri.reg != VAR_5->u.ri.reg)
  goto fail;
       if (VAR_4->u.ri.offset != VAR_5->u.ri.offset)
  goto fail;
       break;

     case 134:
       if (VAR_4->u.rr.reg1 != VAR_5->u.rr.reg1)
  goto fail;
       if (VAR_4->u.rr.reg2 != VAR_5->u.rr.reg2)
  goto fail;
       break;

     case 136:
     case 132:
     case 130:
     case 131:
       if (VAR_4->u.r != VAR_5->u.r)
  goto fail;
       break;

     case 137:
       if (VAR_4->u.i != VAR_5->u.i)
  goto fail;
       break;

     case 140:

       goto fail;

     default:
       FUNC_0 ();
     }
 }




      if (VAR_4 == VAR_6->last
   && (!VAR_5
       || VAR_5->insn == 139
       || VAR_5->insn == 133
       || VAR_5->insn == 140))
 {
   *VAR_3 = VAR_5;
   return VAR_6;
 }

    fail:;
    }

  VAR_6 = FUNC_2 (sizeof (struct cie_entry));
  VAR_6->next = VAR_1;
  VAR_1 = VAR_6;
  VAR_6->return_column = VAR_2->return_column;
  VAR_6->signal_frame = VAR_2->signal_frame;
  VAR_6->per_encoding = VAR_2->per_encoding;
  VAR_6->lsda_encoding = VAR_2->lsda_encoding;
  VAR_6->personality = VAR_2->personality;
  VAR_6->first = VAR_2->data;

  for (VAR_4 = VAR_6->first; VAR_4 ; VAR_4 = VAR_4->next)
    if (VAR_4->insn == 139
 || VAR_4->insn == 133
 || VAR_4->insn == 140)
      break;

  VAR_6->last = VAR_4;
  *VAR_3 = VAR_4;

  FUNC_1 (VAR_6);

  return VAR_6;
}
