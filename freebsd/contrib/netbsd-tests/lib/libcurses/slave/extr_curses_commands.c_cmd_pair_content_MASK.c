
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (short,short*,short*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (short) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,char*,short*) ;

void
FUNC_7(int VAR_0, char **VAR_1)
{
 short VAR_2, VAR_3, VAR_4;

 if (FUNC_0(VAR_0, 1) == 1)
  return;

 if (FUNC_6(VAR_1[0], "%hd", &VAR_2) == 0) {
  FUNC_2(1);
  FUNC_3("BAD ARGUMENT");
  return;
 }


 FUNC_2(3);
 FUNC_5(FUNC_1(VAR_2, &VAR_3, &VAR_4));
 FUNC_4(VAR_3);
 FUNC_4(VAR_4);
}
