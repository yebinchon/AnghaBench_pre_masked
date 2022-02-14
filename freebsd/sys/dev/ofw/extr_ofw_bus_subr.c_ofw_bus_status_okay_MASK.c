
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

int
FUNC_2(device_t VAR_0)
{
 const char *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0) || FUNC_1(VAR_1, "okay") == 0 ||
     FUNC_1(VAR_1, "ok") == 0)
  return (1);

 return (0);
}
