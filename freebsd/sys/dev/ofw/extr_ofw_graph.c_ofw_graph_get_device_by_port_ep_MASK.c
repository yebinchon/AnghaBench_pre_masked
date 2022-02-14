
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

device_t
FUNC_6(phandle_t VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 phandle_t VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_3(VAR_0, VAR_1);
 if (VAR_4 == 0)
  return (((void*)0));
 VAR_5 = FUNC_2(VAR_4, VAR_2);
 if (VAR_5 == 0)
  return ((void*)0);
 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6 == 0)
  return (((void*)0));
 VAR_3 = FUNC_5(VAR_6);
 if (VAR_3 == 0)
  return (((void*)0));

 return (FUNC_0(FUNC_1(VAR_3)));
}
