
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_reg_state {int dummy; } ;


 int FUNC_0 (int *) ;
 struct unw_reg_state* VAR_0 ;
 int VAR_1 ;
 struct unw_reg_state* FUNC_1 (int) ;
 int VAR_2 ;

__attribute__((used)) static struct unw_reg_state *
FUNC_2 (void)
{
  struct unw_reg_state *VAR_3;





  VAR_3 = FUNC_1 (sizeof (struct unw_reg_state));
  if (!VAR_3)
    {
      int VAR_4 = FUNC_0 (&VAR_1);
      if (VAR_4 >= 0)
 VAR_3 = &VAR_0[VAR_4];
    }

  return VAR_3;
}
