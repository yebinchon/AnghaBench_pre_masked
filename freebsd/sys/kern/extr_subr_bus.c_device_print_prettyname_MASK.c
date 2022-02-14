
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

int
FUNC_3(device_t VAR_0)
{
 const char *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 == ((void*)0))
  return (FUNC_2("unknown: "));
 return (FUNC_2("%s%d: ", VAR_1, FUNC_1(VAR_0)));
}
