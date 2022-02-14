
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int device_t ;


 int FUNC_0 (int,char const*) ;
 int FUNC_1 (int ) ;

int
FUNC_2(device_t VAR_0, const char *VAR_1)
{
 phandle_t VAR_2;

 if ((VAR_2 = FUNC_1(VAR_0)) == -1)
  return (0);

 return (FUNC_0(VAR_2, VAR_1));
}
