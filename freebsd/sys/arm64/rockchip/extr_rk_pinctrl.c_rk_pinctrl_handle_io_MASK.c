
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct rk_pinctrl_softc {int dev; TYPE_1__* conf; } ;
struct rk_pinctrl_gpio {scalar_t__ bank; int * gpio_dev; } ;
typedef int phandle_t ;
struct TYPE_2__ {int ngpio_bank; struct rk_pinctrl_gpio* gpio_bank; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct rk_pinctrl_softc *VAR_3, phandle_t VAR_4, uint32_t VAR_5,
uint32_t VAR_6)
{
 bool VAR_7, VAR_8, VAR_9;
 uint32_t VAR_10, VAR_11;
 struct rk_pinctrl_gpio *VAR_12;
 int VAR_13, VAR_14;

 VAR_7 = 0;
 VAR_8 = 0;
 VAR_9 = 0;


 if (FUNC_2(VAR_4, "output-disable")) {
  VAR_7 = 1;
  VAR_8 = 1;
  VAR_10 = VAR_1;
 }

 if (FUNC_2(VAR_4, "output-enable")) {
  VAR_7 = 1;
  VAR_8 = 1;
  VAR_10 = VAR_2;
 }

 if (FUNC_2(VAR_4, "output-low")) {
  VAR_7 = 1;
  VAR_8 = 1;
  VAR_10 = VAR_2;
  VAR_9 = 1;
  VAR_11 = 0;
 }

 if (FUNC_2(VAR_4, "output-high")) {
  VAR_7 = 1;
  VAR_8 = 1;
  VAR_10 = VAR_2;
  VAR_9 = 1;
  VAR_11 = 1;
 }

 if (!VAR_7)
  return (0);


 VAR_12 = ((void*)0);
 for(VAR_13 = 0; VAR_13 < VAR_3->conf->ngpio_bank; VAR_13++) {
  if (VAR_5 == VAR_3->conf->gpio_bank[VAR_13].bank) {
   VAR_12 = VAR_3->conf->gpio_bank + VAR_13;
   break;
  }
 }
 if (VAR_12 == ((void*)0)) {
  FUNC_3(VAR_3->dev, "Cannot find GPIO bank %d\n", VAR_5);
  return (VAR_0);
 }
 if (VAR_12->gpio_dev == ((void*)0)) {
  FUNC_3(VAR_3->dev,
      "No GPIO subdevice found for bank %d\n", VAR_5);
  return (VAR_0);
 }

 VAR_14 = 0;
 if (VAR_9) {
  VAR_14 = FUNC_0(VAR_12->gpio_dev, VAR_6, VAR_11);
  if (VAR_14 != 0) {
   FUNC_3(VAR_3->dev, "Cannot set GPIO value: %d\n",
       VAR_14);
   return (VAR_14);
  }
 }

 if (VAR_8) {
  VAR_14 = FUNC_1(VAR_12->gpio_dev, VAR_6, VAR_10);
  if (VAR_14 != 0) {
   FUNC_3(VAR_3->dev,
       "Cannot set GPIO direction: %d\n", VAR_14);
   return (VAR_14);
  }
 }

 return (0);
}
