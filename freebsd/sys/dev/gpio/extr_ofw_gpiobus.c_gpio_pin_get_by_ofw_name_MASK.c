
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle_t ;
typedef int gpio_pin_t ;
typedef int * device_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,scalar_t__,int,int *) ;
 int FUNC_2 (scalar_t__,char*,char*,int*) ;

int
FUNC_3(device_t VAR_0, phandle_t VAR_1,
    char *VAR_2, gpio_pin_t *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_0(VAR_0 != ((void*)0) && VAR_1 > 0,
     ("both consumer and node required"));

 VAR_4 = FUNC_2(VAR_1, "gpio-names", VAR_2, &VAR_5);
 if (VAR_4 != 0)
  return (VAR_4);
 return (FUNC_1(VAR_0, VAR_1, VAR_5, VAR_3));
}
