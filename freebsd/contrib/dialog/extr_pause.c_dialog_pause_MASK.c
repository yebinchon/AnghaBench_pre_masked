
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int chtype ;
typedef int WINDOW ;
struct TYPE_2__ {int timeout_secs; } ;
typedef int DLG_KEYS_BINDING ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char const*) ;



 int VAR_4 ;


 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int) ;
 int VAR_13 ;
 TYPE_1__ VAR_14 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (char const*,char*,int*,int*,scalar_t__,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (char const**) ;
 int FUNC_10 (char const**,int*) ;
 int FUNC_11 () ;
 int FUNC_12 (int,int) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int ,int) ;
 int FUNC_16 (int *,int,int,int,int,int,int ,int ) ;
 int FUNC_17 (int *,int,int ,char const**,int,int,int) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *,char const*) ;
 int FUNC_20 (int) ;
 int FUNC_21 () ;
 int FUNC_22 (int,int) ;
 int FUNC_23 (int *,int*) ;
 int * FUNC_24 (int,int,int,int) ;
 int FUNC_25 (char const**,int) ;
 int FUNC_26 (int ) ;
 char** FUNC_27 () ;
 int FUNC_28 (char const**,int) ;
 int FUNC_29 (int *,char*,int,int) ;
 int FUNC_30 (int,int) ;
 int FUNC_31 (int *,char*,char const**) ;
 int FUNC_32 (int *,char*,int *) ;
 scalar_t__ FUNC_33 (int,int,int*) ;
 char* FUNC_34 (char const*) ;
 int FUNC_35 (char*) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (char*) ;
 int FUNC_39 (int) ;
 int FUNC_40 (int,int,int,char) ;
 int FUNC_41 (scalar_t__) ;
 int FUNC_42 (int *,int) ;
 int FUNC_43 () ;
 int VAR_15 ;
 int FUNC_44 (int *,int) ;
 int FUNC_45 (int *) ;
 int FUNC_46 (int *) ;
 int FUNC_47 (int *,int,int) ;
 int FUNC_48 (int *,char*,int) ;
 int FUNC_49 (int *) ;

int
FUNC_50(const char *VAR_16,
      const char *VAR_17,
      int VAR_18,
      int VAR_19,
      int VAR_20)
{

    static DLG_KEYS_BINDING VAR_21[] = {
 130,
 132,
 128,
 133
    };



    int VAR_22 = VAR_18;
    int VAR_23 = VAR_19;


    int VAR_24, VAR_25, VAR_26, VAR_27;
    int VAR_28 = FUNC_13();
    int VAR_29;
    WINDOW *VAR_30;
    const char **VAR_31 = FUNC_27();
    bool VAR_32 = (FUNC_9(VAR_31) != 0);
    bool VAR_33;
    int VAR_34 = 0, VAR_35;
    int VAR_36 = VAR_3;
    int VAR_37 = (VAR_32 ? VAR_1 : VAR_5);
    int VAR_38;
    char *VAR_39;
    int VAR_40 = VAR_14.timeout_secs;

    FUNC_0(("# pause args:\n"));
    FUNC_2("title", VAR_16);
    FUNC_2("message", VAR_17);
    FUNC_1("height", VAR_18);
    FUNC_1("width", VAR_19);
    FUNC_1("seconds", VAR_20);

    FUNC_3(0);

    VAR_14.timeout_secs = 0;
    VAR_29 = (VAR_20 > 0) ? VAR_20 : 1;


  retry:


    VAR_39 = FUNC_34(VAR_17);
    FUNC_35(VAR_39);

    if (VAR_32) {
 FUNC_6(VAR_16, VAR_39, &VAR_18, &VAR_19,
        VAR_6,
        VAR_7);
 FUNC_10(VAR_31, &VAR_19);
    } else {
 FUNC_6(VAR_16, VAR_39, &VAR_18, &VAR_19,
        VAR_6 + VAR_5 - VAR_1,
        VAR_7);
    }
    VAR_38 = VAR_18 - VAR_37 - (1 + 2 * VAR_5);
    FUNC_30(VAR_18, VAR_19);
    FUNC_12(VAR_18, VAR_19);


    VAR_25 = FUNC_7(VAR_19);
    VAR_26 = FUNC_8(VAR_18);

    VAR_30 = FUNC_24(VAR_18, VAR_19, VAR_26, VAR_25);
    FUNC_32(VAR_30, "pause", VAR_21);
    FUNC_31(VAR_30, "pause", VAR_31);

    FUNC_22(VAR_25, VAR_26);
    FUNC_42(VAR_30, VAR_10);

    VAR_33 = VAR_10;
    do {
 (void) FUNC_45(VAR_30);
 FUNC_16(VAR_30, 0, 0, VAR_18, VAR_19, VAR_13, VAR_12, VAR_11);

 FUNC_19(VAR_30, VAR_16);
 FUNC_18(VAR_30, VAR_4);

 FUNC_5(VAR_30, VAR_13);
 FUNC_29(VAR_30, VAR_39, VAR_18, VAR_19);

 FUNC_16(VAR_30,
        VAR_38, 2 + VAR_5,
        2 + VAR_5, VAR_19 - 2 * (2 + VAR_5),
        VAR_13,
        VAR_12,
        VAR_11);






 (void) FUNC_47(VAR_30, VAR_38 + VAR_5, 4);
 FUNC_5(VAR_30, VAR_15);

 for (VAR_24 = 0; VAR_24 < (VAR_19 - 2 * (3 + VAR_5)); VAR_24++)
     (void) FUNC_44(VAR_30, ' ');

 (void) FUNC_47(VAR_30, VAR_38 + VAR_5, (VAR_19 / 2) - 2);
 (void) FUNC_48(VAR_30, "%3d", VAR_20);






 VAR_25 = (VAR_20 * (VAR_19 - 2 * (3 + VAR_5))) / VAR_29;
 if ((VAR_15 & VAR_0) != 0) {
     FUNC_4(VAR_30, VAR_0);
 } else {
     FUNC_5(VAR_30, VAR_0);
 }
 (void) FUNC_47(VAR_30, VAR_38 + VAR_5, 4);
 for (VAR_24 = 0; VAR_24 < VAR_25; VAR_24++) {
     chtype VAR_41 = FUNC_46(VAR_30);
     if (VAR_15 & VAR_0) {
  VAR_41 &= ~VAR_0;
     }
     (void) FUNC_44(VAR_30, VAR_41);
 }

 FUNC_40(VAR_18 - 2, VAR_19 / 2 - 4, 6, '\n');
 if (VAR_32) {
     FUNC_15(VAR_30, VAR_12, VAR_11, VAR_13);
     FUNC_17(VAR_30, VAR_18 - 2, 0, VAR_31, VAR_28, VAR_4, VAR_19);
 }
 if (VAR_33) {
     (void) FUNC_49(VAR_30);
     FUNC_36(VAR_30);
     VAR_33 = VAR_4;
 }

 for (VAR_27 = 0;
      (VAR_36 == VAR_3) && (VAR_27 < 1000);
      VAR_27 += VAR_8) {

     FUNC_41(VAR_8);
     VAR_34 = FUNC_23(VAR_30, &VAR_35);
     if (VAR_34 == 131) {
  ;
     } else {
  if (FUNC_33(VAR_34, VAR_35, &VAR_36))
      break;
     }

     switch (VAR_34) {

     case 129:
  FUNC_37(VAR_30);
  FUNC_11();
  FUNC_14(VAR_30);
  VAR_18 = VAR_22;
  VAR_19 = VAR_23;
  FUNC_38(VAR_39);
  FUNC_43();
  goto retry;

     case 135:
  VAR_28 = FUNC_25(VAR_31, VAR_28);
  if (VAR_28 < 0)
      VAR_28 = 0;
  FUNC_17(VAR_30,
     VAR_18 - 2, 0,
     VAR_31, VAR_28,
     VAR_4, VAR_19);
  break;
     case 134:
  VAR_28 = FUNC_28(VAR_31, VAR_28);
  if (VAR_28 < 0)
      VAR_28 = 0;
  FUNC_17(VAR_30,
     VAR_18 - 2, 0,
     VAR_31, VAR_28,
     VAR_4, VAR_19);
  break;
     case 136:
  VAR_36 = FUNC_20(VAR_28);
  break;
     case 131:
  break;
     default:
  if (FUNC_39(VAR_34)) {
      VAR_36 = FUNC_26(VAR_34 - VAR_9);
      if (VAR_36 < 0)
   VAR_36 = VAR_2;
  }
  break;
     }
 }
    } while ((VAR_36 == VAR_3) && (VAR_20-- > 0));

    FUNC_3(1);
    FUNC_21();
    FUNC_14(VAR_30);
    FUNC_38(VAR_39);

    VAR_14.timeout_secs = VAR_40;

    return ((VAR_36 == VAR_3) ? VAR_2 : VAR_36);
}
