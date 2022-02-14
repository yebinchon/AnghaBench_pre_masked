
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct chipc_gpio_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct chipc_gpio_softc*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct chipc_gpio_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_9, uint32_t VAR_10, uint32_t *VAR_11)
{
 struct chipc_gpio_softc *VAR_12 = FUNC_2(VAR_9);

 if (!FUNC_1(VAR_10))
  return (VAR_0);

 *VAR_11 = (VAR_1 | VAR_2 | VAR_6);

 if (!FUNC_0(VAR_12, VAR_8))
  *VAR_11 |= (VAR_4 | VAR_3);

 if (!FUNC_0(VAR_12, VAR_7))
  *VAR_11 |= VAR_5;

 return (0);
}
