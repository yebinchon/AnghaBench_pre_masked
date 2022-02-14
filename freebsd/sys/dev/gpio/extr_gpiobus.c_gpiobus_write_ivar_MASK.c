
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gpiobus_ivar {uintptr_t npins; int * pins; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gpiobus_ivar* FUNC_0 (int ) ;


 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct gpiobus_ivar*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, device_t VAR_4, int VAR_5, uintptr_t VAR_6)
{
 struct gpiobus_ivar *VAR_7;
 const uint32_t *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(VAR_4);
        switch (VAR_5) {
 case 129:

  if (VAR_7->npins != 0) {
   return (VAR_0);
  }
  VAR_7->npins = VAR_6;
  if (FUNC_3(VAR_7) != 0) {
   FUNC_1(VAR_4, "cannot allocate device ivars\n");
   VAR_7->npins = 0;
   return (VAR_2);
  }
  break;
 case 128:
  VAR_8 = (const uint32_t *)VAR_6;
  for (VAR_9 = 0; VAR_9 < VAR_7->npins; VAR_9++)
   VAR_7->pins[VAR_9] = VAR_8[VAR_9];
  if (FUNC_2(VAR_3, VAR_4) != 0)
   return (VAR_0);
  break;
        default:
                return (VAR_1);
        }

        return (0);
}
