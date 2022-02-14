
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GtkWidget ;
typedef scalar_t__ GdkGrabStatus ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int VAR_10 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,int ,int *,int *,int *) ;
 int FUNC_10 (int ,char*,int ,int *) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ,int ,int ,int *,int *,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int * FUNC_19 (char*) ;
 int FUNC_20 (int ,int *,int ,int ,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int) ;
 int FUNC_24 (int ) ;
 int * FUNC_25 () ;
 int FUNC_26 (int ,char*) ;
 int FUNC_27 (int ,int ) ;
 int * FUNC_28 (int ,int ,int ,int ,char*,char*) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;
 int * FUNC_34 (int ) ;
 int FUNC_35 (int ,int ) ;
 int FUNC_36 (int ,int ) ;
 int FUNC_37 (int ,char*) ;
 int FUNC_38 (char*,char,int ) ;
 int VAR_11 ;
 int FUNC_39 (char*) ;
 int FUNC_40 (int *,char const*) ;
 int FUNC_41 (char*) ;
 int FUNC_42 (int) ;

__attribute__((used)) static int
FUNC_43(char *VAR_12)
{
 const char *VAR_13;
 char *VAR_14, *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;
 GtkWidget *VAR_20, *VAR_21, *VAR_22;
 GdkGrabStatus VAR_23;

 VAR_18 = (FUNC_19("GNOME_SSH_ASKPASS_GRAB_SERVER") != ((void*)0));
 VAR_19 = (FUNC_19("GNOME_SSH_ASKPASS_GRAB_POINTER") != ((void*)0));
 VAR_17 = 0;



 VAR_20 = FUNC_34(VAR_8);

 VAR_21 = FUNC_28(FUNC_4(VAR_20), 0,
     VAR_6,
     VAR_5,
     "%s",
     VAR_12);

 VAR_22 = FUNC_25();
 FUNC_20(
     FUNC_0(FUNC_21(FUNC_1(VAR_21))), VAR_22,
     VAR_0, VAR_0, 0);
 FUNC_27(FUNC_2(VAR_22), VAR_0);
 FUNC_31(VAR_22);
 FUNC_32(VAR_22);

 FUNC_37(FUNC_4(VAR_21), "OpenSSH");
 FUNC_36 (FUNC_4(VAR_21), VAR_9);
 FUNC_35(FUNC_4(VAR_21), VAR_10);


 FUNC_23(FUNC_1(VAR_21), VAR_7);
 FUNC_10(FUNC_6(VAR_22), "activate",
    FUNC_5(VAR_11), VAR_21);

 FUNC_35(FUNC_4(VAR_21), VAR_10);


 FUNC_33(VAR_21);
 if (VAR_19) {
  for(;;) {
   VAR_23 = FUNC_15(
       (FUNC_30(FUNC_3(VAR_21))), VAR_10,
       0, ((void*)0), ((void*)0), VAR_1);
   if (VAR_23 == VAR_2)
    break;
   FUNC_42(VAR_4 * 1000);
   if (++VAR_17 > VAR_3) {
    VAR_13 = "mouse";
    goto nograb;
   }
  }
 }
 for(;;) {
  VAR_23 = FUNC_13(
      FUNC_30(FUNC_3(VAR_21)), VAR_0,
      VAR_1);
  if (VAR_23 == VAR_2)
   break;
  FUNC_42(VAR_4 * 1000);
  if (++VAR_17 > VAR_3) {
   VAR_13 = "keyboard";
   goto nograbkb;
  }
 }
 if (VAR_18) {
  FUNC_18();
 }

 VAR_16 = FUNC_22(FUNC_1(VAR_21));


 if (VAR_18)
  FUNC_7(FUNC_17());
 if (VAR_19)
  FUNC_16(VAR_1);
 FUNC_14(VAR_1);
 FUNC_12();


 VAR_14 = FUNC_11(FUNC_24(FUNC_2(VAR_22)));
 if (VAR_16 == VAR_7) {
  VAR_15 = FUNC_9(VAR_14, FUNC_41(VAR_14),
        ((void*)0), ((void*)0), ((void*)0));
  if (VAR_15 != ((void*)0)) {
   FUNC_39(VAR_15);
   FUNC_38(VAR_15, '\0', FUNC_41(VAR_15));
   FUNC_8(VAR_15);
  } else {
   FUNC_39(VAR_14);
  }
 }


 FUNC_38(VAR_14, '\b', FUNC_41(VAR_14));
 FUNC_26(FUNC_2(VAR_22), VAR_14);
 FUNC_38(VAR_14, '\0', FUNC_41(VAR_14));
 FUNC_8(VAR_14);

 FUNC_29(VAR_21);
 return (VAR_16 == VAR_7 ? 0 : -1);




 nograbkb:
 FUNC_16(VAR_1);
 nograb:
 if (VAR_18)
  FUNC_7(FUNC_17());
 FUNC_29(VAR_21);

 FUNC_40(VAR_20, VAR_13);

 return (-1);
}
