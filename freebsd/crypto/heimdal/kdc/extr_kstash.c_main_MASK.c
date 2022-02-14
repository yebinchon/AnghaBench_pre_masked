
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_4__ {scalar_t__ length; int * data; } ;
struct TYPE_5__ {TYPE_1__ saltvalue; int salttype; } ;
typedef TYPE_2__ krb5_salt ;
typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
typedef int hdb_master_key ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (char**,char*,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int *,int *) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,char*,int *) ;
 scalar_t__ FUNC_8 (int ,char*,int ) ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 int FUNC_9 (int ,int,scalar_t__,char*,...) ;
 int FUNC_10 (int ,int,char*) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int ,int *) ;
 int FUNC_13 (int *,int,char**,int ,int ,int *) ;
 int FUNC_14 (int ,int ,int ) ;
 scalar_t__ FUNC_15 (int ,int ,int *) ;
 int FUNC_16 (int ,int ,char*,TYPE_2__,int *) ;
 int FUNC_17 (int ,scalar_t__,char*) ;
 int FUNC_18 (int ,char*,char*) ;
 scalar_t__ FUNC_19 (char*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_20 (int *) ;
 scalar_t__ VAR_11 ;
 size_t FUNC_21 (int,char*,int) ;
 scalar_t__ FUNC_22 (char*,char*) ;
 size_t FUNC_23 (char*,char*) ;
 scalar_t__ FUNC_24 (char*) ;
 scalar_t__ VAR_12 ;

int
FUNC_25(int VAR_13, char **VAR_14)
{
    char VAR_15[1024];
    krb5_error_code VAR_16;

    krb5_enctype VAR_17;

    hdb_master_key VAR_18;

    FUNC_13(&VAR_3, VAR_13, VAR_14, VAR_2, VAR_10, ((void*)0));

    if(VAR_7)
 FUNC_14(0, VAR_2, VAR_10);
    if(VAR_12){
 FUNC_20(((void*)0));
 FUNC_2(0);
    }

    if (VAR_9 != -1 && VAR_11)
 FUNC_10(VAR_3, 1, "random-key and master-key-fd "
    "is mutual exclusive");

    if (VAR_8 == ((void*)0))
 FUNC_1(&VAR_8, "%s/m-key", FUNC_5(VAR_3));

    VAR_16 = FUNC_15(VAR_3, VAR_5, &VAR_17);
    if(VAR_16)
 FUNC_9(VAR_3, 1, VAR_16, "krb5_string_to_enctype");

    VAR_16 = FUNC_7(VAR_3, VAR_8, &VAR_18);
    if(VAR_16 && VAR_16 != VAR_0)
 FUNC_9(VAR_3, 1, VAR_16, "reading master key from %s", VAR_8);

    if (VAR_4) {
 if (VAR_16)
     FUNC_9(VAR_3, 1, VAR_16, "reading master key from %s", VAR_8);
    } else {
 krb5_keyblock VAR_19;
 krb5_salt VAR_20;
 VAR_20.salttype = VAR_1;

 VAR_20.saltvalue.data = ((void*)0);
 VAR_20.saltvalue.length = 0;
 if (VAR_11) {
     VAR_16 = FUNC_12(VAR_3, VAR_17, &VAR_19);
     if (VAR_16)
  FUNC_9(VAR_3, 1, VAR_16, "krb5_generate_random_keyblock");

 } else {
     if(VAR_9 != -1) {
  ssize_t VAR_21;
  VAR_21 = FUNC_21(VAR_9, VAR_15, sizeof(VAR_15));
  if(VAR_21 <= 0)
      FUNC_9(VAR_3, 1, VAR_6, "failed to read passphrase");
  VAR_15[VAR_21] = '\0';
  VAR_15[FUNC_23(VAR_15, "\r\n")] = '\0';

     } else {
  if(FUNC_0(VAR_15, sizeof(VAR_15), "Master key: ", 1))
      FUNC_2(1);
     }
     FUNC_16(VAR_3, VAR_17, VAR_15, VAR_20, &VAR_19);
 }
 VAR_16 = FUNC_4(VAR_3, &VAR_19, &VAR_18);

 FUNC_11(VAR_3, &VAR_19);

    }

    {
 char *VAR_22, *VAR_23;
 FUNC_1(&VAR_23, "%s.old", VAR_8);
 FUNC_1(&VAR_22, "%s.new", VAR_8);
 if(FUNC_24(VAR_22) < 0 && VAR_6 != VAR_0) {
     VAR_16 = VAR_6;
     goto out;
 }
 FUNC_18(VAR_3, "writing key to `%s'", VAR_8);
 VAR_16 = FUNC_8(VAR_3, VAR_22, VAR_18);
 if(VAR_16)
     FUNC_24(VAR_22);
 else {

     FUNC_24(VAR_23);
     if(FUNC_19(VAR_8, VAR_23) < 0 && VAR_6 != VAR_0) {
  VAR_16 = VAR_6;
  FUNC_24(VAR_22);
     } else {

  if(FUNC_22(VAR_22, VAR_8) < 0) {
      VAR_16 = VAR_6;
  }

     }

 }
    out:
 FUNC_3(VAR_23);
 FUNC_3(VAR_22);
 if(VAR_16)
     FUNC_17(VAR_3, VAR_6, "writing master key file");
    }

    FUNC_6(VAR_3, VAR_18);

    FUNC_2(VAR_16 != 0);
}
