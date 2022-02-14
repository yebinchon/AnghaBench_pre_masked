
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct adb_devinfo {int handler_id; } ;
typedef int device_t ;


 struct adb_devinfo* FUNC_0 (int ) ;

uint8_t
FUNC_1(device_t VAR_0)
{
 struct adb_devinfo *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 return (VAR_1->handler_id);
}
