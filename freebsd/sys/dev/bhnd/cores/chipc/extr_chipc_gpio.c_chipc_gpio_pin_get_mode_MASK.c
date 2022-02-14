
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct chipc_gpio_softc {int dummy; } ;
typedef int chipc_gpio_pin_mode ;


 int FUNC_0 (struct chipc_gpio_softc*,int ) ;
 int FUNC_1 (struct chipc_gpio_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct chipc_gpio_softc*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static chipc_gpio_pin_mode
FUNC_3(struct chipc_gpio_softc *VAR_6, uint32_t VAR_7)
{
 FUNC_1(VAR_6, VAR_5);
 FUNC_0(VAR_6, VAR_7);

 if (FUNC_2(VAR_6, VAR_7, VAR_3)) {
  return (VAR_2);
 } else if (FUNC_2(VAR_6, VAR_7, VAR_4)) {
  return (VAR_1);
 } else {
  return (VAR_0);
 }
}
