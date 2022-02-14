
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
struct imx51_gpio_softc {scalar_t__ gpio_npins; int sc_mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct imx51_gpio_softc*,int ) ;
 int FUNC_1 (struct imx51_gpio_softc*,int ,scalar_t__) ;
 struct imx51_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7, uint32_t VAR_8, uint32_t VAR_9,
    uint32_t *VAR_10)
{
 struct imx51_gpio_softc *VAR_11;
 u_int VAR_12;
 uint32_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_11 = FUNC_2(VAR_7);

 if (VAR_8 != 0 || VAR_9 > VAR_11->gpio_npins)
  return (VAR_0);

 VAR_14 = VAR_15 = VAR_17 = VAR_18 = 0;
 VAR_19 = FUNC_0(VAR_11, VAR_5);

 for (VAR_12 = 0; VAR_12 < VAR_9; ++VAR_12) {
  VAR_13 = 1u << VAR_12;
  VAR_16 = VAR_10[VAR_12];
  if (VAR_16 & VAR_1) {
   VAR_17 |= VAR_13;
  } else if (VAR_16 & VAR_2) {
   VAR_18 |= VAR_13;
   if (VAR_16 & VAR_4)
    VAR_14 |= VAR_13;
   else if (VAR_16 & VAR_3)
    VAR_15 |= VAR_13;
   else
    VAR_15 |= VAR_19 & VAR_13;
  }
 }

 FUNC_3(&VAR_11->sc_mtx);
 FUNC_1(VAR_11, VAR_5,
     (FUNC_0(VAR_11, VAR_5) & ~VAR_14) | VAR_15);
 FUNC_1(VAR_11, VAR_6,
     (FUNC_0(VAR_11, VAR_6) & ~VAR_17) | VAR_18);
 FUNC_4(&VAR_11->sc_mtx);

 return (0);
}
