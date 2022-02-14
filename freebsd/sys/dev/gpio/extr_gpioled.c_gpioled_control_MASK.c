
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpioled_softc {int sc_dev; int sc_busdev; scalar_t__ sc_invert; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct gpioled_softc*) ;
 int VAR_0 ;
 int FUNC_3 (struct gpioled_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(void *VAR_4, int VAR_5)
{
 struct gpioled_softc *VAR_6;

 VAR_6 = (struct gpioled_softc *)VAR_4;
 FUNC_2(VAR_6);
 if (FUNC_1(VAR_6->sc_busdev, VAR_6->sc_dev, VAR_0,
     VAR_3) == 0) {
  if (VAR_6->sc_invert)
   VAR_5 = !VAR_5;
  FUNC_0(VAR_6->sc_busdev, VAR_6->sc_dev, VAR_0,
      VAR_5 ? VAR_1 : VAR_2);
 }
 FUNC_3(VAR_6);
}
