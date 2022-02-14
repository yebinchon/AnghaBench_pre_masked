
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_gpio_softc {int * sc_intrhand; int ** sc_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct bcm_gpio_softc*) ;
 scalar_t__ FUNC_1 (int ,int *,int,int ,int *,struct bcm_gpio_softc*,int *) ;
 struct bcm_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
 struct bcm_gpio_softc *VAR_5;





 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5->sc_res[1] == ((void*)0) || VAR_5->sc_res[2] == ((void*)0))
  return (-1);

 if (FUNC_0(VAR_5) != 0) {
  FUNC_3(VAR_4, "unable to attach PIC\n");
  return (-1);
 }
 if (FUNC_1(VAR_4, VAR_5->sc_res[1], VAR_1 | VAR_0,
     VAR_2, ((void*)0), VAR_5, &VAR_5->sc_intrhand[0]) != 0)
  return (-1);
 if (FUNC_1(VAR_4, VAR_5->sc_res[2], VAR_1 | VAR_0,
     VAR_3, ((void*)0), VAR_5, &VAR_5->sc_intrhand[1]) != 0)
  return (-1);

 return (0);
}
