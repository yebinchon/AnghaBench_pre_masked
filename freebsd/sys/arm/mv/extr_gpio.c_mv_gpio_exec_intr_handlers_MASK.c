
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mv_gpio_softc {TYPE_1__* gpio_setup; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int ,int) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_3, uint32_t VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 struct mv_gpio_softc *VAR_8;
 VAR_8 = (struct mv_gpio_softc *)FUNC_1(VAR_3);

 FUNC_0();

 VAR_6 = 0;
 while (VAR_4 != 0) {
  if (VAR_4 & 1) {
   VAR_7 = (VAR_5 ? (VAR_6 + VAR_0) : VAR_6);
   if (VAR_8->gpio_setup[VAR_7].gp_flags & VAR_1)
    FUNC_2(VAR_3, VAR_7);
   else if (VAR_8->gpio_setup[VAR_7].gp_flags & VAR_2) {
    FUNC_4(VAR_3, VAR_7, 0, 1);
    FUNC_3(VAR_3, VAR_7);
   } else
    FUNC_3(VAR_3, VAR_7);
  }
  VAR_4 >>= 1;
  VAR_6++;
 }
}
