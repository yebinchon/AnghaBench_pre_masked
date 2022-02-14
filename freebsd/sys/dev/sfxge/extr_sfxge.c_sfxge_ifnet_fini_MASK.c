
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {int media; } ;
struct ifnet {struct sfxge_softc* if_softc; } ;


 int FUNC_0 (struct sfxge_softc*) ;
 int FUNC_1 (struct sfxge_softc*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sfxge_softc*) ;

__attribute__((used)) static void
FUNC_6(struct ifnet *VAR_0)
{
 struct sfxge_softc *VAR_1 = VAR_0->if_softc;

 FUNC_0(VAR_1);
 FUNC_5(VAR_1);
 FUNC_1(VAR_1);

 FUNC_4(&VAR_1->media);
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
}
