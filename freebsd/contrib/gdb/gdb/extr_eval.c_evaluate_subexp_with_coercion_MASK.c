
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct symbol {int dummy; } ;
struct expression {TYPE_1__* elts; } ;
typedef enum noside { ____Placeholder_noside } noside ;
typedef enum exp_opcode { ____Placeholder_exp_opcode } exp_opcode ;
struct TYPE_2__ {int opcode; int block; struct symbol* symbol; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct symbol*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct value* FUNC_5 (int ,struct expression*,int*,int) ;
 struct value* FUNC_6 (struct symbol*,int ) ;
 int FUNC_7 (int ) ;
 struct value* FUNC_8 (int ,struct value*) ;

struct value *
FUNC_9 (struct expression *VAR_3,
          int *VAR_4, enum noside VAR_5)
{
  enum exp_opcode VAR_6;
  int VAR_7;
  struct value *VAR_8;
  struct symbol *VAR_9;

  VAR_7 = (*VAR_4);
  VAR_6 = VAR_3->elts[VAR_7].opcode;

  switch (VAR_6)
    {
    case 128:
      VAR_9 = VAR_3->elts[VAR_7 + 2].symbol;
      if (FUNC_1 (FUNC_4 (FUNC_0 (VAR_9))) == VAR_2
   && VAR_0)
 {
   (*VAR_4) += 4;
   VAR_8 =
     FUNC_6
     (VAR_9, FUNC_3 (VAR_3->elts[VAR_7 + 1].block));
   return FUNC_8 (FUNC_7 (FUNC_2 (FUNC_4 (FUNC_0 (VAR_9)))),
        VAR_8);
 }


    default:
      return FUNC_5 (VAR_1, VAR_3, VAR_4, VAR_5);
    }
}
