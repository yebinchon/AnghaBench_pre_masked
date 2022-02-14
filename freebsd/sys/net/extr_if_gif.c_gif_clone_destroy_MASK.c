
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct gif_softc* if_softc; } ;
struct gif_softc {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct gif_softc*,int ) ;
 int FUNC_3 (struct gif_softc*) ;
 int VAR_1 ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct ifnet *VAR_2)
{
 struct gif_softc *VAR_3;

 FUNC_8(&VAR_1);
 VAR_3 = VAR_2->if_softc;
 FUNC_3(VAR_3);
 if (&FUNC_6 != ((void*)0))
  FUNC_6)(VAR_2);
 FUNC_1(VAR_2);
 FUNC_4(VAR_2);
 VAR_2->if_softc = ((void*)0);
 FUNC_9(&VAR_1);

 FUNC_0();
 FUNC_5(VAR_2);
 FUNC_2(VAR_3, VAR_0);
}
