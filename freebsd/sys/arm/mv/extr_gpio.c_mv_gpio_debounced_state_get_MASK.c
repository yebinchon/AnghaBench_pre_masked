
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mv_gpio_softc {int debounced_state_hi; int debounced_state_lo; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static uint32_t
FUNC_2(device_t VAR_1, int VAR_2)
{
 uint32_t *VAR_3;
 struct mv_gpio_softc *VAR_4;
 VAR_4 = (struct mv_gpio_softc *)FUNC_1(VAR_1);

 FUNC_0();

 if (VAR_2 >= VAR_0) {
  VAR_3 = &VAR_4->debounced_state_hi;
  VAR_2 -= VAR_0;
 } else
  VAR_3 = &VAR_4->debounced_state_lo;

 return (*VAR_3 & (1 << VAR_2));
}
