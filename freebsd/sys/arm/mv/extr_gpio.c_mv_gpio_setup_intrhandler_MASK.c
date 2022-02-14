
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_gpio_softc {int pin_num; struct intr_event** gpio_events; TYPE_1__* gpio_setup; } ;
struct mv_gpio_pindev {int dummy; } ;
struct intr_event {int dummy; } ;
typedef int driver_filter_t ;
typedef int device_t ;
struct TYPE_2__ {int gp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct intr_event*,char const*,int *,void (*) (void*),void*,int ,int,void**) ;
 int FUNC_4 (struct intr_event**,void*,int ,int,void (*) (void*),void (*) (void*),void (*) (void*),int *,char*,int) ;
 int FUNC_5 (int) ;
 struct mv_gpio_pindev* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

int
FUNC_9(device_t VAR_9, const char *VAR_10, driver_filter_t *VAR_11,
    void (*VAR_12)(void *), void *VAR_13, int VAR_14, int VAR_15, void **VAR_16)
{
 struct intr_event *VAR_17;
 int VAR_18;
 struct mv_gpio_pindev *VAR_19;
 struct mv_gpio_softc *VAR_20;
 VAR_20 = (struct mv_gpio_softc *)FUNC_2(VAR_9);
 VAR_19 = FUNC_6(sizeof(struct mv_gpio_pindev), VAR_3, VAR_4 | VAR_5);

 if (VAR_14 < 0 || VAR_14 >= VAR_20->pin_num)
  return (VAR_0);
 VAR_17 = VAR_20->gpio_events[VAR_14];
 if (VAR_17 == ((void*)0)) {
  FUNC_0();
  if (VAR_20->gpio_setup[VAR_14].gp_flags & VAR_1) {
   VAR_18 = FUNC_7(VAR_9, VAR_14);
   if (VAR_18 != 0) {
    FUNC_1();
    return (VAR_18);
   }
  } else if (VAR_20->gpio_setup[VAR_14].gp_flags & VAR_2)
   FUNC_8(VAR_9, VAR_14);
  FUNC_1();
  VAR_18 = FUNC_4(&VAR_17, (void *)VAR_19, 0, VAR_14,
      (void (*)(void *))VAR_7,
      (void (*)(void *))VAR_8,
      (void (*)(void *))VAR_6,
      ((void*)0),
      "gpio%d:", VAR_14);
  if (VAR_18 != 0)
   return (VAR_18);
  VAR_20->gpio_events[VAR_14] = VAR_17;
 }

 FUNC_3(VAR_17, VAR_10, VAR_11, VAR_12, VAR_13,
     FUNC_5(VAR_15), VAR_15, VAR_16);
 return (0);
}
