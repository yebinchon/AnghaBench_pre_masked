
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunkbd_softc {int sc_flags; scalar_t__ sc_composed_char; } ;
typedef int keyboard_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(keyboard_t *VAR_3)
{
 struct sunkbd_softc *VAR_4;

 if (!FUNC_0(VAR_3))
  return (VAR_0);

 VAR_4 = (struct sunkbd_softc *)VAR_3;
 if (!(VAR_4->sc_flags & VAR_1) && (VAR_4->sc_composed_char > 0))
  return (VAR_2);

 return (FUNC_1(VAR_3));
}
