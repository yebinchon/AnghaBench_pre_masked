
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stge_softc {struct ifnet* sc_ifp; } ;
struct ifnet {int dummy; } ;


 scalar_t__ FUNC_0 (struct stge_softc*,int ) ;
 scalar_t__ FUNC_1 (struct stge_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct stge_softc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct ifnet*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct stge_softc *VAR_15)
{
 struct ifnet *VAR_16;

 FUNC_2(VAR_15);

 VAR_16 = VAR_15->sc_ifp;

 FUNC_1(VAR_15,VAR_12);

 FUNC_3(VAR_16, VAR_2, FUNC_1(VAR_15, VAR_7));

 FUNC_3(VAR_16, VAR_1, FUNC_0(VAR_15, VAR_6));

 FUNC_1(VAR_15, VAR_13);

 FUNC_3(VAR_16, VAR_4, FUNC_1(VAR_15, VAR_9));

 FUNC_3(VAR_16, VAR_0,
     FUNC_1(VAR_15, VAR_10) +
     FUNC_1(VAR_15, VAR_11) +
     FUNC_1(VAR_15, VAR_14));

 FUNC_3(VAR_16, VAR_3,
     FUNC_0(VAR_15, VAR_5) +
     FUNC_0(VAR_15, VAR_8));
}
