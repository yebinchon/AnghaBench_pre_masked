
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aw_gpio_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct aw_gpio_softc*) ;
 int FUNC_1 (struct aw_gpio_softc*) ;
 int FUNC_2 (struct aw_gpio_softc*,int ,unsigned int) ;
 struct aw_gpio_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, uint32_t VAR_1, unsigned int VAR_2)
{
 struct aw_gpio_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_0);

 FUNC_0(VAR_3);
 VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_2);
 FUNC_1(VAR_3);

 return (VAR_4);
}
