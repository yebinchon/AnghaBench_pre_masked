
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_3)
{
 int VAR_4 = 0;
 u_int32_t VAR_5 = VAR_2;

 VAR_4 = FUNC_0(VAR_3, &VAR_5);
 if (VAR_4 != 0)
  return (VAR_4);






 if (VAR_5 == VAR_1)
  return (-100);
 return (VAR_0);
}
