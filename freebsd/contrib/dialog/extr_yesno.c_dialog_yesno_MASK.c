
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;
typedef int DLG_KEYS_BINDING ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char const*) ;


 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
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
 int FUNC_21 (int *,int*) ;
 int FUNC_22 (int *,int,int,int,int) ;
 int * FUNC_23 (int,int,int,int) ;
 int FUNC_24 (char const**,int) ;
 int FUNC_25 (int) ;
 int FUNC_26 (char const**,int) ;
 int FUNC_27 (int *,char*,int,int,int,int) ;
 int FUNC_28 (int,int) ;
 int FUNC_29 (int *,char*,char const**) ;
 int FUNC_30 (int *,char*,int *) ;
 scalar_t__ FUNC_31 (int,int,int*) ;
 char* FUNC_32 (char const*) ;
 int FUNC_33 (char*) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int) ;
 char** FUNC_37 () ;
 int FUNC_38 (char*) ;
 int FUNC_39 (int) ;

int
FUNC_40(const char *VAR_9, const char *VAR_10, int VAR_11, int VAR_12)
{

    static DLG_KEYS_BINDING VAR_13[] = {
 131,
 132,
 129,
 128,
 133
    };


    int VAR_14, VAR_15;
    int VAR_16 = 0, VAR_17;
    int VAR_18;
    int VAR_19 = FUNC_13();
    WINDOW *VAR_20 = 0;
    int VAR_21 = VAR_1;
    char *VAR_22;
    const char **VAR_23 = FUNC_37();
    int VAR_24 = 25;
    bool VAR_25 = VAR_5;
    int VAR_26, VAR_27 = 0, VAR_28 = 0;


    int VAR_29 = VAR_11;
    int VAR_30 = VAR_12;


    FUNC_0(("# yesno args:\n"));
    FUNC_2("title", VAR_9);
    FUNC_2("message", VAR_10);
    FUNC_1("height", VAR_11);
    FUNC_1("width", VAR_12);


  restart:

    VAR_22 = FUNC_32(VAR_10);
    FUNC_33(VAR_22);
    FUNC_8(VAR_23, &VAR_24);
    FUNC_5(VAR_9, VAR_22, &VAR_11, &VAR_12, 2, VAR_24);
    FUNC_28(VAR_11, VAR_12);
    FUNC_12(VAR_11, VAR_12);

    VAR_14 = FUNC_6(VAR_12);
    VAR_15 = FUNC_7(VAR_11);


    if (VAR_20 != 0)
 FUNC_22(VAR_20, VAR_11, VAR_12, VAR_15, VAR_14);
    else

    {
 VAR_20 = FUNC_23(VAR_11, VAR_12, VAR_15, VAR_14);
 FUNC_30(VAR_20, "yesno", VAR_13);
 FUNC_29(VAR_20, "yesno", VAR_23);
    }

    FUNC_16(VAR_20, 0, 0, VAR_11, VAR_12, VAR_8, VAR_7, VAR_6);
    FUNC_15(VAR_20, VAR_7, VAR_6, VAR_8);
    FUNC_19(VAR_20, VAR_9);
    FUNC_18(VAR_20, VAR_2);

    FUNC_4(VAR_20, VAR_8);

    VAR_26 = VAR_11 - (1 + 3 * VAR_3);
    FUNC_17(VAR_20,
       VAR_11 - 2 * VAR_3, 0,
       VAR_23, VAR_19, VAR_2, VAR_12);

    while (VAR_21 == VAR_1) {
 if (VAR_25) {
     VAR_27 = FUNC_27(VAR_20, VAR_22, VAR_28,
          VAR_26, VAR_12, VAR_5);
     FUNC_34(VAR_20);
     VAR_25 = VAR_2;
 }
 VAR_16 = FUNC_21(VAR_20, &VAR_17);
 if (FUNC_31(VAR_16, VAR_17, &VAR_21))
     break;
 if ((VAR_18 = FUNC_9(VAR_16, VAR_23)) >= 0) {
     VAR_21 = FUNC_25(VAR_18);
     break;
 }

 if (VAR_17) {
     switch (VAR_16) {
     case 135:
  VAR_19 = FUNC_24(VAR_23, VAR_19);
  if (VAR_19 < 0)
      VAR_19 = 0;
  FUNC_17(VAR_20,
     VAR_11 - 2, 0,
     VAR_23, VAR_19,
     VAR_2, VAR_12);
  break;
     case 134:
  VAR_19 = FUNC_26(VAR_23, VAR_19);
  if (VAR_19 < 0)
      VAR_19 = 0;
  FUNC_17(VAR_20,
     VAR_11 - 2, 0,
     VAR_23, VAR_19,
     VAR_2, VAR_12);
  break;
     case 136:
  VAR_21 = FUNC_36(VAR_19);
  break;

     case 130:
  FUNC_35(VAR_20);
  FUNC_11();
  FUNC_38(VAR_22);
  VAR_11 = VAR_29;
  VAR_12 = VAR_30;
  VAR_25 = VAR_5;
  goto restart;

     default:
  if (FUNC_39(VAR_16)) {
      VAR_21 = FUNC_36(VAR_16 - VAR_4);
      if (VAR_21 < 0)
   VAR_21 = VAR_0;
  } else if (FUNC_10(VAR_16, VAR_27, VAR_26,
           &VAR_25, &VAR_28) != 0) {
      FUNC_3();
  }
  break;
     }
 } else {
     FUNC_3();
 }
    }

    FUNC_14(VAR_20);
    FUNC_20();
    FUNC_38(VAR_22);
    return VAR_21;
}
