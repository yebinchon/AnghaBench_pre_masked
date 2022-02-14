
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct disc_softc* if_softc; } ;
struct disc_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct disc_softc*,int ) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_1)
{
 struct disc_softc *VAR_2;

 VAR_2 = VAR_1->if_softc;

 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);

 FUNC_1(VAR_2, VAR_0);
}
