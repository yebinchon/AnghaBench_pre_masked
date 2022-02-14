
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type ;
typedef int stdout ;
typedef int phandle_t ;
typedef char ihandle_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,char*,int) ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static phandle_t
FUNC_4()
{
 phandle_t VAR_0, VAR_1;
 ihandle_t VAR_2;
 char VAR_3[64];

 VAR_0 = FUNC_0("/chosen");
 FUNC_1(VAR_0, "stdout", &VAR_2, sizeof(VAR_2));
 VAR_1 = FUNC_2(VAR_2);
 if (VAR_1 != -1) {

  FUNC_1(VAR_1, "device_type", VAR_3, sizeof(VAR_3));

  if (FUNC_3(VAR_3, "display") == 0)
   return (VAR_1);
 }

 VAR_1 = FUNC_0("screen");

 return (VAR_1);
}
