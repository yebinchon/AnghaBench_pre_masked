
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int *,int *,char*,scalar_t__) ;
 int FUNC_5 () ;

void
FUNC_6(int VAR_3, char *VAR_4[])
{

 if (VAR_3 != 2)
  FUNC_5();
 VAR_4++;
 VAR_3--;
 if (FUNC_2(VAR_4[0], '=') != 0) {
  if (FUNC_4(VAR_1, ((void*)0), ((void*)0), VAR_4[0],
      FUNC_3(VAR_4[0]) + 1) < 0)
   FUNC_1(VAR_0, "sysctl: %s", VAR_2);
 } else
  FUNC_0(VAR_4[0]);
}
