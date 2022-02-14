
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct check_dependence_data {int addr; int mode; int exp; } ;
typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2 (rtx *VAR_1, void *VAR_2)
{
  struct check_dependence_data *VAR_3 = (struct check_dependence_data *) VAR_2;
  if (*VAR_1 && FUNC_0 (*VAR_1))
    return FUNC_1 (VAR_3->exp, VAR_3->mode, VAR_3->addr, *VAR_1,
          VAR_0);
  else
    return 0;
}
