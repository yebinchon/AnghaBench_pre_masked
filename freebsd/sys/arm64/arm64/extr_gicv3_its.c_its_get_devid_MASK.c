
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,uintptr_t*) ;

__attribute__((used)) static uint32_t
FUNC_2(device_t VAR_1)
{
 uintptr_t VAR_2;

 if (FUNC_1(VAR_1, VAR_0, &VAR_2) != 0)
  FUNC_0("its_get_devid: Unable to get the MSI DeviceID");

 return (VAR_2);
}
