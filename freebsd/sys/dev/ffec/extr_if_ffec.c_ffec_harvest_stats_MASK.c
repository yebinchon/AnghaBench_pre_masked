
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct ffec_softc {struct ifnet* ifp; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_0 (struct ffec_softc*,int ) ;
 int FUNC_1 (struct ffec_softc*) ;
 int FUNC_2 (struct ifnet*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct ffec_softc *VAR_25)
{
 struct ifnet *VAR_26;

 VAR_26 = VAR_25->ifp;






 FUNC_2(VAR_26, VAR_20, FUNC_0(VAR_25, VAR_7));
 FUNC_2(VAR_26, VAR_19, FUNC_0(VAR_25, VAR_5));
 FUNC_2(VAR_26, VAR_18,
     FUNC_0(VAR_25, VAR_2) + FUNC_0(VAR_25, VAR_8) +
     FUNC_0(VAR_25, VAR_6) + FUNC_0(VAR_25, VAR_3) +
     FUNC_0(VAR_25, VAR_4) + FUNC_0(VAR_25, VAR_0));

 FUNC_2(VAR_26, VAR_21, FUNC_0(VAR_25, VAR_1));

 FUNC_2(VAR_26, VAR_24, FUNC_0(VAR_25, VAR_15));
 FUNC_2(VAR_26, VAR_23, FUNC_0(VAR_25, VAR_13));
 FUNC_2(VAR_26, VAR_22,
     FUNC_0(VAR_25, VAR_10) + FUNC_0(VAR_25, VAR_16) +
     FUNC_0(VAR_25, VAR_14) + FUNC_0(VAR_25, VAR_11) +
     FUNC_0(VAR_25, VAR_12));

 FUNC_2(VAR_26, VAR_17, FUNC_0(VAR_25, VAR_9));

 FUNC_1(VAR_25);
}
