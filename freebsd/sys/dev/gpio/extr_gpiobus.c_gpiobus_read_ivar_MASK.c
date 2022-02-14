
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobus_ivar {uintptr_t npins; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct gpiobus_ivar* FUNC_0 (int ) ;



__attribute__((used)) static int
FUNC_1(device_t VAR_2, device_t VAR_3, int VAR_4, uintptr_t *VAR_5)
{
 struct gpiobus_ivar *VAR_6;

 VAR_6 = FUNC_0(VAR_3);
        switch (VAR_4) {
 case 129:
  *VAR_5 = VAR_6->npins;
  break;
 case 128:

  return (VAR_1);
        default:
                return (VAR_0);
        }

 return (0);
}
