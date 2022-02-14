
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_flags {int dummy; } ;
typedef int rtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,struct reg_flags,int) ;

__attribute__((used)) static int
FUNC_4 (rtx VAR_0, struct reg_flags VAR_1, int VAR_2)
{
  int VAR_3 = FUNC_2 (VAR_0);
  int VAR_4 = FUNC_1 (FUNC_2 (VAR_0), FUNC_0 (VAR_0));

  if (VAR_4 == 1)
    return FUNC_3 (VAR_3, VAR_1, VAR_2);
  else
    {
      int VAR_5 = 0;
      while (--VAR_4 >= 0)
 VAR_5 |= FUNC_3 (VAR_3 + VAR_4, VAR_1, VAR_2);
      return VAR_5;
    }
}
