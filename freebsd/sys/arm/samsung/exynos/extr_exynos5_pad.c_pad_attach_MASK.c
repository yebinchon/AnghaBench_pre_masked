
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pad_softc {int model; int gpio_npins; int nports; int sc_mtx; int * res; int pad_spec; scalar_t__* gpio_ih; int * busdev; TYPE_1__* gpio_pins; int dev; int * bsh; int * bst; int interrupt_table; int gpio_map; } ;
struct gpio_bank {int con; int port; } ;
typedef int device_t ;
struct TYPE_4__ {int ocd_data; } ;
struct TYPE_3__ {int gp_pin; int gp_name; int gp_flags; int gp_caps; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct pad_softc*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int,int ,int *,struct pad_softc*,scalar_t__*) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 struct pad_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (struct pad_softc*,int,struct gpio_bank*,int*) ;
 int VAR_10 ;
 int VAR_11 ;
 struct pad_softc* VAR_12 ;
 int * FUNC_10 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int *,int ) ;
 TYPE_2__* FUNC_13 (int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,char*,int,int) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_18)
{
 struct gpio_bank VAR_19;
 struct pad_softc *VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;

 VAR_20 = FUNC_6(VAR_18);

 FUNC_12(&VAR_20->sc_mtx, FUNC_5(VAR_18), ((void*)0), VAR_7);

 VAR_20->model = FUNC_13(VAR_18, VAR_9)->ocd_data;
 switch (VAR_20->model) {
 case 129:
  VAR_20->pad_spec = VAR_15;
  VAR_20->gpio_map = VAR_10;
  VAR_20->interrupt_table = VAR_13;
  VAR_20->gpio_npins = 253;
  VAR_20->nports = 4;
  break;
 case 128:
  VAR_20->pad_spec = VAR_16;
  VAR_20->gpio_map = VAR_11;
  VAR_20->interrupt_table = VAR_14;
  VAR_20->gpio_npins = 232;
  VAR_20->nports = 5;
  break;
 default:
  goto fail;
 }

 if (FUNC_1(VAR_18, VAR_20->pad_spec, VAR_20->res)) {
  FUNC_8(VAR_18, "could not allocate resources\n");
  goto fail;
 }



 for (VAR_23 = 0; VAR_23 < VAR_20->nports; VAR_23++) {
  VAR_20->bst[VAR_23] = FUNC_15(VAR_20->res[VAR_23]);
  VAR_20->bsh[VAR_23] = FUNC_14(VAR_20->res[VAR_23]);
 }

 VAR_20->dev = VAR_18;

 VAR_12 = VAR_20;

 for (VAR_23 = 0; VAR_23 < VAR_20->nports; VAR_23++) {
  if ((FUNC_3(VAR_18, VAR_20->res[VAR_20->nports + VAR_23],
       VAR_6 | VAR_5, VAR_17,
       ((void*)0), VAR_20, &VAR_20->gpio_ih[VAR_23]))) {
   FUNC_8(VAR_18,
       "ERROR: Unable to register interrupt handler\n");
   goto fail;
  }
 }

 for (VAR_23 = 0; VAR_23 < VAR_20->gpio_npins; VAR_23++) {
  VAR_20->gpio_pins[VAR_23].gp_pin = VAR_23;
  VAR_20->gpio_pins[VAR_23].gp_caps = VAR_0;

  if (FUNC_9(VAR_20, VAR_23, &VAR_19, &VAR_21) != 0)
   continue;

  VAR_21 *= 4;

  VAR_22 = FUNC_0(VAR_20, VAR_19.port, VAR_19.con);
  if (VAR_22 & (VAR_8 << VAR_21))
   VAR_20->gpio_pins[VAR_23].gp_flags = VAR_4;
  else
   VAR_20->gpio_pins[VAR_23].gp_flags = VAR_3;



  FUNC_16(VAR_20->gpio_pins[VAR_23].gp_name, VAR_2,
      "pad%d.%d", FUNC_7(VAR_18), VAR_23);
 }
 VAR_20->busdev = FUNC_10(VAR_18);
 if (VAR_20->busdev == ((void*)0))
  goto fail;

 return (0);

fail:
 for (VAR_23 = 0; VAR_23 < VAR_20->nports; VAR_23++) {
  if (VAR_20->gpio_ih[VAR_23])
   FUNC_4(VAR_18, VAR_20->res[VAR_20->nports + VAR_23],
       VAR_20->gpio_ih[VAR_23]);
 }
 FUNC_2(VAR_18, VAR_20->pad_spec, VAR_20->res);
 FUNC_11(&VAR_20->sc_mtx);

 return (VAR_1);
}
