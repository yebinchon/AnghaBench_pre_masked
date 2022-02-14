
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opt_tab {int flag; scalar_t__ opt; } ;
typedef int mntent_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 struct opt_tab* VAR_2 ;

int
FUNC_1(mntent_t *VAR_3)
{
  struct opt_tab *VAR_4;
  int VAR_5 = 0;
  for (VAR_4 = VAR_2; VAR_4->opt; VAR_4++) {
    VAR_5 |= FUNC_0(VAR_3, VAR_4->opt) ? VAR_4->flag : 0;
  }

  return VAR_5;
}
