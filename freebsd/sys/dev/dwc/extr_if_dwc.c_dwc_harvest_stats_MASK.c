
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct dwc_softc {scalar_t__ stats_harvest_count; struct ifnet* ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct dwc_softc*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (struct dwc_softc*) ;
 int FUNC_2 (struct ifnet*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct dwc_softc *VAR_25)
{
 struct ifnet *VAR_26;


 if (++VAR_25->stats_harvest_count < VAR_16)
  return;

 VAR_25->stats_harvest_count = 0;
 VAR_26 = VAR_25->ifp;

 FUNC_2(VAR_26, VAR_3, FUNC_0(VAR_25, VAR_9));
 FUNC_2(VAR_26, VAR_2, FUNC_0(VAR_25, VAR_12));
 FUNC_2(VAR_26, VAR_1,
     FUNC_0(VAR_25, VAR_13) + FUNC_0(VAR_25, VAR_15) +
     FUNC_0(VAR_25, VAR_8) + FUNC_0(VAR_25, VAR_7) +
     FUNC_0(VAR_25, VAR_14) + FUNC_0(VAR_25, VAR_10) +
     FUNC_0(VAR_25, VAR_11));

 FUNC_2(VAR_26, VAR_6, FUNC_0(VAR_25, VAR_20));
 FUNC_2(VAR_26, VAR_5, FUNC_0(VAR_25, VAR_22));
 FUNC_2(VAR_26, VAR_4,
     FUNC_0(VAR_25, VAR_23) + FUNC_0(VAR_25, VAR_18) +
     FUNC_0(VAR_25, VAR_17) + FUNC_0(VAR_25, VAR_24));

 FUNC_2(VAR_26, VAR_0,
     FUNC_0(VAR_25, VAR_19) + FUNC_0(VAR_25, VAR_21));

 FUNC_1(VAR_25);
}
