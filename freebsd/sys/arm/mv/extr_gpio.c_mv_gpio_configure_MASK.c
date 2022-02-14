
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mv_gpio_softc {int pin_num; scalar_t__ irq_num; TYPE_1__* gpio_setup; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int,int ) ;
 int FUNC_8 (int ,int,int) ;

int
FUNC_9(device_t VAR_7, uint32_t VAR_8, uint32_t VAR_9, uint32_t VAR_10)
{
 int VAR_11;
 struct mv_gpio_softc *VAR_12;
 VAR_12 = (struct mv_gpio_softc *)FUNC_2(VAR_7);
 VAR_11 = 0;

 if (VAR_8 >= VAR_12->pin_num)
  return (VAR_0);


 if (((VAR_9 & VAR_10) & (VAR_1 | VAR_3)) ==
     (VAR_1 | VAR_3))
  return (VAR_0);

 if (VAR_10 & VAR_4) {
  if (VAR_12->irq_num == 0)
   return (VAR_0);
  VAR_11 = FUNC_4(VAR_7, VAR_8);
  if (VAR_11 != 0)
   return (VAR_11);
 }

 FUNC_0();

 if ((VAR_10 & VAR_9) & VAR_1)
  FUNC_6(VAR_7, VAR_8, 0);
 if ((VAR_10 & VAR_9) & VAR_3) {
  if ((VAR_9 & VAR_10) & VAR_2)
   FUNC_8(VAR_7, VAR_8, 0);
  else
   FUNC_8(VAR_7, VAR_8, 1);
  FUNC_6(VAR_7, VAR_8, 1);
 }

 if (VAR_10 & VAR_6)
  FUNC_3(VAR_7, VAR_8, VAR_9 & VAR_6);
 if (VAR_10 & VAR_5)
  FUNC_7(VAR_7, VAR_8, VAR_9 & VAR_5, 0);
 if (VAR_10 & VAR_4) {
  VAR_11 = FUNC_5(VAR_7, VAR_8);
  if (VAR_11) {
   FUNC_1();
   return (VAR_11);
  }
 }

 VAR_12->gpio_setup[VAR_8].gp_flags &= ~(VAR_10);
 VAR_12->gpio_setup[VAR_8].gp_flags |= (VAR_9 & VAR_10);

 FUNC_1();

 return (0);
}
