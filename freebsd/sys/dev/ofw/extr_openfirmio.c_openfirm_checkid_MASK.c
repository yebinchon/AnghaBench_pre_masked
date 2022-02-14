
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(phandle_t VAR_0, phandle_t VAR_1)
{

 for (; VAR_0 != 0; VAR_0 = FUNC_1(VAR_0))
  if (VAR_0 == VAR_1 || FUNC_2(FUNC_0(VAR_0), VAR_1))
   return (1);

 return (0);
}
