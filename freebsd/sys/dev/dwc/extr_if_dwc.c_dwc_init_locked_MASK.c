
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct dwc_softc {int dwc_callout; int mii_softc; struct ifnet* ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dwc_softc*) ;
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
 int FUNC_1 (struct dwc_softc*,int ) ;
 int FUNC_2 (struct dwc_softc*,int ,int) ;
 int FUNC_3 (int *,int ,int ,struct dwc_softc*) ;
 int FUNC_4 (struct dwc_softc*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct dwc_softc *VAR_20)
{
 struct ifnet *VAR_21 = VAR_20->ifp;
 uint32_t VAR_22;

 FUNC_0(VAR_20);

 if (VAR_21->if_drv_flags & VAR_5)
  return;

 VAR_21->if_drv_flags |= VAR_5;

 FUNC_4(VAR_20);


 VAR_22 = FUNC_1(VAR_20, VAR_17);
 VAR_22 |= (VAR_16 | VAR_10 | VAR_9);
 VAR_22 &= ~(VAR_11);
 VAR_22 |= (VAR_12 << VAR_13);
 FUNC_2(VAR_20, VAR_17, VAR_22);

 FUNC_2(VAR_20, VAR_6, VAR_7);


 VAR_22 = FUNC_1(VAR_20, VAR_17);
 VAR_22 |= (VAR_15 | VAR_14);
 FUNC_2(VAR_20, VAR_17, VAR_22);


 VAR_22 = FUNC_1(VAR_20, VAR_8);
 VAR_22 |= (VAR_2 | VAR_0 | VAR_1);
 VAR_22 |= (VAR_4 | VAR_3);
 FUNC_2(VAR_20, VAR_8, VAR_22);





 FUNC_5(VAR_20->mii_softc);
 FUNC_3(&VAR_20->dwc_callout, VAR_19, VAR_18, VAR_20);
}
