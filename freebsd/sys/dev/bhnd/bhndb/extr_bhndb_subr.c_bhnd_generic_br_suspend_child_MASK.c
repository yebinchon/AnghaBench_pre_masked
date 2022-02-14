
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
typedef scalar_t__ device_t ;


 struct resource_list* FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,struct resource_list*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

int
FUNC_6(device_t VAR_1, device_t VAR_2)
{
 struct resource_list *VAR_3;
 int VAR_4;

 if (FUNC_4(VAR_2) != VAR_1)
  FUNC_1(FUNC_4(VAR_1), VAR_2);

 if (FUNC_5(VAR_2))
  return (VAR_0);


 if ((VAR_4 = FUNC_2(VAR_1, VAR_2)))
  return (VAR_4);


 VAR_3 = FUNC_0(FUNC_4(VAR_2), VAR_2);
 if (VAR_3 == ((void*)0))
  return (0);


 FUNC_3(VAR_1, VAR_3);

 return (0);
}
