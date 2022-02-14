
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct mv_gpio_softc {scalar_t__ pin_num; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_3(device_t VAR_2, uint32_t VAR_3, uint8_t VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7, VAR_8;
 struct mv_gpio_softc *VAR_9;
 VAR_9 = (struct mv_gpio_softc *)FUNC_1(VAR_2);

 if (VAR_3 >= VAR_9->pin_num)
  return (0);

 VAR_5 = VAR_0;
 VAR_6 = VAR_1;

 VAR_7 = FUNC_2(VAR_2, VAR_5);

 if (VAR_4) {
  VAR_8 = FUNC_2(VAR_2, VAR_6);
  return ((VAR_7 & FUNC_0(VAR_3)) ^ (VAR_8 & FUNC_0(VAR_3)));
 } else
  return (VAR_7 & FUNC_0(VAR_3));
}
