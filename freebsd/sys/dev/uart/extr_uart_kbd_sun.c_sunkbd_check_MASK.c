
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunkbd_softc {scalar_t__ sc_polling; int * sc_sysdev; int * sc_uart; scalar_t__ sc_repeating; scalar_t__* sc_buffered_char; } ;
typedef int keyboard_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(keyboard_t *VAR_2)
{
 struct sunkbd_softc *VAR_3;

 if (!FUNC_0(VAR_2))
  return (VAR_0);

 VAR_3 = (struct sunkbd_softc *)VAR_2;






 if (VAR_3->sc_repeating)
  return (VAR_1);

 if (VAR_3->sc_uart != ((void*)0) && !FUNC_1(VAR_3->sc_uart))
  return (VAR_1);

 if (VAR_3->sc_polling != 0 && VAR_3->sc_sysdev != ((void*)0) &&
     FUNC_2(VAR_3->sc_sysdev))
  return (VAR_1);

 return (VAR_0);
}
