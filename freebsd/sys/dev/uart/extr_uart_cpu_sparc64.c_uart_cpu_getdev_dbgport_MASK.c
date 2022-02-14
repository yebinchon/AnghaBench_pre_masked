
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,char*,int) ;
 int FUNC_2 (char*,char*,size_t) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static phandle_t
FUNC_4(char *VAR_0, size_t VAR_1)
{
 char VAR_2[sizeof("serial")];
 phandle_t VAR_3;

 if (!FUNC_2("hw.uart.dbgport", VAR_0, VAR_1))
  return (-1);
 if ((VAR_3 = FUNC_0(VAR_0)) == -1)
  return (-1);
 if (FUNC_1(VAR_3, "device_type", VAR_2, sizeof(VAR_2)) == -1)
  return (-1);
 if (FUNC_3(VAR_2, "serial") != 0)
  return (-1);
 return (VAR_3);
}
