
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vf_gpio_softc {int gpio_npins; int sc_mtx; int * res; int * sc_busdev; TYPE_1__* gpio_pins; int bsh; int bst; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_pin; int gp_name; int gp_flags; int gp_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct vf_gpio_softc*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ) ;
 struct vf_gpio_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 struct vf_gpio_softc* VAR_7 ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int *,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,char*,int,int) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_14(device_t VAR_9)
{
 struct vf_gpio_softc *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_5(VAR_9);
 FUNC_10(&VAR_10->sc_mtx, FUNC_4(VAR_9), ((void*)0), VAR_5);

 if (FUNC_2(VAR_9, VAR_8, VAR_10->res)) {
  FUNC_7(VAR_9, "could not allocate resources\n");
  FUNC_9(&VAR_10->sc_mtx);
  return (VAR_1);
 }


 VAR_10->bst = FUNC_12(VAR_10->res[0]);
 VAR_10->bsh = FUNC_11(VAR_10->res[0]);

 VAR_7 = VAR_10;

 VAR_10->gpio_npins = VAR_6;

 for (VAR_11 = 0; VAR_11 < VAR_10->gpio_npins; VAR_11++) {
  VAR_10->gpio_pins[VAR_11].gp_pin = VAR_11;
  VAR_10->gpio_pins[VAR_11].gp_caps = VAR_0;
  VAR_10->gpio_pins[VAR_11].gp_flags =
      (FUNC_1(VAR_10, FUNC_0(VAR_11)) & (1 << (VAR_11 % 32))) ?
      VAR_4: VAR_3;
  FUNC_13(VAR_10->gpio_pins[VAR_11].gp_name, VAR_2,
      "vf_gpio%d.%d", FUNC_6(VAR_9), VAR_11);
 }

 VAR_10->sc_busdev = FUNC_8(VAR_9);
 if (VAR_10->sc_busdev == ((void*)0)) {
  FUNC_3(VAR_9, VAR_8, VAR_10->res);
  FUNC_9(&VAR_10->sc_mtx);
  return (VAR_1);
 }

 return (0);
}
