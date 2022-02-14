
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct imx51_gpio_softc {scalar_t__ gpio_npins; int sc_mtx; } ;
typedef int device_t ;


 int FUNC_0 (struct imx51_gpio_softc*,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct imx51_gpio_softc*,int ,unsigned int) ;
 struct imx51_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, uint32_t VAR_3, unsigned int VAR_4)
{
 struct imx51_gpio_softc *VAR_5;

 VAR_5 = FUNC_2(VAR_2);

 if (VAR_3 >= VAR_5->gpio_npins)
  return (VAR_0);

 FUNC_3(&VAR_5->sc_mtx);
 if (VAR_4)
  FUNC_1(VAR_5, VAR_1, (1U << VAR_3));
 else
  FUNC_0(VAR_5, VAR_1, (1U << VAR_3));
 FUNC_4(&VAR_5->sc_mtx);

 return (0);
}
