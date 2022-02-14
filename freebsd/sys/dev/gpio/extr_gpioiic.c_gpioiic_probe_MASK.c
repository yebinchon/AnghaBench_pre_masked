
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobus_ivar {scalar_t__ npins; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct gpiobus_ivar* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct gpiobus_ivar *VAR_4;







 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4->npins < VAR_2) {
  FUNC_1(VAR_3,
      "gpioiic needs at least %d GPIO pins (only %d given).\n",
      VAR_2, VAR_4->npins);
  return (VAR_1);
 }
 FUNC_2(VAR_3, "GPIO I2C bit-banging driver");

 return (VAR_0);
}
