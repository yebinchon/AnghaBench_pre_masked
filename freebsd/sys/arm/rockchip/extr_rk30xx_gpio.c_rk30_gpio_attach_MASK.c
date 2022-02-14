
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk30_gpio_softc {int sc_bank; int sc_gpio_npins; int sc_mtx; void* sc_mem_res; void* sc_irq_res; int * sc_busdev; TYPE_1__* sc_gpio_pins; int sc_dev; int sc_bsh; int sc_bst; } ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_2__ {int gp_pin; int gp_flags; int gp_caps; int gp_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int ,void*) ;
 struct rk30_gpio_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,char*,int ) ;
 int FUNC_8 (unsigned long*) ;
 int FUNC_9 (int ) ;
 unsigned long* VAR_8 ;
 int FUNC_10 (struct rk30_gpio_softc*,int) ;
 int FUNC_11 () ;
 struct rk30_gpio_softc* VAR_9 ;
 int FUNC_12 (void*) ;
 int FUNC_13 (void*) ;
 unsigned long FUNC_14 (void*) ;
 int FUNC_15 (int ,int ,char*,int) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_10)
{
 struct rk30_gpio_softc *VAR_11 = FUNC_3(VAR_10);
 int VAR_12, VAR_13;
 phandle_t VAR_14;
 unsigned long VAR_15;

 if (VAR_9)
  return (VAR_0);
 VAR_11->sc_dev = VAR_10;
 FUNC_7(&VAR_11->sc_mtx, "rk30 gpio", "gpio", VAR_2);

 VAR_13 = 0;
 VAR_11->sc_mem_res = FUNC_1(VAR_10, VAR_7, &VAR_13,
     VAR_3);
 if (!VAR_11->sc_mem_res) {
  FUNC_4(VAR_10, "cannot allocate memory window\n");
  goto fail;
 }
 VAR_11->sc_bst = FUNC_13(VAR_11->sc_mem_res);
 VAR_11->sc_bsh = FUNC_12(VAR_11->sc_mem_res);

 VAR_11->sc_bank = -1;
 VAR_15 = FUNC_14(VAR_11->sc_mem_res);
 for (VAR_12 = 0; VAR_12 < FUNC_8(VAR_8); VAR_12++) {
  if (VAR_8[VAR_12] == VAR_15) {
   VAR_11->sc_bank = VAR_12;
   break;
  }
 }
 if (VAR_11->sc_bank == -1) {
  FUNC_4(VAR_10,
      "unsupported device unit (only GPIO0..3 are supported)\n");
  goto fail;
 }

 VAR_13 = 0;
 VAR_11->sc_irq_res = FUNC_1(VAR_10, VAR_6, &VAR_13,
     VAR_3);
 if (!VAR_11->sc_irq_res) {
  FUNC_4(VAR_10, "cannot allocate interrupt\n");
  goto fail;
 }


 VAR_14 = FUNC_9(VAR_11->sc_dev);

 if (!FUNC_0(VAR_14, "gpio-controller"))

  goto fail;


 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  FUNC_15(VAR_11->sc_gpio_pins[VAR_12].gp_name, VAR_1,
      "pin %d", VAR_12);
  VAR_11->sc_gpio_pins[VAR_12].gp_pin = VAR_12;
  VAR_11->sc_gpio_pins[VAR_12].gp_caps = VAR_4;
  VAR_11->sc_gpio_pins[VAR_12].gp_flags = FUNC_10(VAR_11, VAR_12);
 }
 VAR_11->sc_gpio_npins = VAR_12;
 VAR_9 = VAR_11;
 FUNC_11();
 VAR_11->sc_busdev = FUNC_5(VAR_10);
 if (VAR_11->sc_busdev == ((void*)0))
  goto fail;

 return (0);

fail:
 if (VAR_11->sc_irq_res)
  FUNC_2(VAR_10, VAR_6, 0, VAR_11->sc_irq_res);
 if (VAR_11->sc_mem_res)
  FUNC_2(VAR_10, VAR_7, 0, VAR_11->sc_mem_res);
 FUNC_6(&VAR_11->sc_mtx);

 return (VAR_0);
}
