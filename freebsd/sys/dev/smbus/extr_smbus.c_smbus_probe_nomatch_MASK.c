
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbus_ivar {scalar_t__ addr; } ;
typedef int device_t ;


 struct smbus_ivar* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, device_t VAR_1)
{
 struct smbus_ivar *VAR_2 = FUNC_0(VAR_1);





 if (VAR_2->addr != 0)
  FUNC_1(VAR_0, "<unknown device> at addr %#x\n",
      VAR_2->addr);
}
