
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opt_tab {scalar_t__ opt; } ;


 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;

void
FUNC_2(int VAR_1, struct opt_tab *VAR_2)
{
  int VAR_3;
  int VAR_4 = '{';

  FUNC_0(VAR_0, "\t[-%c {no}", VAR_1);
  for (VAR_3 = 0; VAR_2[VAR_3].opt; VAR_3++) {
    FUNC_0(VAR_0, "%c%ld", VAR_4, VAR_2[VAR_3].opt);
    VAR_4 = ',';
  }
  FUNC_1("}]\n", VAR_0);
}
