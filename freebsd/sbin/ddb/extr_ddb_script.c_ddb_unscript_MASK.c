
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,int *,int *,char*,scalar_t__) ;
 int FUNC_3 () ;

void
FUNC_4(int VAR_6, char *VAR_7[])
{
 int VAR_8;

 if (VAR_6 != 2)
  FUNC_3();
 VAR_7++;
 VAR_6--;
 VAR_8 = FUNC_2(VAR_4, ((void*)0), ((void*)0), VAR_7[0],
     FUNC_1(VAR_7[0]) + 1);
 if (VAR_8 < 0 && VAR_5 == VAR_0) {
  VAR_5 = VAR_1;
  FUNC_0(VAR_2, "sysctl: %s", VAR_7[0]);
 } else if (VAR_8 < 0)
  FUNC_0(VAR_3, "sysctl: %s", VAR_4);
}
