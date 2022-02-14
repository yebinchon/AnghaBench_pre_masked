
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct spibus_ivar {int clock; int mode; int cs; } ;
typedef int device_t ;


 int VAR_0 ;
 struct spibus_ivar* FUNC_0 (int ) ;




__attribute__((used)) static int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
 struct spibus_ivar *VAR_5 = FUNC_0(VAR_2);

 switch (VAR_3) {
 default:
  return (VAR_0);
 case 129:
  *(uint32_t *)VAR_4 = VAR_5->cs;
  break;
 case 128:
  *(uint32_t *)VAR_4 = VAR_5->mode;
  break;
 case 130:
  *(uint32_t *)VAR_4 = VAR_5->clock;
  break;
 }
 return (0);
}
