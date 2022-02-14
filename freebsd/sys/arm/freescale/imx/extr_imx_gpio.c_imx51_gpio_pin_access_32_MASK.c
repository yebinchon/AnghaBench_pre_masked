
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct imx51_gpio_softc {int sc_mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct imx51_gpio_softc*,int ) ;
 int FUNC_1 (struct imx51_gpio_softc*,int ,scalar_t__) ;
 struct imx51_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, uint32_t VAR_3, uint32_t VAR_4,
    uint32_t VAR_5, uint32_t *VAR_6)
{
 struct imx51_gpio_softc *VAR_7;

 if (VAR_3 != 0)
  return (VAR_0);

 VAR_7 = FUNC_2(VAR_2);

 if (VAR_6 != ((void*)0))
  *VAR_6 = FUNC_0(VAR_7, VAR_1);

 if ((VAR_4 | VAR_5) != 0) {
  FUNC_3(&VAR_7->sc_mtx);
  FUNC_1(VAR_7, VAR_1,
      (FUNC_0(VAR_7, VAR_1) & ~VAR_4) ^ VAR_5);
  FUNC_4(&VAR_7->sc_mtx);
 }

 return (0);
}
