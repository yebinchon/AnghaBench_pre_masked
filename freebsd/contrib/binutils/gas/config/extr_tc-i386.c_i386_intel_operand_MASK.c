
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int reg_type; int reg_num; } ;
typedef TYPE_2__ const reg_entry ;
struct TYPE_14__ {scalar_t__ code; int str; int reg; } ;
struct TYPE_13__ {TYPE_1__* start; } ;
struct TYPE_12__ {int mem_operands; int operands; TYPE_2__ const* base_reg; TYPE_2__ const* index_reg; } ;
struct TYPE_11__ {char* op_string; char* disp; int got_a_float; int op_modifier; scalar_t__ is_mem; char* next_operand; int * reg; scalar_t__ in_bracket; scalar_t__ in_offset; } ;
struct TYPE_10__ {scalar_t__ code; int * str; int * reg; } ;
struct TYPE_8__ {int opcode_modifier; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,...) ;
 int FUNC_2 (int ,char*) ;
 TYPE_7__ VAR_5 ;
 TYPE_6__* VAR_6 ;
 int FUNC_3 (char*) ;
 TYPE_5__ VAR_7 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_4__ VAR_8 ;
 TYPE_3__ VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (char*) ;
 int VAR_11 ;
 scalar_t__ FUNC_10 (int) ;
 char* FUNC_11 (char*) ;

__attribute__((used)) static int
FUNC_12 (char *VAR_12, int VAR_13)
{
  int VAR_14;
  char *VAR_15;

  VAR_15 = VAR_8.op_string = FUNC_11 (VAR_12);
  VAR_8.disp = (char *) FUNC_10 (FUNC_9 (VAR_12) + 1);

  for (;;)
    {

      VAR_5.code = VAR_9.code = VAR_3;
      VAR_5.reg = *(VAR_9.reg = ((void*)0));
      VAR_5.str = *(VAR_9.str = ((void*)0));


      VAR_8.got_a_float = VAR_13;
      VAR_8.op_modifier = 0;
      VAR_8.is_mem = 0;
      VAR_8.in_offset = 0;
      VAR_8.in_bracket = 0;
      VAR_8.reg = ((void*)0);
      VAR_8.disp[0] = '\0';
      VAR_8.next_operand = ((void*)0);


      FUNC_8 ();
      VAR_14 = FUNC_7 ();

      if (!VAR_14)
 break;

      if (VAR_5.code != VAR_3)
 {
   FUNC_1 (FUNC_0("invalid operand for '%s' ('%s' unexpected)"),
    VAR_6->start->name, VAR_5.str);
   VAR_14 = 0;
 }


      else if (VAR_8.is_mem)
 {
   if ((VAR_7.mem_operands == 1
        && (VAR_6->start->opcode_modifier & VAR_0) == 0)
       || VAR_7.mem_operands == 2)
     {
       FUNC_1 (FUNC_0("too many memory references for '%s'"),
        VAR_6->start->name);
       VAR_14 = 0;
     }
   else
     {
       char *VAR_16 = VAR_8.disp;
       VAR_7.mem_operands++;

       if (!VAR_10 && VAR_8.is_mem < 0)

  FUNC_2 (FUNC_0("Treating `%s' as memory reference"), VAR_12);


       if (*VAR_16 != '\0')
  VAR_14 = FUNC_4 (VAR_16, VAR_16 + FUNC_9 (VAR_16));
       if (VAR_14)
  {



    if (VAR_7.base_reg
        && VAR_7.index_reg
        && (VAR_7.base_reg->reg_type & VAR_2)
        && (VAR_7.index_reg->reg_type & VAR_2)
        && VAR_7.base_reg->reg_num >= 6
        && VAR_7.index_reg->reg_num < 6)
      {
        const reg_entry *VAR_17 = VAR_7.index_reg;

        VAR_7.index_reg = VAR_7.base_reg;
        VAR_7.base_reg = VAR_17;
      }
    VAR_14 = FUNC_6 (VAR_12);
  }
     }
 }


      else if ((VAR_8.op_modifier & (1 << VAR_4))
        || VAR_8.reg == ((void*)0))
 VAR_14 = FUNC_5 (VAR_8.disp);

      if (VAR_8.next_operand && VAR_11 >= VAR_1 - 1)
 VAR_14 = 0;
      if (!VAR_14 || !VAR_8.next_operand)
 break;
      VAR_8.op_string = VAR_8.next_operand;
      VAR_11 = VAR_7.operands++;
    }

  FUNC_3 (VAR_15);
  FUNC_3 (VAR_8.disp);

  return VAR_14;
}
