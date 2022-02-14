
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_5, device_t VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_6, 0, VAR_4);
 if (VAR_7 != 0) {
  FUNC_3(VAR_6, "err(GPIOBUS_PIN_SETFLAGS, OUT) = %d\n", VAR_7);
  return (VAR_7);
 }
 FUNC_0(1);

 VAR_7 = FUNC_1(VAR_5, VAR_6, 0, VAR_3);
 if (VAR_7 != 0) {
  FUNC_3(VAR_6, "err(GPIOBUS_PIN_SET, LOW) = %d\n", VAR_7);
  return (VAR_7);
 }





 FUNC_0(VAR_0);
 VAR_7 = FUNC_1(VAR_5, VAR_6, 0, VAR_1);
 if (VAR_7 != 0) {
  FUNC_3(VAR_6, "err(GPIOBUS_PIN_SET, HIGH) = %d\n", VAR_7);
  return (VAR_7);
 }

 FUNC_0(1);
 VAR_7 = FUNC_2(VAR_5, VAR_6, 0, VAR_2) ;
 if (VAR_7 != 0) {
  FUNC_3(VAR_6, "err(GPIOBUS_PIN_SETFLAGS, IN) = %d\n", VAR_7);
  return (VAR_7);
 }

 FUNC_0(1);
 return (0);
}
