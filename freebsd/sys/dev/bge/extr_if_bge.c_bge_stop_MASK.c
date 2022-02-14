
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bge_softc {int bge_asf_mode; scalar_t__ bge_link; int bge_ifp; int bge_tx_saved_considx; int bge_stat_ch; } ;
typedef int if_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bge_softc*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct bge_softc*) ;
 scalar_t__ FUNC_2 (struct bge_softc*) ;
 scalar_t__ FUNC_3 (struct bge_softc*) ;
 int FUNC_4 (struct bge_softc*) ;
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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_5 (struct bge_softc*,int ,int ) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_6 (struct bge_softc*,int ,int) ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_7 (struct bge_softc*) ;
 int FUNC_8 (struct bge_softc*) ;
 int FUNC_9 (struct bge_softc*) ;
 int FUNC_10 (struct bge_softc*) ;
 int FUNC_11 (struct bge_softc*,int ) ;
 int FUNC_12 (struct bge_softc*,int ) ;
 int FUNC_13 (struct bge_softc*,int ) ;
 int FUNC_14 (struct bge_softc*) ;
 int FUNC_15 (struct bge_softc*,int ,int ) ;
 int FUNC_16 (struct bge_softc*) ;
 int FUNC_17 (struct bge_softc*,int ,int) ;
 scalar_t__ VAR_48 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_21(struct bge_softc *VAR_49)
{
 if_t VAR_50;

 FUNC_4(VAR_49);

 VAR_50 = VAR_49->bge_ifp;

 FUNC_18(&VAR_49->bge_stat_ch);


 FUNC_5(VAR_49, VAR_16, VAR_15);
 FUNC_17(VAR_49, VAR_12, 1);




 FUNC_16(VAR_49);
 FUNC_13(VAR_49, VAR_26);




 FUNC_15(VAR_49, VAR_32, VAR_31);
 FUNC_15(VAR_49, VAR_20, VAR_19);
 FUNC_15(VAR_49, VAR_28, VAR_27);
 if (FUNC_1(VAR_49))
  FUNC_15(VAR_49, VAR_30, VAR_29);
 FUNC_15(VAR_49, VAR_21, VAR_19);
 FUNC_15(VAR_49, VAR_23, VAR_22);
 FUNC_15(VAR_49, VAR_18, VAR_17);




 FUNC_15(VAR_49, VAR_42, VAR_41);
 FUNC_15(VAR_49, VAR_36, VAR_35);
 FUNC_15(VAR_49, VAR_40, VAR_39);
 FUNC_15(VAR_49, VAR_25, VAR_24);
 FUNC_15(VAR_49, VAR_38, VAR_37);
 if (FUNC_1(VAR_49))
  FUNC_15(VAR_49, VAR_4, VAR_3);
 FUNC_15(VAR_49, VAR_34, VAR_33);





 FUNC_15(VAR_49, VAR_7, VAR_6);
 FUNC_15(VAR_49, VAR_45, VAR_44);
 if (FUNC_1(VAR_49))
  FUNC_15(VAR_49, VAR_11, VAR_10);

 FUNC_6(VAR_49, VAR_5, 0xFFFFFFFF);
 FUNC_6(VAR_49, VAR_5, 0);
 if (!(FUNC_2(VAR_49))) {
  FUNC_0(VAR_49, VAR_2, VAR_1);
  FUNC_0(VAR_49, VAR_9, VAR_8);
 }

 if (FUNC_2(VAR_49))
  FUNC_14(VAR_49);

 FUNC_10(VAR_49);
 FUNC_11(VAR_49, VAR_26);
 FUNC_12(VAR_49, VAR_26);




 if (VAR_49->bge_asf_mode & VAR_0)
  FUNC_5(VAR_49, VAR_14, VAR_13);
 else
  FUNC_0(VAR_49, VAR_14, VAR_13);


 FUNC_8(VAR_49);


 if (FUNC_3(VAR_49))
  FUNC_7(VAR_49);


 FUNC_9(VAR_49);

 VAR_49->bge_tx_saved_considx = VAR_43;


 if (VAR_48 && VAR_49->bge_link)
  FUNC_19(VAR_49->bge_ifp, "link DOWN\n");
 VAR_49->bge_link = 0;

 FUNC_20(VAR_50, 0, (VAR_47 | VAR_46));
}
