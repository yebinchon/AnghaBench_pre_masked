
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int * rtbl_t ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef scalar_t__ krb5_deltat ;
struct TYPE_6__ {int server; } ;
typedef TYPE_1__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int krb5_cc_cursor ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,char**) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__*) ;
 char* FUNC_5 (int ,int ) ;
 char* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int *,TYPE_1__*) ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int ,int,scalar_t__,char*) ;
 int FUNC_12 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ,char**) ;
 int FUNC_15 (int ,TYPE_1__*,int *,int) ;
 int FUNC_16 (int ,TYPE_1__*) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (int *,int ,int ) ;
 int * FUNC_19 () ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *,char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_23 (char*,char*) ;
 int FUNC_24 (int,char*,int) ;

__attribute__((used)) static void
FUNC_25 (krb5_context VAR_8,
        krb5_ccache VAR_9,
        krb5_principal VAR_10,
        int VAR_11,
        int VAR_12,
        int VAR_13)
{
    krb5_error_code VAR_14;
    char *VAR_15, *VAR_16;
    krb5_cc_cursor VAR_17;
    krb5_creds VAR_18;
    krb5_deltat VAR_19;

    rtbl_t VAR_20 = ((void*)0);

    VAR_14 = FUNC_14 (VAR_8, VAR_10, &VAR_15);
    if (VAR_14)
 FUNC_11 (VAR_8, 1, VAR_14, "krb5_unparse_name");

    FUNC_17 ("%17s: %s:%s\n",
     FUNC_0("Credentials cache", ""),
     FUNC_6(VAR_8, VAR_9),
     FUNC_5(VAR_8, VAR_9));
    FUNC_17 ("%17s: %s\n", FUNC_0("Principal", ""), VAR_15);

    VAR_14 = FUNC_3(VAR_8, VAR_9, &VAR_16);
    if (VAR_14 == 0) {
 if (FUNC_23(VAR_16, VAR_15) != 0)
     FUNC_17 ("%17s: %s\n", FUNC_0("Friendly name", ""), VAR_16);
 FUNC_1(VAR_16);
    }
    FUNC_1 (VAR_15);

    if(VAR_11) {
 FUNC_17 ("%17s: %d\n", FUNC_0("Cache version", ""),
  FUNC_7(VAR_8, VAR_9));
    } else {
        FUNC_9(VAR_8, VAR_9, VAR_6);
    }

    VAR_14 = FUNC_4(VAR_8, VAR_9, &VAR_19);

    if (VAR_14 == 0 && VAR_11 && VAR_19 != 0) {
 char VAR_21[VAR_0];
 int VAR_22;
 int VAR_23;

 VAR_22 = VAR_19;
 VAR_23 = 1;
 if (VAR_22 < 0) {
     VAR_23 = -1;
     VAR_22 = -VAR_22;
 }

 FUNC_24 (VAR_22, VAR_21, sizeof(VAR_21));

 FUNC_17 ("%17s: %s%s\n", FUNC_0("KDC time offset", ""),
  VAR_23 == -1 ? "-" : "", VAR_21);
    }

    FUNC_17("\n");

    VAR_14 = FUNC_10 (VAR_8, VAR_9, &VAR_17);
    if (VAR_14)
 FUNC_11(VAR_8, 1, VAR_14, "krb5_cc_start_seq_get");

    if(!VAR_11) {
 VAR_20 = FUNC_19();
 FUNC_18(VAR_20, VAR_3, 0);
 FUNC_18(VAR_20, VAR_1, 0);
 if(VAR_12)
     FUNC_18(VAR_20, VAR_2, 0);
 FUNC_18(VAR_20, VAR_4, 0);
 FUNC_22(VAR_20, "  ");
    }
    while ((VAR_14 = FUNC_8 (VAR_8,
         VAR_9,
         &VAR_17,
         &VAR_18)) == 0) {
 if (!VAR_13 && FUNC_13(VAR_8, VAR_18.server)) {
     ;
 }else if(VAR_11){
     FUNC_16(VAR_8, &VAR_18);
 }else{
     FUNC_15(VAR_8, &VAR_18, VAR_20, VAR_12);
 }
 FUNC_12 (VAR_8, &VAR_18);
    }
    if(VAR_14 != VAR_5)
 FUNC_11(VAR_8, 1, VAR_14, "krb5_cc_get_next");
    VAR_14 = FUNC_2 (VAR_8, VAR_9, &VAR_17);
    if (VAR_14)
 FUNC_11 (VAR_8, 1, VAR_14, "krb5_cc_end_seq_get");
    if(!VAR_11) {
 FUNC_21(VAR_20, VAR_7);
 FUNC_20(VAR_20);
    }
}
