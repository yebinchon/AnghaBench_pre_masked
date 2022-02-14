
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct template_parm_data {int level; int* parms; int* arg_uses_template_parms; size_t current_arg; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5 (tree VAR_1, void* VAR_2)
{
  int VAR_3;
  int VAR_4;
  struct template_parm_data* VAR_5 = (struct template_parm_data*) VAR_2;

  if (FUNC_4 (VAR_1) == VAR_0)
    {
      VAR_3 = FUNC_1 (VAR_1);
      VAR_4 = FUNC_0 (VAR_1);
    }
  else
    {
      VAR_3 = FUNC_3 (VAR_1);
      VAR_4 = FUNC_2 (VAR_1);
    }

  if (VAR_3 == VAR_5->level)
    {
      VAR_5->parms[VAR_4] = 1;
      VAR_5->arg_uses_template_parms[VAR_5->current_arg] = 1;
    }



  return 0;
}
