
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int inst ;
typedef int input ;
typedef int ihandle_t ;
typedef int buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,size_t,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static phandle_t
FUNC_6(phandle_t VAR_0, char *VAR_1, size_t VAR_2)
{
 char VAR_3[sizeof("serial")];
 ihandle_t VAR_4;
 phandle_t VAR_5, VAR_6, VAR_7;

 if (FUNC_1(VAR_0, "input-device", VAR_1, VAR_2) == -1)
  return (-1);
 VAR_6 = FUNC_0(VAR_1);
 if (FUNC_1(VAR_0, "output-device", VAR_1, VAR_2) == -1)
  return (-1);
 VAR_7 = FUNC_0(VAR_1);
 if (VAR_6 == -1 || VAR_7 == -1 ||
     FUNC_2(VAR_6, "keyboard") >= 0) {
  if ((VAR_5 = FUNC_0("/chosen")) == -1)
   return (-1);
  if (FUNC_1(VAR_5, "stdin", &VAR_4, sizeof(VAR_4)) == -1)
   return (-1);
  if ((VAR_6 = FUNC_3(VAR_4)) == -1)
   return (-1);
  if (FUNC_1(VAR_5, "stdout", &VAR_4, sizeof(VAR_4)) == -1)
   return (-1);
  if ((VAR_7 = FUNC_3(VAR_4)) == -1)
   return (-1);
  FUNC_4(VAR_1, VAR_2, "ttya");
 }
 if (VAR_6 != VAR_7)
  return (-1);
 if (FUNC_1(VAR_6, "device_type", VAR_3, sizeof(VAR_3)) == -1)
  return (-1);
 if (FUNC_5(VAR_3, "serial") != 0)
  return (-1);

 if (FUNC_1(VAR_6, "name", VAR_3, sizeof(VAR_3)) > 0 &&
     !FUNC_5(VAR_3, "sgcn")) {
  if ((VAR_5 = FUNC_0("/chosen")) == -1)
   return (-1);
  if (FUNC_1(VAR_5, "iosram", &VAR_6, sizeof(VAR_6)) == -1)
   return (-1);
 }
 return (VAR_6);
}
