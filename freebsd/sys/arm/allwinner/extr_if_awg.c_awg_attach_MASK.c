
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct awg_softc {int ifp; int miibus; int ih; int * res; int link_task; int mtx; int stat_ch; int type; int dev; } ;
typedef int device_t ;
struct TYPE_2__ {int ocd_data; } ;


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
 int FUNC_0 (int *,int ,int ,struct awg_softc*) ;
 scalar_t__ VAR_20 ;
 size_t VAR_21 ;
 int FUNC_1 (int ,int *) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,int,int *,int ,struct awg_softc*,int *) ;
 int FUNC_7 (int *,int *,int ) ;
 int VAR_30 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct awg_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,scalar_t__) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ,struct awg_softc*) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ,int *,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_29 (int *,int ,int ,int ) ;
 TYPE_1__* FUNC_30 (int ,int ) ;

__attribute__((used)) static int
FUNC_31(device_t VAR_31)
{
 uint8_t VAR_32[VAR_5];
 struct awg_softc *VAR_33;
 int VAR_34;

 VAR_33 = FUNC_10(VAR_31);
 VAR_33->dev = VAR_31;
 VAR_33->type = FUNC_30(VAR_31, VAR_30)->ocd_data;

 if (FUNC_5(VAR_31, VAR_28, VAR_33->res) != 0) {
  FUNC_12(VAR_31, "cannot allocate resources for device\n");
  return (VAR_4);
 }

 FUNC_29(&VAR_33->mtx, FUNC_9(VAR_31), VAR_19, VAR_18);
 FUNC_7(&VAR_33->stat_ch, &VAR_33->mtx, 0);
 FUNC_0(&VAR_33->link_task, 0, VAR_25, VAR_33);


 VAR_34 = FUNC_4(VAR_31);
 if (VAR_34 != 0)
  return (VAR_34);


 FUNC_1(VAR_31, VAR_32);


 VAR_34 = FUNC_2(VAR_31);
 if (VAR_34 != 0)
  return (VAR_34);


 VAR_34 = FUNC_3(VAR_31);
 if (VAR_34 != 0)
  return (VAR_34);


 VAR_34 = FUNC_6(VAR_31, VAR_33->res[VAR_21],
     VAR_14 | VAR_13, ((void*)0), VAR_23, VAR_33, &VAR_33->ih);
 if (VAR_34 != 0) {
  FUNC_12(VAR_31, "cannot setup interrupt handler\n");
  return (VAR_34);
 }


 VAR_33->ifp = FUNC_14(VAR_12);
 FUNC_26(VAR_33->ifp, VAR_33);
 FUNC_16(VAR_33->ifp, FUNC_8(VAR_31), FUNC_11(VAR_31));
 FUNC_20(VAR_33->ifp, VAR_9 | VAR_11 | VAR_10);
 FUNC_27(VAR_33->ifp, VAR_29);
 FUNC_23(VAR_33->ifp, VAR_24);
 FUNC_22(VAR_33->ifp, VAR_22);
 FUNC_24(VAR_33->ifp, VAR_20 - 1);
 FUNC_25(VAR_33->ifp);
 FUNC_21(VAR_33->ifp, VAR_1 | VAR_3 | VAR_2);
 FUNC_17(VAR_33->ifp, VAR_8 | VAR_6);
 FUNC_19(VAR_33->ifp, FUNC_15(VAR_33->ifp));





 VAR_34 = FUNC_28(VAR_31, &VAR_33->miibus, VAR_33->ifp, VAR_26,
     VAR_27, VAR_0, VAR_17, VAR_16,
     VAR_15);
 if (VAR_34 != 0) {
  FUNC_12(VAR_31, "cannot attach PHY\n");
  return (VAR_34);
 }


 FUNC_13(VAR_33->ifp, VAR_32);

 return (0);
}
