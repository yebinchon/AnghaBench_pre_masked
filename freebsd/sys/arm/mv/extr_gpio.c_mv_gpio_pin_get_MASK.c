
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
 unsigned int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, uint32_t VAR_2, unsigned int *VAR_3)
{
 struct mv_gpio_softc *VAR_4 = FUNC_2(VAR_1);
 if (VAR_3 == ((void*)0))
  return (VAR_0);

 if (VAR_2 >= VAR_4->pin_num)
  return (VAR_0);

 FUNC_0();
 *VAR_3 = FUNC_3(VAR_1, VAR_2);
 FUNC_1();

 return (0);
}
