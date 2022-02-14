
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;


 int FUNC_0 (scalar_t__,char const*,int *,size_t) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

ssize_t
FUNC_2(phandle_t VAR_0, const char *VAR_1, pcell_t *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4;

 for (; VAR_0 != 0; VAR_0 = FUNC_1(VAR_0))
  if ((VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3)) != -1)
   return (VAR_4);
 return (-1);
}
