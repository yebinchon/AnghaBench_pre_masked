
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunkbd_softc {int sc_polling; } ;
typedef int keyboard_t ;



__attribute__((used)) static int
FUNC_0(keyboard_t *VAR_0, int VAR_1)
{
 struct sunkbd_softc *VAR_2;

 VAR_2 = (struct sunkbd_softc *)VAR_0;
 if (VAR_1)
  VAR_2->sc_polling++;
 else
  VAR_2->sc_polling--;
 return (0);
}
