
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
struct TYPE_4__ {int server; } ;
typedef TYPE_1__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_cccol_cursor ;
typedef int * krb5_ccache ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,char**,int*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int **) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_10 (int ,int *,int **) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int ,int **) ;
 int FUNC_14 (int ,int,scalar_t__,char*,...) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int ,scalar_t__,int *) ;
 int FUNC_19 (int ,scalar_t__,char*) ;
 int VAR_5 ;
 int FUNC_20 (int *) ;
 int FUNC_21 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_22 (int) ;
 scalar_t__ VAR_7 ;

int
FUNC_23 (int VAR_8, char **VAR_9)
{
    krb5_error_code VAR_10;
    krb5_context VAR_11;
    krb5_ccache VAR_12;
    int VAR_13 = 0;
    int VAR_14 = 0;

    FUNC_21 (VAR_9[0]);

    if(FUNC_2(VAR_1, VAR_5, VAR_8, VAR_9, &VAR_13))
 FUNC_22(1);

    if (VAR_4)
 FUNC_22 (0);

    if(VAR_7){
 FUNC_20(((void*)0));
 FUNC_1(0);
    }

    VAR_8 -= VAR_13;
    VAR_9 += VAR_13;

    if (VAR_8 != 0)
 FUNC_22 (1);

    VAR_10 = FUNC_17 (&VAR_11);
    if (VAR_10)
 FUNC_0 (1, "krb5_init_context failed: %d", VAR_10);

    if (VAR_0) {
 krb5_cccol_cursor VAR_15;

 VAR_10 = FUNC_12 (VAR_11, &VAR_15);
 if (VAR_10)
     FUNC_14(VAR_11, 1, VAR_10, "krb5_cccol_cursor_new");

 while (FUNC_13 (VAR_11, VAR_15, &VAR_12) == 0 && VAR_12 != ((void*)0)) {

     VAR_10 = FUNC_8 (VAR_11, VAR_12);
     if (VAR_10) {
  FUNC_19(VAR_11, VAR_10, "krb5_cc_destroy");
  VAR_14 = 1;
     }
 }
 FUNC_11(VAR_11, &VAR_15);

    } else {
 if(VAR_2 == ((void*)0)) {
     VAR_10 = FUNC_7(VAR_11, &VAR_12);
     if (VAR_10)
  FUNC_14(VAR_11, 1, VAR_10, "krb5_cc_default");
 } else {
     VAR_10 = FUNC_10(VAR_11,
       VAR_2,
       &VAR_12);
     if (VAR_10)
  FUNC_14(VAR_11, 1, VAR_10, "krb5_cc_resolve");
 }

 if (VAR_10 == 0) {
     if (VAR_3) {
  krb5_creds VAR_16;

  FUNC_5(&VAR_16);

  VAR_10 = FUNC_18(VAR_11, VAR_3, &VAR_16.server);
  if (VAR_10)
      FUNC_14(VAR_11, 1, VAR_10,
        "Can't parse principal %s", VAR_3);

  VAR_10 = FUNC_9(VAR_11, VAR_12, 0, &VAR_16);
  if (VAR_10)
      FUNC_14(VAR_11, 1, VAR_10,
        "Failed to remove principal %s", VAR_3);

  FUNC_6(VAR_11, VAR_12);
  FUNC_16(VAR_11, VAR_16.server);
  FUNC_15(VAR_11);
  return 0;
     }

     VAR_10 = FUNC_8 (VAR_11, VAR_12);
     if (VAR_10) {
  FUNC_19(VAR_11, VAR_10, "krb5_cc_destroy");
  VAR_14 = 1;
     }
 }
    }

    FUNC_15 (VAR_11);


    if (VAR_6 && FUNC_3 ()) {
 if (FUNC_4 ())
     VAR_14 = 1;
    }


    return VAR_14;
}
