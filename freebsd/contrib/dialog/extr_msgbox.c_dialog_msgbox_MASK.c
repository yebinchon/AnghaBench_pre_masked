
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_2__ {int nocancel; } ;
typedef int DLG_KEYS_BINDING ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char const*) ;


 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;


 void* VAR_5 ;
 int FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char const*,char*,int*,int*,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char const**,int*) ;
 int FUNC_9 (int,char const**) ;
 int FUNC_10 (int,int,int,int*,int*) ;
 int FUNC_11 () ;
 int FUNC_12 (int,int) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int ,int ) ;
 int FUNC_16 (int *,int ,int ,int,int,int ,int ,int ) ;
 int FUNC_17 (int *,int,int ,char const**,int,int,int) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *,char const*) ;
 int FUNC_20 () ;
 int FUNC_21 (int,int) ;
 int FUNC_22 (int *,int*) ;
 int FUNC_23 (int *,int,int,int,int) ;
 int * FUNC_24 (int,int,int,int) ;
 int FUNC_25 (char const**,int) ;
 int FUNC_26 (int) ;
 char** FUNC_27 () ;
 int FUNC_28 (char const**,int) ;
 int FUNC_29 (int *,char*,int,int,int,int) ;
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
 int FUNC_41 (int *) ;

int
FUNC_42(const char *VAR_10, const char *VAR_11, int VAR_12, int VAR_13,
       int VAR_14)
{

    static DLG_KEYS_BINDING VAR_15[] = {
 131,
 132,
 129,
 128,
 133
    };


    int VAR_16, VAR_17, VAR_18 = 0, VAR_19;
    int VAR_20;
    int VAR_21 = 0, VAR_22;
    int VAR_23 = VAR_1;
    WINDOW *VAR_24 = 0;
    char *VAR_25;
    const char **VAR_26 = FUNC_27();
    int VAR_27 = 0;
    int VAR_28;
    bool VAR_29 = VAR_5;
    int VAR_30 = (VAR_14 == 1 ? 12 : 0);
    bool VAR_31 = VAR_9.nocancel;

    int VAR_32;
    int VAR_33;


    FUNC_0(("# msgbox args:\n"));
    FUNC_2("title", VAR_10);
    FUNC_2("message", VAR_11);
    FUNC_1("height", VAR_12);
    FUNC_1("width", VAR_13);
    FUNC_1("pauseopt", VAR_14);

    VAR_9.nocancel = VAR_5;
    VAR_20 = FUNC_13();


    VAR_32 = VAR_12;
    VAR_33 = VAR_13;
  restart:


    FUNC_8(VAR_26, &VAR_30);

    VAR_25 = FUNC_34(VAR_11);
    FUNC_35(VAR_25);
    FUNC_5(VAR_10, VAR_25, &VAR_12, &VAR_13,
    (VAR_14 == 1 ? 2 : 0),
    VAR_30);
    FUNC_30(VAR_12, VAR_13);
    FUNC_12(VAR_12, VAR_13);

    VAR_16 = FUNC_6(VAR_13);
    VAR_17 = FUNC_7(VAR_12);


    if (VAR_24 != 0)
 FUNC_23(VAR_24, VAR_12, VAR_13, VAR_17, VAR_16);
    else

    {
 VAR_24 = FUNC_24(VAR_12, VAR_13, VAR_17, VAR_16);
 FUNC_32(VAR_24, "msgbox", VAR_15);
 FUNC_31(VAR_24, "msgbox", VAR_26);
    }
    VAR_19 = VAR_12 - (1 + 3 * VAR_3);

    FUNC_21(VAR_16, VAR_17);

    FUNC_16(VAR_24, 0, 0, VAR_12, VAR_13, VAR_8, VAR_7, VAR_6);
    FUNC_19(VAR_24, VAR_10);

    FUNC_4(VAR_24, VAR_8);

    if (VAR_14) {
 FUNC_15(VAR_24, VAR_7, VAR_6, VAR_8);
 FUNC_40(VAR_12 - 2, VAR_13 / 2 - 4, 6, '\n');
 FUNC_17(VAR_24, VAR_12 - 2, 0, VAR_26, VAR_20, VAR_2, VAR_13);
 FUNC_18(VAR_24, VAR_2);

 while (VAR_23 == VAR_1) {
     if (VAR_29) {
  VAR_18 = FUNC_29(VAR_24, VAR_25, VAR_27,
       VAR_19, VAR_13, VAR_14);
  FUNC_36(VAR_24);
  VAR_29 = VAR_2;
     }
     VAR_21 = FUNC_22(VAR_24, &VAR_22);
     if (FUNC_33(VAR_21, VAR_22, &VAR_23))
  break;

     if (!VAR_22 && (VAR_28 = FUNC_9(VAR_21, VAR_26)) >= 0) {
  VAR_23 = FUNC_26(VAR_28);
  break;
     }

     if (VAR_22) {
  switch (VAR_21) {

  case 130:
      FUNC_37(VAR_24);
      FUNC_11();
      FUNC_38(VAR_25);
      VAR_12 = VAR_32;
      VAR_13 = VAR_33;
      VAR_29 = VAR_5;
      goto restart;

  case 135:
      VAR_20 = FUNC_25(VAR_26, VAR_20);
      if (VAR_20 < 0)
   VAR_20 = 0;
      FUNC_17(VAR_24,
         VAR_12 - 2, 0,
         VAR_26, VAR_20,
         VAR_2, VAR_13);
      break;
  case 134:
      VAR_20 = FUNC_28(VAR_26, VAR_20);
      if (VAR_20 < 0)
   VAR_20 = 0;
      FUNC_17(VAR_24,
         VAR_12 - 2, 0,
         VAR_26, VAR_20,
         VAR_2, VAR_13);
      break;
  case 136:
      VAR_23 = FUNC_26(VAR_20);
      break;
  default:
      if (FUNC_39(VAR_21)) {
   VAR_23 = FUNC_26(VAR_21 - VAR_4);
   if (VAR_23 < 0)
       VAR_23 = VAR_0;
      } else if (FUNC_10(VAR_21,
        VAR_18,
        VAR_19,
        &VAR_29,
        &VAR_27) == 0) {
      } else {
   FUNC_3();
      }
      break;
  }
     } else {
  FUNC_3();
     }
 }
    } else {
 FUNC_29(VAR_24, VAR_25, VAR_27, VAR_19, VAR_13, VAR_14);
 FUNC_18(VAR_24, VAR_2);
 FUNC_41(VAR_24);
 FUNC_36(VAR_24);
 VAR_23 = VAR_0;
    }

    FUNC_14(VAR_24);
    FUNC_20();
    FUNC_38(VAR_25);

    VAR_9.nocancel = VAR_31;

    return VAR_23;
}
