
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_1(device_t VAR_4)
{
 int VAR_5;
 uint32_t VAR_6;

 VAR_6 = VAR_2;
 VAR_5 = FUNC_0(VAR_4, &VAR_6);
 if (VAR_5 != 0)
  return (VAR_5);





 if (VAR_6 == VAR_3)
  return (VAR_0);

 return (VAR_1);
}
