
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int tqinfifonext; int features; int seqctl; } ;


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
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*,int ) ;
 int FUNC_3 (struct ahc_softc*,int ,int) ;
 int FUNC_4 (struct ahc_softc*) ;
 int FUNC_5 (struct ahc_softc*) ;

void
FUNC_6(struct ahc_softc *VAR_27)
{

 FUNC_4(VAR_27);


 FUNC_1(VAR_27);

 FUNC_3(VAR_27, VAR_20, 0);
 FUNC_3(VAR_27, VAR_12, VAR_11);
 FUNC_3(VAR_27, VAR_25, FUNC_2(VAR_27, VAR_25) & ~VAR_1);
 FUNC_3(VAR_27, VAR_10, VAR_14);
 FUNC_3(VAR_27, VAR_16, 0xFF);
 FUNC_3(VAR_27, VAR_15, 0xFF);
 FUNC_3(VAR_27, VAR_26, VAR_27->tqinfifonext);


 FUNC_3(VAR_27, VAR_18,
   FUNC_2(VAR_27, VAR_19) & (VAR_9|VAR_8|VAR_7));
 if ((VAR_27->features & VAR_0) != 0) {

  FUNC_3(VAR_27, VAR_2, 0);
  FUNC_3(VAR_27, VAR_4, 0);
  FUNC_3(VAR_27, VAR_3, 0);
 }





 if ((FUNC_2(VAR_27, VAR_24) & VAR_17) != 0) {
  FUNC_0(VAR_27);
  FUNC_3(VAR_27, VAR_24,
    FUNC_2(VAR_27, VAR_24) & ~VAR_17);
 }






 FUNC_3(VAR_27, VAR_5, VAR_6);

 FUNC_3(VAR_27, VAR_13, 0);
 FUNC_3(VAR_27, VAR_23, VAR_27->seqctl);
 FUNC_3(VAR_27, VAR_21, 0);
 FUNC_3(VAR_27, VAR_22, 0);

 FUNC_5(VAR_27);
}
