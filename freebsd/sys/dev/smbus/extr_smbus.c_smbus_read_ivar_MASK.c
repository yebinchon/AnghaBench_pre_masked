
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbus_ivar {uintptr_t addr; } ;
typedef int device_t ;


 int VAR_0 ;

 struct smbus_ivar* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
 struct smbus_ivar *VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 switch (VAR_3) {
 case 128:
  if (VAR_5->addr != 0)
   *VAR_4 = VAR_5->addr;
  else
   *VAR_4 = -1;
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
