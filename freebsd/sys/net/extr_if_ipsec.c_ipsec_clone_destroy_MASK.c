
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipsec_softc {scalar_t__ reqid; } ;
struct ifnet {struct ipsec_softc* if_softc; } ;


 int FUNC_0 (struct ipsec_softc*,int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ipsec_softc*,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ipsec_softc*) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct ifnet *VAR_3)
{
 struct ipsec_softc *VAR_4;

 FUNC_7(&VAR_2);
 VAR_4 = VAR_3->if_softc;
 FUNC_6(VAR_4);




 if (VAR_4->reqid != 0)
  FUNC_0(VAR_4, VAR_1);
 FUNC_2(VAR_3);
 FUNC_4(VAR_3);
 VAR_3->if_softc = ((void*)0);
 FUNC_8(&VAR_2);

 FUNC_1();
 FUNC_5(VAR_3);
 FUNC_3(VAR_4, VAR_0);
}
