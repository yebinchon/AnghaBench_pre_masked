
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct mv_gpio_softc {scalar_t__ pin_num; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_1, uint32_t VAR_2, uint8_t VAR_3)
{
 uint32_t VAR_4;
 struct mv_gpio_softc *VAR_5;
 VAR_5 = (struct mv_gpio_softc *)FUNC_1(VAR_1);

 FUNC_0();

 if (VAR_2 >= VAR_5->pin_num)
  return;

 VAR_4 = VAR_0;

 if (VAR_3)
  FUNC_3(VAR_1, VAR_4, VAR_2);
 else
  FUNC_2(VAR_1, VAR_4, VAR_2);
}
