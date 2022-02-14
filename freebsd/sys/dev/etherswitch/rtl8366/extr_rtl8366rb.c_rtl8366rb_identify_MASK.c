
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbus_ivar {int addr; } ;
typedef int driver_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ,char*,int) ;
 struct iicbus_ivar* FUNC_1 (int ) ;
 int VAR_0 ;
 int * FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_3(driver_t *VAR_1, device_t VAR_2)
{
 device_t VAR_3;
 struct iicbus_ivar *VAR_4;

 if (FUNC_2(VAR_2, "rtl8366rb", -1) == ((void*)0)) {
  VAR_3 = FUNC_0(VAR_2, 0, "rtl8366rb", -1);
  VAR_4 = FUNC_1(VAR_3);
  VAR_4->addr = VAR_0;
 }
}
