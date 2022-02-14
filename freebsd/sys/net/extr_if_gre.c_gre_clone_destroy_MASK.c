
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct gre_softc* if_softc; } ;
struct gre_softc {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct gre_softc*,int ) ;
 int FUNC_3 (struct gre_softc*) ;
 int VAR_1 ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct ifnet *VAR_2)
{
 struct gre_softc *VAR_3;

 FUNC_6(&VAR_1);
 VAR_3 = VAR_2->if_softc;
 FUNC_3(VAR_3);
 FUNC_1(VAR_2);
 FUNC_4(VAR_2);
 VAR_2->if_softc = ((void*)0);
 FUNC_7(&VAR_1);

 FUNC_0();
 FUNC_5(VAR_2);
 FUNC_2(VAR_3, VAR_0);
}
