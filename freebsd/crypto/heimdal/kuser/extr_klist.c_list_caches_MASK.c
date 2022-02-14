
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int rtbl_t ;
typedef int * krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int krb5_cc_cache_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 char* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,char**) ;
 scalar_t__ FUNC_9 (int ,int ,char**) ;
 char* FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ,int **) ;
 int FUNC_12 (int ,int,scalar_t__,char*) ;
 int FUNC_13 (int ,int,char*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int ,int ,char const*) ;
 int FUNC_19 () ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ,char*) ;
 int FUNC_23 (int ,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_24 (char*,char*) ;
 char* FUNC_25 (char const*) ;

__attribute__((used)) static int
FUNC_26(krb5_context VAR_6)
{
    krb5_cc_cache_cursor VAR_7;
    const char *VAR_8;
    char *VAR_9;
    krb5_error_code VAR_10;
    krb5_ccache VAR_11;
    rtbl_t VAR_12;

    VAR_8 = FUNC_7(VAR_6);
    if (VAR_8 == ((void*)0))
 FUNC_13(VAR_6, 1, "krb5_cc_default_name");
    VAR_9 = FUNC_25(VAR_8);

    VAR_10 = FUNC_4 (VAR_6, ((void*)0), &VAR_7);
    if (VAR_10 == VAR_4)
 return 0;
    else if (VAR_10)
 FUNC_12 (VAR_6, 1, VAR_10, "krb5_cc_cache_get_first");

    VAR_12 = FUNC_19();
    FUNC_17(VAR_12, VAR_3, 0);
    FUNC_17(VAR_12, VAR_0, 0);
    FUNC_17(VAR_12, VAR_2, 0);
    FUNC_17(VAR_12, VAR_1, 0);
    FUNC_23(VAR_12, "   ");
    FUNC_22(VAR_12, VAR_3, "");

    while (FUNC_5 (VAR_6, VAR_7, &VAR_11) == 0) {
 krb5_principal VAR_13 = ((void*)0);
 int VAR_14 = 0;
 char *VAR_15;
 time_t VAR_16;

 VAR_10 = FUNC_11(VAR_6, VAR_11, &VAR_13);
 if (VAR_10)
     continue;

 VAR_14 = FUNC_1 (VAR_6, VAR_11, VAR_13, &VAR_16);

 VAR_10 = FUNC_8(VAR_6, VAR_11, &VAR_15);
 if (VAR_10 == 0) {
     const char *VAR_17;
     char *VAR_18;
     FUNC_18(VAR_12, VAR_3, VAR_15);
     FUNC_18(VAR_12, VAR_0,
      FUNC_10(VAR_6, VAR_11));
     if (VAR_14)
  VAR_17 = FUNC_0(">>> Expired <<<", "");
     else
  VAR_17 = FUNC_16(VAR_16);
     FUNC_18(VAR_12, VAR_2, VAR_17);
     FUNC_2(VAR_15);

     VAR_10 = FUNC_9(VAR_6, VAR_11, &VAR_18);
     if (VAR_10)
  FUNC_12 (VAR_6, 1, VAR_10, "krb5_cc_get_full_name");

     if (FUNC_24(VAR_18, VAR_9) == 0)
  FUNC_18(VAR_12, VAR_1, "*");
     else
  FUNC_18(VAR_12, VAR_1, "");

     FUNC_15(VAR_18);
 }
 FUNC_6(VAR_6, VAR_11);

 FUNC_14(VAR_6, VAR_13);
    }

    FUNC_3(VAR_6, VAR_7);

    FUNC_2(VAR_9);
    FUNC_21(VAR_12, VAR_5);
    FUNC_20(VAR_12);

    return 0;
}
