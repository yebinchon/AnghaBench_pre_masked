
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct enc_softc* if_softc; } ;
struct enc_softc {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 struct enc_softc* VAR_1 ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct enc_softc*,int ) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_5(struct ifnet *VAR_2)
{
 struct enc_softc *VAR_3;

 VAR_3 = VAR_2->if_softc;
 FUNC_0(VAR_3 == VAR_1, ("sc != ifp->if_softc"));

 FUNC_1(VAR_2);
 FUNC_3(VAR_2);
 FUNC_4(VAR_2);
 FUNC_2(VAR_3, VAR_0);
 VAR_1 = ((void*)0);
}
