
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {unsigned long t_dflg; scalar_t__ t_drit; scalar_t__ t_dlef; } ;
typedef int off_t ;
typedef int Char ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ) ;
 char* VAR_20 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int (*) (int *)) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int) ;
 int VAR_21 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int VAR_22 ;
 int FUNC_8 (int,int ,...) ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_10 (int,int ,int ) ;
 scalar_t__ VAR_27 ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (struct command*,scalar_t__) ;
 int FUNC_13 (int ,char*,int ) ;
 int FUNC_14 (int ) ;
 char* FUNC_15 (int ) ;
 int VAR_28 ;
 int FUNC_16 (int) ;
 int FUNC_17 (char*,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*,int) ;

__attribute__((used)) static void
FUNC_20(struct command *VAR_29, int *VAR_30, int *VAR_31)
{
    int VAR_32;
    Char *VAR_33;
    unsigned long VAR_34 = VAR_29->t_dflg;

    if (VAR_21 || (VAR_34 & VAR_8))
 return;
    if ((VAR_34 & VAR_7) == 0) {
 if (VAR_29->t_dlef) {
     char *VAR_35;




     (void) FUNC_5(VAR_18, 0);
     (void) FUNC_5(VAR_19, 1);
     (void) FUNC_5(VAR_17, 2);
     VAR_33 = FUNC_12(VAR_29, VAR_29->t_dlef);
     VAR_35 = FUNC_15(FUNC_11(VAR_33));
     FUNC_18(VAR_33);
     FUNC_2(VAR_35, FUNC_18);
     if ((VAR_32 = FUNC_19(VAR_35, VAR_15|VAR_14)) < 0)
  FUNC_13(VAR_0, VAR_35, FUNC_14(VAR_22));
     FUNC_3(VAR_35);


     (void) FUNC_8(VAR_32, VAR_9, FUNC_8(VAR_32, VAR_2) | VAR_14);

     (void) FUNC_6(VAR_32, 0);
 }
 else if (VAR_34 & VAR_5) {
     FUNC_16(0);
     FUNC_0(FUNC_7(VAR_30[0]));
     FUNC_16(VAR_30[0]);
     FUNC_16(VAR_30[1]);
 }
 else if ((VAR_34 & VAR_3) && VAR_28 == -1) {
     FUNC_16(0);
     (void) FUNC_19(VAR_20, VAR_15|VAR_14);
 }
 else {
     FUNC_16(0);
     FUNC_0(FUNC_7(VAR_12));
 }
    }
    if (VAR_29->t_drit) {
 char *VAR_36;

 VAR_33 = FUNC_12(VAR_29, VAR_29->t_drit);
 VAR_36 = FUNC_15(FUNC_11(VAR_33));
 FUNC_18(VAR_33);
 FUNC_2(VAR_36, FUNC_18);



 (void) FUNC_5(VAR_19, 1);
 (void) FUNC_5(VAR_17, 2);
 if ((VAR_34 & VAR_1) != 0) {



     VAR_32 = FUNC_19(VAR_36, VAR_16|VAR_14);
     (void) FUNC_10(VAR_32, (off_t) 0, VAR_11);

 }
 else
     VAR_32 = 0;
 if ((VAR_34 & VAR_1) == 0 || VAR_32 == -1) {
     if (!(VAR_34 & VAR_4) && VAR_27) {
  if (VAR_34 & VAR_1)
      FUNC_13(VAR_0, VAR_36, FUNC_14(VAR_22));
  FUNC_1(VAR_36);
     }
     if ((VAR_32 = FUNC_17(VAR_36, 0666)) < 0)
  FUNC_13(VAR_0, VAR_36, FUNC_14(VAR_22));


     (void) FUNC_8(VAR_32, VAR_9, FUNC_8(VAR_32, VAR_2) | VAR_14);

 }
 FUNC_3(VAR_36);
 (void) FUNC_6(VAR_32, 1);
 VAR_23 = FUNC_9(1);
    }
    else if (VAR_34 & VAR_6) {
 FUNC_16(1);
 FUNC_0(FUNC_7(VAR_31[1]));
 VAR_23 = 0;
    }
    else {
 FUNC_16(1);
 FUNC_0(FUNC_7(VAR_19));
 VAR_23 = VAR_26;



    }

    FUNC_16(2);
    if (VAR_34 & VAR_10) {
 FUNC_0(FUNC_7(1));
 VAR_24 = VAR_23;
    }
    else {
 FUNC_0(FUNC_7(VAR_17));
 VAR_24 = VAR_25;



    }
    VAR_21 = 1;
}
