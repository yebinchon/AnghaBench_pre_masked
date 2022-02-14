
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobus_ivar {int npins; } ;
typedef int device_t ;


 struct gpiobus_ivar* FUNC_0 (int ) ;
 int FUNC_1 (struct gpiobus_ivar*,char*,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
 struct gpiobus_ivar *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4->npins > 1)
  FUNC_2(VAR_2, "pins=", VAR_3);
 else
  FUNC_2(VAR_2, "pin=", VAR_3);
 FUNC_1(VAR_4, VAR_2, VAR_3);

 return (0);
}
