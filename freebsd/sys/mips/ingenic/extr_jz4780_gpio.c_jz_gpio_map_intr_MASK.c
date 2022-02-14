
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct jz4780_gpio_softc {int pins; } ;
struct intr_map_data {int type; } ;
typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;
typedef int device_t ;


 int VAR_0 ;

 struct jz4780_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct intr_map_data*,scalar_t__*,int*,int*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, struct intr_map_data *VAR_2, u_int *VAR_3,
        enum intr_polarity *VAR_4, enum intr_trigger *VAR_5)
{
 struct jz4780_gpio_softc *VAR_6;
 enum intr_polarity VAR_7;
 enum intr_trigger VAR_8;
 u_int VAR_9;

 VAR_6 = FUNC_0(VAR_1);
 switch (VAR_2->type) {






 default:
  return (VAR_0);
 }

 if (VAR_9 >= FUNC_2(VAR_6->pins))
  return (VAR_0);

 *VAR_3 = VAR_9;
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_7;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_8;
 return (0);
}
