
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lance_softc {int (* sc_start_locked ) (struct lance_softc*) ;scalar_t__ sc_mediachange; } ;
struct ifnet {int if_snd; struct lance_softc* if_softc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct lance_softc*) ;
 int FUNC_2 (struct lance_softc*) ;
 int FUNC_3 (struct lance_softc*) ;
 int FUNC_4 (struct lance_softc*) ;
 int FUNC_5 (struct lance_softc*) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_0)
{
 struct lance_softc *VAR_1 = VAR_0->if_softc;

 if (VAR_1->sc_mediachange) {







  FUNC_1(VAR_1);
  FUNC_4(VAR_1);
  FUNC_3(VAR_1);
  if (!FUNC_0(&VAR_0->if_snd))
   (*VAR_1->sc_start_locked)(VAR_1);
  FUNC_2(VAR_1);
 }
 return (0);
}
