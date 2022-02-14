
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_of_data {int found; int pat; } ;
typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct set_of_data*) ;
 int VAR_1 ;

rtx
FUNC_3 (rtx VAR_2, rtx VAR_3)
{
  struct set_of_data VAR_4;
  VAR_4.found = VAR_0;
  VAR_4.pat = VAR_2;
  FUNC_2 (FUNC_0 (VAR_3) ? FUNC_1 (VAR_3) : VAR_3, VAR_1, &VAR_4);
  return VAR_4.found;
}
