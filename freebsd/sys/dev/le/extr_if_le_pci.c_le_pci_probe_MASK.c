
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{

 if (FUNC_2(VAR_3) != VAR_0)
  return (VAR_2);

 switch (FUNC_1(VAR_3)) {
 case 128:
  FUNC_0(VAR_3, "AMD PCnet-PCI");

  return (VAR_1);
 case 129:
  FUNC_0(VAR_3, "AMD PCnet-Home");

  return (VAR_1);
 default:
  return (VAR_2);
 }
}
