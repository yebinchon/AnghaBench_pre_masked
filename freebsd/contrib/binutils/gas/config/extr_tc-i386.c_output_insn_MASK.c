
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int valueT ;
typedef int offsetT ;
typedef int fragS ;
struct TYPE_10__ {int base; int index; int scale; } ;
struct TYPE_8__ {int regmem; int reg; int mode; } ;
struct TYPE_7__ {int opcode_modifier; int cpu_flags; int base_opcode; } ;
struct TYPE_11__ {unsigned int* prefix; scalar_t__ imm_operands; scalar_t__ disp_operands; TYPE_4__ sib; TYPE_3__* base_reg; TYPE_2__ rm; TYPE_1__ tm; } ;
struct TYPE_9__ {int reg_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_15 ;
 char* FUNC_4 (int) ;
 int * VAR_16 ;
 int FUNC_5 () ;
 TYPE_5__ VAR_17 ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (char*,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_13 (void)
{
  fragS *VAR_18;
  offsetT VAR_19;




  FUNC_2 (0);

  VAR_18 = VAR_16;
  VAR_19 = FUNC_5 ();


  if (VAR_17.tm.opcode_modifier & VAR_7)
    FUNC_7 ();
  else if (VAR_17.tm.opcode_modifier & (VAR_8 | VAR_9))
    FUNC_11 ();
  else if (VAR_17.tm.opcode_modifier & VAR_10)
    FUNC_10 ();
  else
    {

      char *VAR_20;
      unsigned char *VAR_21;
      unsigned int VAR_22;





      if ((VAR_17.tm.cpu_flags & (VAR_5 | VAR_4 | VAR_1 | VAR_2)) != 0
   && (VAR_17.tm.cpu_flags & VAR_0) == 0)
 {
   if (VAR_17.tm.base_opcode & 0xff000000)
     {
       VAR_22 = (VAR_17.tm.base_opcode >> 24) & 0xff;
       goto check_prefix;
     }
 }
      else if (VAR_17.tm.base_opcode == 0x660f3880 || VAR_17.tm.base_opcode == 0x660f3881
   || VAR_17.tm.base_opcode == 0x660f3882)
 {


   if (VAR_17.tm.base_opcode & 0xff000000)
     {
       VAR_22 = (VAR_17.tm.base_opcode >> 24) & 0xff;
       FUNC_1 (VAR_22);
     }
 }
      else if ((VAR_17.tm.base_opcode & 0xff0000) != 0)
 {
   VAR_22 = (VAR_17.tm.base_opcode >> 16) & 0xff;
   if ((VAR_17.tm.cpu_flags & VAR_3) != 0)
     {
     check_prefix:
       if (VAR_22 != VAR_13
    || VAR_17.prefix[VAR_11] != VAR_13)
  FUNC_1 (VAR_22);
     }
   else
     FUNC_1 (VAR_22);
 }


      for (VAR_21 = VAR_17.prefix;
    VAR_21 < VAR_17.prefix + sizeof (VAR_17.prefix) / sizeof (VAR_17.prefix[0]);
    VAR_21++)
 {
   if (*VAR_21)
     {
       VAR_20 = FUNC_4 (1);
       FUNC_6 (VAR_20, (valueT) *VAR_21, 1);
     }
 }


      if (FUNC_3 (VAR_17.tm.base_opcode))
 {
   FUNC_0 (VAR_17.tm.base_opcode);
 }
      else
 {
   if ((VAR_17.tm.cpu_flags & (VAR_5 | VAR_4 | VAR_1 | VAR_2)) != 0
       && (VAR_17.tm.cpu_flags & VAR_0) == 0)
     {
       VAR_20 = FUNC_4 (3);
       *VAR_20++ = (VAR_17.tm.base_opcode >> 16) & 0xff;
     }
   else if (VAR_17.tm.base_opcode == 0x660f3880 ||
     VAR_17.tm.base_opcode == 0x660f3881 ||
     VAR_17.tm.base_opcode == 0x660f3882)
     {
       VAR_20 = FUNC_4 (3);
       *VAR_20++ = (VAR_17.tm.base_opcode >> 16) & 0xff;
     }
   else
     VAR_20 = FUNC_4 (2);


   *VAR_20++ = (VAR_17.tm.base_opcode >> 8) & 0xff;
   *VAR_20 = VAR_17.tm.base_opcode & 0xff;
 }


      if (VAR_17.tm.opcode_modifier & VAR_12)
 {
   VAR_20 = FUNC_4 (1);
   FUNC_6 (VAR_20,
         (valueT) (VAR_17.rm.regmem << 0
     | VAR_17.rm.reg << 3
     | VAR_17.rm.mode << 6),
         1);




   if (VAR_17.rm.regmem == VAR_6
       && VAR_17.rm.mode != 3
       && !(VAR_17.base_reg && (VAR_17.base_reg->reg_type & VAR_14) != 0))
     {
       VAR_20 = FUNC_4 (1);
       FUNC_6 (VAR_20,
      (valueT) (VAR_17.sib.base << 0
         | VAR_17.sib.index << 3
         | VAR_17.sib.scale << 6),
      1);
     }
 }

      if (VAR_17.disp_operands)
 FUNC_8 (VAR_18, VAR_19);

      if (VAR_17.imm_operands)
 FUNC_9 (VAR_18, VAR_19);
    }







}
