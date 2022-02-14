
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobus_pin {int pin; int flags; int * dev; } ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef struct gpiobus_pin* gpio_pin_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int,int *,int *,int *) ;
 int FUNC_6 (int *,int ) ;
 struct gpiobus_pin* FUNC_7 (int,int ,int) ;
 int FUNC_8 (int ,char*,char*,int,int *,int*,int **) ;

int
FUNC_9(device_t VAR_6, phandle_t VAR_7,
    char *VAR_8, int VAR_9, gpio_pin_t *VAR_10)
{
 phandle_t VAR_11;
 pcell_t *VAR_12;
 device_t VAR_13;
 struct gpiobus_pin VAR_14;
 int VAR_15, VAR_16;

 FUNC_1(VAR_6 != ((void*)0) && VAR_7 > 0,
     ("both consumer and cnode required"));

 VAR_16 = FUNC_8(VAR_7, VAR_8, "#gpio-cells",
     VAR_9, &VAR_11, &VAR_15, &VAR_12);
 if (VAR_16 != 0)
  return (VAR_16);


 VAR_14.dev = FUNC_2(VAR_11);
 if (VAR_14.dev == ((void*)0)) {
  FUNC_4(VAR_12);
  return (VAR_1);
 }


 VAR_13 = FUNC_0(VAR_14.dev);
 if (VAR_13 == ((void*)0)) {
  FUNC_4(VAR_12);
  return (VAR_1);
 }


 VAR_16 = FUNC_5(VAR_14.dev, VAR_7, FUNC_3(VAR_11), VAR_15,
     VAR_12, &VAR_14.pin, &VAR_14.flags);
 FUNC_4(VAR_12);
 if (VAR_16 != 0)
  return (VAR_2);


 VAR_16 = FUNC_6(VAR_13, VAR_14.pin);
 if (VAR_16 != 0)
  return (VAR_0);

 *VAR_10 = FUNC_7(sizeof(struct gpiobus_pin), VAR_3,
     VAR_4 | VAR_5);
 **VAR_10 = VAR_14;
 return (0);
}
