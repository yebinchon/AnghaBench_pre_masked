
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_data {int dummy; } ;
typedef int rtx ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct value_data*) ;
 int FUNC_5 (int ,int ,struct value_data*) ;

__attribute__((used)) static int
FUNC_6 (rtx *VAR_2, void *VAR_3)
{
  rtx VAR_4 = *VAR_2;
  struct value_data *VAR_5 = VAR_3;

  if (FUNC_1 (FUNC_0 (VAR_4)) == VAR_1)
    {
      VAR_4 = FUNC_3 (VAR_4, 0);
      FUNC_4 (VAR_4, VAR_5);
      FUNC_5 (FUNC_2 (VAR_4), VAR_0, VAR_5);
      return -1;
    }

  return 0;
}
