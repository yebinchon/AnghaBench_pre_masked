
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpioiic_softc {int sc_dev; int sc_busdev; } ;


 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct gpioiic_softc *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_4 == 0) {
  VAR_5 = FUNC_0(VAR_2->sc_busdev, VAR_2->sc_dev, VAR_3, 0);
  FUNC_1(VAR_2->sc_busdev, VAR_2->sc_dev, VAR_3,
      VAR_1);





  if (VAR_5 != 0)
   FUNC_0(VAR_2->sc_busdev, VAR_2->sc_dev, VAR_3, 0);
 } else {
  FUNC_1(VAR_2->sc_busdev, VAR_2->sc_dev, VAR_3,
      VAR_0);
 }
}
