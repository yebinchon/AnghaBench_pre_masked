
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct mv_gpio_softc {int* debounce_counters; int * debounce_callouts; TYPE_1__* gpio_setup; } ;
struct mv_gpio_pindev {int pin; int dev; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,void (*) (void*),void*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (void*,int ) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int,int ,int) ;
 scalar_t__ FUNC_10 (int ,int,int) ;

__attribute__((used)) static void
FUNC_11(void *VAR_7)
{
 uint8_t VAR_8, VAR_9;
 int VAR_10;
 device_t VAR_11;
 int *VAR_12;
 struct mv_gpio_softc *VAR_13;
 struct mv_gpio_pindev *VAR_14;

 VAR_14 = (struct mv_gpio_pindev *)VAR_7;
 VAR_11 = VAR_14->dev;
 VAR_10 = VAR_14->pin;
 VAR_13 = (struct mv_gpio_softc *)FUNC_4(VAR_11);

 FUNC_0();

 VAR_8 = (FUNC_10(VAR_11, VAR_10, 1) ? 1 : 0);
 VAR_9 = (FUNC_6(VAR_11, VAR_10) ? 1 : 0);
 VAR_12 = &VAR_13->debounce_counters[VAR_10];

 if (VAR_8 == VAR_9) {
  if (VAR_9)
   *VAR_12 = VAR_2 /
       VAR_0;
  else
   *VAR_12 = VAR_3 /
       VAR_0;

  FUNC_3(VAR_13->debounce_callouts[VAR_10],
      VAR_1, FUNC_11, VAR_7);
 } else {
  *VAR_12 = *VAR_12 - 1;
  if (*VAR_12 != 0)
   FUNC_3(VAR_13->debounce_callouts[VAR_10],
       VAR_1, FUNC_11, VAR_7);
  else {
   FUNC_7(VAR_11, VAR_10, VAR_8);

   if (VAR_9)
    *VAR_12 = VAR_2 /
        VAR_0;
   else
    *VAR_12 = VAR_3 /
        VAR_0;

   if (((VAR_13->gpio_setup[VAR_10].gp_flags & VAR_5) &&
       (VAR_8 == 0)) ||
       (((VAR_13->gpio_setup[VAR_10].gp_flags & VAR_5) == 0) &&
       VAR_8) ||
       (VAR_13->gpio_setup[VAR_10].gp_flags & VAR_4))
    FUNC_8(VAR_11, VAR_10);


   FUNC_9(VAR_11, VAR_10, 0, 1);

   FUNC_5(VAR_7, VAR_6);
   FUNC_2(VAR_13->debounce_callouts[VAR_10]);
  }
 }

 FUNC_1();
}
