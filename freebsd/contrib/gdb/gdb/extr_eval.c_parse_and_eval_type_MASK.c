
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int dummy; } ;
struct expression {TYPE_1__* elts; } ;
struct TYPE_2__ {scalar_t__ opcode; struct type* type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 struct expression* FUNC_3 (char*) ;

struct type *
FUNC_4 (char *VAR_1, int VAR_2)
{
  char *VAR_3 = (char *) FUNC_0 (VAR_2 + 4);
  struct expression *VAR_4;
  VAR_3[0] = '(';
  FUNC_2 (VAR_3 + 1, VAR_1, VAR_2);
  VAR_3[VAR_2 + 1] = ')';
  VAR_3[VAR_2 + 2] = '0';
  VAR_3[VAR_2 + 3] = '\0';
  VAR_4 = FUNC_3 (VAR_3);
  if (VAR_4->elts[0].opcode != VAR_0)
    FUNC_1 ("Internal error in eval_type.");
  return VAR_4->elts[1].type;
}
