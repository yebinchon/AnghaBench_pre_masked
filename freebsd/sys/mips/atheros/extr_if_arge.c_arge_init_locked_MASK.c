
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct ifnet {int if_flags; int if_drv_flags; } ;
struct arge_softc {int arge_link_status; int arge_stat_callout; scalar_t__ arge_miibus; int arge_dev; struct ifnet* arge_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct arge_softc*) ;
 int FUNC_1 (struct arge_softc*,int ) ;
 int FUNC_2 (struct arge_softc*,int ) ;
 int FUNC_3 (struct arge_softc*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct arge_softc*) ;
 scalar_t__ FUNC_5 (struct arge_softc*) ;
 int FUNC_6 (struct arge_softc*) ;
 int VAR_9 ;
 int FUNC_7 (struct arge_softc*) ;
 int FUNC_8 (struct arge_softc*) ;
 int FUNC_9 (int *,int ,int ,struct arge_softc*) ;
 struct mii_data* FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,char*) ;
 int VAR_10 ;
 int FUNC_12 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_13(struct arge_softc *VAR_11)
{
 struct ifnet *VAR_12 = VAR_11->arge_ifp;
 struct mii_data *VAR_13;

 FUNC_0(VAR_11);

 if ((VAR_12->if_flags & VAR_8) && (VAR_12->if_drv_flags & VAR_7))
  return;


 if (FUNC_5(VAR_11) != 0) {
  FUNC_11(VAR_11->arge_dev,
      "initialization failed: no memory for rx buffers\n");
  FUNC_6(VAR_11);
  return;
 }


 FUNC_7(VAR_11);

 FUNC_4(VAR_11);

 if (VAR_11->arge_miibus) {
  VAR_13 = FUNC_10(VAR_11->arge_miibus);
  FUNC_12(VAR_13);
 }
 else {



  VAR_11->arge_link_status = 1;
 }

 VAR_12->if_drv_flags |= VAR_7;
 VAR_12->if_drv_flags &= ~VAR_6;

 if (VAR_11->arge_miibus) {
  FUNC_9(&VAR_11->arge_stat_callout, VAR_10, VAR_9, VAR_11);
  FUNC_8(VAR_11);
 }

 FUNC_3(VAR_11, VAR_3, FUNC_2(VAR_11, 0));
 FUNC_3(VAR_11, VAR_2, FUNC_1(VAR_11, 0));


 FUNC_3(VAR_11, VAR_1, VAR_5);


 FUNC_3(VAR_11, VAR_0, VAR_4);
}
