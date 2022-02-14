
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

int
FUNC_3(phandle_t VAR_1)
{
 char VAR_2[VAR_0];
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, "status");
 if (VAR_3 <= 0)
  return (1);

 FUNC_0(VAR_1, "status", VAR_2, VAR_0);
 if ((VAR_3 == 5 && (FUNC_2(VAR_2, "okay", VAR_3) == 0)) ||
     (VAR_3 == 3 && (FUNC_2(VAR_2, "ok", VAR_3))))
  return (1);

 return (0);
}
