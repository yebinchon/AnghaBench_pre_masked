
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct rk30_gpio_softc {int sc_gpio_npins; int sc_dev; TYPE_1__* sc_gpio_pins; } ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int ihandle_t ;
struct TYPE_2__ {int gp_pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*,int*,int) ;
 scalar_t__ FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (struct rk30_gpio_softc*,TYPE_1__*,int) ;
 int FUNC_3 (int ,int,int ) ;
 struct rk30_gpio_softc* VAR_4 ;

int
FUNC_4(phandle_t VAR_5, pcell_t *VAR_6, int VAR_7)
{
 struct rk30_gpio_softc *VAR_8;
 pcell_t VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 u_long VAR_18, VAR_19;

 VAR_8 = VAR_4;
 if (VAR_8 == ((void*)0))
  return VAR_1;

 if (FUNC_0(VAR_5, "#gpio-cells", &VAR_9, sizeof(pcell_t)) < 0)
  return (VAR_1);
 if (VAR_9 != 2)
  return (VAR_1);

 VAR_13 = VAR_9 * sizeof(pcell_t) + sizeof(phandle_t);
 VAR_12 = VAR_7 / VAR_13;

 if (FUNC_1(VAR_5, &VAR_18, &VAR_19))
  return (VAR_1);





 VAR_10 = sizeof(ihandle_t) / sizeof(pcell_t);
 VAR_6 += VAR_10;
 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_16 = VAR_6[0];
  VAR_14 = VAR_6[1];
  VAR_15 = VAR_6[2];

  for (VAR_17 = 0; VAR_17 < VAR_8->sc_gpio_npins; VAR_17++) {
   if (VAR_8->sc_gpio_pins[VAR_17].gp_pin == VAR_16)
    break;
  }
  if (VAR_17 >= VAR_8->sc_gpio_npins)
   return (VAR_0);

  FUNC_2(VAR_8, &VAR_8->sc_gpio_pins[VAR_17], VAR_15);

  if (VAR_14 == 1) {

   FUNC_3(VAR_8->sc_dev, VAR_16, VAR_2);
  } else {

   FUNC_3(VAR_8->sc_dev, VAR_16, VAR_3);
  }
  VAR_6 += VAR_9 + VAR_10;
 }

 return (0);
}
