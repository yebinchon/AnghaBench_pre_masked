
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwgpio_softc {int port; int gpio_npins; int sc_mtx; int * busdev; TYPE_1__* gpio_pins; int dev; int node; int parent; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_pin; int gp_name; int gp_flags; int gp_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ,char*,int*,int) ;
 int VAR_9 ;
 int FUNC_3 (struct dwgpio_softc*,int ) ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct dwgpio_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int *,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (int ,int ,char*,int,int) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_11)
{
 struct dwgpio_softc *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_12 = FUNC_6(VAR_11);
 VAR_12->parent = FUNC_5(VAR_11);
 VAR_12->node = FUNC_12(VAR_11);
 VAR_12->dev = VAR_11;
 FUNC_11(&VAR_12->sc_mtx, FUNC_4(VAR_11), ((void*)0), VAR_8);

 if ((FUNC_2(VAR_12->node, "reg", &VAR_12->port, sizeof(VAR_12->port))) <= 0)
  return (VAR_2);

 FUNC_13("port %d\n", VAR_12->port);

 VAR_13 = FUNC_3(VAR_12, VAR_7);
 if (VAR_10 & VAR_9)
  FUNC_8(VAR_12->dev, "Version = 0x%08x\n", VAR_13);


 VAR_15 = FUNC_3(VAR_12, VAR_4);
 VAR_14 = (VAR_15 >> FUNC_0(VAR_12->port)) & VAR_1;

 VAR_12->gpio_npins = VAR_14 + 1;

 for (VAR_16 = 0; VAR_16 < VAR_12->gpio_npins; VAR_16++) {
  VAR_12->gpio_pins[VAR_16].gp_pin = VAR_16;
  VAR_12->gpio_pins[VAR_16].gp_caps = VAR_0;
  VAR_12->gpio_pins[VAR_16].gp_flags =
      (FUNC_3(VAR_12, FUNC_1(VAR_12->port)) & (1 << VAR_16)) ?
      VAR_6: VAR_5;
  FUNC_14(VAR_12->gpio_pins[VAR_16].gp_name, VAR_3,
      "dwgpio%d.%d", FUNC_7(VAR_11), VAR_16);
 }
 VAR_12->busdev = FUNC_9(VAR_11);
 if (VAR_12->busdev == ((void*)0)) {
  FUNC_10(&VAR_12->sc_mtx);
  return (VAR_2);
 }

 return (0);
}
