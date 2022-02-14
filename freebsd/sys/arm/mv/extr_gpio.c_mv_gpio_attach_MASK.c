
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_gpio_softc {int pin_num; int * irq_res; int * irq_rid; int mutex; int * sc_busdev; int mem_res; int bsh; int bst; scalar_t__ mem_rid; TYPE_1__* gpio_setup; scalar_t__ offset; int dev; } ;
typedef int phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int device_t ;
struct TYPE_2__ {int gp_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,scalar_t__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ,int ,scalar_t__*,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int *,int ) ;
 int FUNC_10 (struct mv_gpio_softc*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_9)
{
 int VAR_10, VAR_11;
 struct mv_gpio_softc *VAR_12;
 phandle_t VAR_13;
 pcell_t VAR_14 = 0;

 VAR_12 = (struct mv_gpio_softc *)FUNC_5(VAR_9);
 if (VAR_12 == ((void*)0))
  return (VAR_0);

 VAR_13 = FUNC_11(VAR_9);
 VAR_12->dev = VAR_9;

 if (FUNC_1(VAR_13, "pin-count", &VAR_14, sizeof(pcell_t)) >= 0 ||
     FUNC_1(VAR_13, "ngpios", &VAR_14, sizeof(pcell_t)) >= 0) {
  VAR_12->pin_num = FUNC_0(VAR_14, VAR_3);
  if (VAR_8)
   FUNC_6(VAR_9, "%d pins available\n", VAR_12->pin_num);
 } else {
  FUNC_6(VAR_9, "ERROR: no pin-count or ngpios entry found!\n");
  return (VAR_0);
 }

 if (FUNC_1(VAR_13, "offset", &VAR_12->offset, sizeof(VAR_12->offset)) == -1)
  VAR_12->offset = 0;


 for(VAR_10 = 0; VAR_10 < VAR_12->pin_num; VAR_10++)
  VAR_12->gpio_setup[VAR_10].gp_caps = VAR_1;

 FUNC_9(&VAR_12->mutex, FUNC_4(VAR_9), ((void*)0), VAR_2);

 VAR_12->mem_rid = 0;
 VAR_12->mem_res = FUNC_2(VAR_9, VAR_7, &VAR_12->mem_rid,
   VAR_4 | VAR_5 );

 if (!VAR_12->mem_res) {
  FUNC_8(&VAR_12->mutex);
  FUNC_6(VAR_9, "could not allocate memory window\n");
  return (VAR_0);
 }

 VAR_12->bst = FUNC_13(VAR_12->mem_res);
 VAR_12->bsh = FUNC_12(VAR_12->mem_res);

 VAR_11 = FUNC_10(VAR_12, VAR_13);
 if (VAR_11 != 0)
  return (VAR_11);

 VAR_12->sc_busdev = FUNC_7(VAR_9);
 if (VAR_12->sc_busdev == ((void*)0)) {
  FUNC_8(&VAR_12->mutex);
  FUNC_3(VAR_9, VAR_6,
   VAR_12->irq_rid[VAR_10], VAR_12->irq_res[VAR_10]);
  return (VAR_0);
 }

 return (0);
}
