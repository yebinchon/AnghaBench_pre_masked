
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mv_gpio_softc {scalar_t__ pin_num; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct mv_gpio_softc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, uint32_t VAR_2)
{
 struct mv_gpio_softc *VAR_3 = FUNC_2(VAR_1);
 uint32_t VAR_4;
 if (VAR_2 >= VAR_3->pin_num)
  return (VAR_0);

 FUNC_0();
 VAR_4 = FUNC_3(VAR_1, VAR_2);
 VAR_4 = (~VAR_4) & 1;
 FUNC_4(VAR_1, VAR_2, VAR_4);
 FUNC_1();

 return (0);
}
