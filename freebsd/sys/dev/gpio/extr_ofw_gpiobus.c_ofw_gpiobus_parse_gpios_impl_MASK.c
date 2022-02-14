
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobus_softc {int sc_busdev; int sc_dev; } ;
struct gpiobus_pin {int pin; int flags; int * dev; } ;
typedef scalar_t__ phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int gpiocells ;
typedef int device_t ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,int*,int) ;
 int FUNC_3 (scalar_t__,char*,int,void**) ;
 int FUNC_4 (scalar_t__,char*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (int *) ;
 struct gpiobus_softc* FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct gpiobus_pin*,int ) ;
 scalar_t__ FUNC_11 (int *,scalar_t__,scalar_t__,int,scalar_t__*,int *,int *) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 struct gpiobus_pin* FUNC_13 (int,int ,int) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_3, phandle_t VAR_4, char *VAR_5,
 struct gpiobus_softc *VAR_6, struct gpiobus_pin **VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 pcell_t *VAR_13;
 phandle_t VAR_14;

 VAR_11 = FUNC_3(VAR_4, VAR_5, sizeof(*VAR_13),
            (void **)&VAR_13);
 if (VAR_11 == -1) {
  FUNC_9(VAR_3,
      "Warning: No %s specified in fdt data; "
      "device may not function.\n", VAR_5);
  return (-1);
 }





 VAR_9 = 0;
 VAR_12 = 0;
 while (VAR_9 < VAR_11) {

  if (VAR_13[VAR_9] == 0) {
   VAR_12++;
   VAR_9++;
   continue;
  }
  VAR_14 = FUNC_5(VAR_13[VAR_9]);

  if (VAR_6 != ((void*)0))
   if (FUNC_14(VAR_6->sc_dev) != VAR_14)
    return (0);




  if (!FUNC_4(VAR_14, "gpio-controller") ||
      FUNC_2(VAR_14, "#gpio-cells", &VAR_8,
      sizeof(VAR_8)) < 0) {
   FUNC_9(VAR_3,
       "gpio reference is not a gpio-controller.\n");
   FUNC_6(VAR_13);
   return (-1);
  }
  if (VAR_11 - VAR_9 < VAR_8 + 1) {
   FUNC_9(VAR_3,
       "%s cells doesn't match #gpio-cells.\n", VAR_5);
   return (-1);
  }
  VAR_12++;
  VAR_9 += VAR_8 + 1;
 }
 if (VAR_12 == 0 || VAR_7 == ((void*)0)) {
  if (VAR_12 == 0)
   FUNC_9(VAR_3, "no pin specified in %s.\n",
       VAR_5);
  FUNC_6(VAR_13);
  return (VAR_12);
 }
 *VAR_7 = FUNC_13(sizeof(struct gpiobus_pin) * VAR_12, VAR_0,
     VAR_1 | VAR_2);
 if (*VAR_7 == ((void*)0)) {
  FUNC_6(VAR_13);
  return (-1);
 }

 VAR_9 = 0;
 VAR_10 = 0;
 while (VAR_9 < VAR_11) {

  if (VAR_13[VAR_9] == 0) {
   VAR_10++;
   VAR_9++;
   continue;
  }
  VAR_14 = FUNC_5(VAR_13[VAR_9]);

  if (FUNC_2(VAR_14, "#gpio-cells", &VAR_8,
      sizeof(VAR_8)) < 0) {
   FUNC_9(VAR_3,
       "gpio does not have the #gpio-cells property.\n");
   goto fail;
  }

  (*VAR_7)[VAR_10].dev = FUNC_1(VAR_13[VAR_9]);
  if ((*VAR_7)[VAR_10].dev == ((void*)0)) {
   FUNC_9(VAR_3,
       "no device registered for the gpio controller.\n");
   goto fail;
  }





  if (VAR_6 == ((void*)0)) {
   if (FUNC_0((*VAR_7)[VAR_10].dev) == ((void*)0)) {
    FUNC_9(VAR_3,
        "no gpiobus reference for %s.\n",
        FUNC_7((*VAR_7)[VAR_10].dev));
    goto fail;
   }
   VAR_6 = FUNC_8(FUNC_0((*VAR_7)[VAR_10].dev));
  }

  if (FUNC_11((*VAR_7)[VAR_10].dev, VAR_4, VAR_14, VAR_8,
      &VAR_13[VAR_9 + 1], &(*VAR_7)[VAR_10].pin, &(*VAR_7)[VAR_10].flags) != 0) {
   FUNC_9(VAR_3,
       "cannot map the gpios specifier.\n");
   goto fail;
  }

  if (FUNC_12(VAR_6->sc_busdev, (*VAR_7)[VAR_10].pin) != 0)
   goto fail;
  VAR_10++;
  VAR_9 += VAR_8 + 1;
 }
 FUNC_6(VAR_13);

 return (VAR_12);

fail:
 FUNC_6(VAR_13);
 FUNC_10(*VAR_7, VAR_0);
 return (-1);
}
