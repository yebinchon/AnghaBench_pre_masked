
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk30_gpio_softc {scalar_t__ sc_bank; } ;




 int FUNC_0 (struct rk30_gpio_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(struct rk30_gpio_softc *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6;


 FUNC_0(VAR_3);
 switch (VAR_5) {
 case 128:
  VAR_6 = VAR_2;
  break;
 case 129:
  VAR_6 = VAR_1;
  break;
 default:
  VAR_6 = VAR_0;
 }




 if (VAR_3->sc_bank == 0 && VAR_4 < 12)
  FUNC_2(VAR_4, VAR_6);
 else
  FUNC_1(VAR_3->sc_bank, VAR_4, VAR_6);
}
