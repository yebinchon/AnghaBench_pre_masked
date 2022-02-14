
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct spibus_ivar {void* mode; void* clock; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct spibus_ivar* FUNC_0 (scalar_t__) ;



 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, device_t VAR_3, int VAR_4, uintptr_t VAR_5)
{
 struct spibus_ivar *VAR_6 = FUNC_0(VAR_3);

 if (VAR_6 == ((void*)0) || FUNC_1(VAR_3) != VAR_2)
  return (VAR_0);

 switch (VAR_4) {
 case 130:

  if (VAR_5 == 0)
   return (VAR_1);
  VAR_6->clock = (uint32_t)VAR_5;
  break;
 case 129:

  return (VAR_1);
 case 128:

  if (VAR_5 > 3)
   return (VAR_1);
  VAR_6->mode = (uint32_t)VAR_5;
  break;
 default:
  return (VAR_1);
 }

 return (0);
}
