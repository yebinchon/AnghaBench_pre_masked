
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct mv_gpio_softc {size_t pin_num; TYPE_1__* gpio_setup; } ;
typedef int device_t ;
struct TYPE_2__ {size_t gp_caps; } ;


 int VAR_0 ;
 struct mv_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,size_t,size_t,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 int VAR_4;
 struct mv_gpio_softc *VAR_5 = FUNC_0(VAR_1);
 if (VAR_2 >= VAR_5->pin_num)
  return (VAR_0);


 if ((VAR_3 & VAR_5->gpio_setup[VAR_2].gp_caps) != VAR_3)
  return (VAR_0);

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3, ~0);

 return (VAR_4);
}
