
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct ti_gpio_softc {TYPE_1__* sc_isrcs; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {struct intr_irqsrc tgi_isrc; } ;


 struct ti_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct ti_gpio_softc*,struct intr_map_data*,size_t*,int *) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, struct intr_map_data *VAR_1,
    struct intr_irqsrc **VAR_2)
{
 int VAR_3;
 u_int VAR_4;
 struct ti_gpio_softc *VAR_5 = FUNC_0(VAR_0);

 VAR_3 = FUNC_1(VAR_5, VAR_1, &VAR_4, ((void*)0));
 if (VAR_3 == 0)
  *VAR_2 = &VAR_5->sc_isrcs[VAR_4].tgi_isrc;
 return (VAR_3);
}
