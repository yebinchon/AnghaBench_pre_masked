
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct type {int dummy; } ;
struct expression {TYPE_1__* elts; } ;
typedef enum noside { ____Placeholder_noside } noside ;
typedef enum exp_opcode { ____Placeholder_exp_opcode } exp_opcode ;
struct TYPE_2__ {int opcode; char string; int longconst; } ;
typedef int LONGEST ;


 int FUNC_0 (int) ;
 int VAR_0 ;


 int VAR_1 ;
 struct value* FUNC_1 (struct type*,struct expression*,int*,int) ;
 int FUNC_2 (int ) ;
 struct value* FUNC_3 (char*,int) ;
 struct value* FUNC_4 (char*) ;
 struct value* FUNC_5 (int ,int ) ;

__attribute__((used)) static struct value *
FUNC_6 (struct type *VAR_2, struct expression *VAR_3,
       int *VAR_4, enum noside VAR_5)
{
  enum exp_opcode VAR_6 = VAR_3->elts[*VAR_4].opcode;
  int VAR_7, VAR_8;
  char *VAR_9;
  switch (VAR_6)
    {
    case 128:
      VAR_8 = (*VAR_4)++;
      VAR_7 = FUNC_2 (VAR_3->elts[VAR_8 + 1].longconst);
      (*VAR_4) += 3 + FUNC_0 (VAR_7 + 1);
      if (VAR_5 == VAR_0)
 goto nosideret;
      VAR_9 = &VAR_3->elts[VAR_8 + 2].string;
      return FUNC_4 (VAR_9);
    case 129:
      VAR_8 = (*VAR_4)++;
      VAR_7 = FUNC_2 (VAR_3->elts[VAR_8 + 1].longconst);
      (*VAR_4) += 3 + FUNC_0 (VAR_7 + 1);
      if (VAR_5 == VAR_0)
 goto nosideret;
      VAR_9 = &VAR_3->elts[VAR_8 + 2].string;
      return FUNC_3 (VAR_9, VAR_7);
    default:;
    }
  return FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_5);
nosideret:
  return FUNC_5 (VAR_1, (LONGEST) 1);
}
