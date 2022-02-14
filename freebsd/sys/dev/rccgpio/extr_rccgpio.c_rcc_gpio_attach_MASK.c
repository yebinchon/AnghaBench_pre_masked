
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rcc_gpio_softc {int sc_gpio_npins; int sc_mtx; int * sc_io_res; scalar_t__ sc_io_rid; int * sc_busdev; int sc_output; int sc_bsh; int sc_bst; int sc_dev; } ;
typedef int device_t ;
struct TYPE_3__ {int caps; int pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rcc_gpio_softc*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 (int ,int ,scalar_t__*,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int *) ;
 struct rcc_gpio_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,char*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct rcc_gpio_softc*,int ,int ,int ) ;
 TYPE_1__* VAR_8 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_9)
{
 int VAR_10;
 struct rcc_gpio_softc *VAR_11;

 VAR_11 = FUNC_3(VAR_9);
  VAR_11->sc_dev = VAR_9;


 VAR_11->sc_io_rid = 0;
 VAR_11->sc_io_res = FUNC_1(VAR_9, VAR_7,
     &VAR_11->sc_io_rid, VAR_6);
 if (VAR_11->sc_io_res == ((void*)0)) {
  FUNC_4(VAR_9, "cannot allocate memory window\n");
  return (VAR_0);
 }
 VAR_11->sc_bst = FUNC_11(VAR_11->sc_io_res);
 VAR_11->sc_bsh = FUNC_10(VAR_11->sc_io_res);
 FUNC_7(&VAR_11->sc_mtx, "rcc-gpio", "gpio", VAR_2);


 VAR_11->sc_gpio_npins = FUNC_8(VAR_8);
 for (VAR_10 = 0; VAR_10 < VAR_11->sc_gpio_npins; VAR_10++) {

  FUNC_9(VAR_11, VAR_5, 0, VAR_8[VAR_10].pin);

  if (VAR_8[VAR_10].caps & VAR_1)
   FUNC_9(VAR_11, VAR_4,
       VAR_8[VAR_10].pin, 0);
  else
   FUNC_9(VAR_11, VAR_4,
       0, VAR_8[VAR_10].pin);
 }
 FUNC_0(VAR_11, VAR_3, VAR_11->sc_output);


 VAR_11->sc_busdev = FUNC_5(VAR_9);
 if (VAR_11->sc_busdev == ((void*)0)) {
  FUNC_2(VAR_9, VAR_7, VAR_11->sc_io_rid,
      VAR_11->sc_io_res);
  FUNC_6(&VAR_11->sc_mtx);
  return (VAR_0);
 }

 return (0);
}
