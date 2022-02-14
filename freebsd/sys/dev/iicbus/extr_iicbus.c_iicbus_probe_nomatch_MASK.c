
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbus_ivar {int addr; } ;
typedef int device_t ;


 struct iicbus_ivar* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, device_t VAR_1)
{
 struct iicbus_ivar *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_0, "<unknown card> at addr %#x\n", VAR_2->addr);
}
