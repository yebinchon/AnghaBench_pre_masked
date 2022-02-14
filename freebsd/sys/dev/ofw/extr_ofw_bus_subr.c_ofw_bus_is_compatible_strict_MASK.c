
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 char* FUNC_0 (int ) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;

int
FUNC_3(device_t VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 size_t VAR_3;

 if ((VAR_2 = FUNC_0(VAR_0)) == ((void*)0))
  return (0);

 VAR_3 = FUNC_1(VAR_1);
 if (FUNC_1(VAR_2) == VAR_3 &&
     FUNC_2(VAR_2, VAR_1, VAR_3) == 0)
  return (1);

 return (0);
}
