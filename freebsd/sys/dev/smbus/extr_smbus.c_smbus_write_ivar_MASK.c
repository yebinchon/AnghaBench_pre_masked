
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbus_ivar {uintptr_t addr; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;

 struct smbus_ivar* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, device_t VAR_3, int VAR_4, uintptr_t VAR_5)
{
 struct smbus_ivar *VAR_6;

 VAR_6 = FUNC_0(VAR_3);
 switch (VAR_4) {
 case 128:

  if (VAR_6->addr != 0)
   return (VAR_0);
  VAR_6->addr = VAR_5;
  break;
 default:
  return (VAR_1);
 }
 return (0);
}
