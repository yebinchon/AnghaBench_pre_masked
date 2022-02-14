
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ (* krb5_prompter_fct ) (int ,void*,int *,char*,int,TYPE_1__*) ;
struct TYPE_21__ {int hidden; char* prompt; int type; TYPE_4__* reply; } ;
typedef TYPE_1__ krb5_prompt ;
typedef int krb5_principal ;
struct TYPE_22__ {int flags; int preauth_list_length; int preauth_list; } ;
typedef TYPE_3__ krb5_get_init_creds_opt ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_23__ {char* data; int length; } ;
typedef TYPE_4__ krb5_data ;
typedef char krb5_creds ;
typedef int krb5_context ;
typedef int cpw_cred ;
typedef int buf2 ;
typedef int buf1 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char**,char*,char*,int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ,TYPE_3__**) ;
 int FUNC_7 (int ,TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_3__*,int ,int ) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_3__*,int) ;
 scalar_t__ FUNC_12 (int ,char*,int ,char const*,scalar_t__ (*) (int ,void*,int *,char*,int,TYPE_1__*),void*,int ,char*,TYPE_3__*) ;
 int FUNC_13 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_14 (int ,char*,char*,int ,int*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_15 (char*,int ,int) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,char*,size_t) ;
 scalar_t__ FUNC_18 (int ,void*,int *,char*,int,TYPE_1__*) ;
 scalar_t__ FUNC_19 (int ,void*,int *,char*,int,TYPE_1__*) ;

__attribute__((used)) static krb5_error_code
FUNC_20 (krb5_context VAR_7,
   krb5_principal VAR_8,
   const char *VAR_9,
   char *VAR_10,
   size_t VAR_11,
   krb5_prompter_fct VAR_12,
   void *VAR_13,
   krb5_get_init_creds_opt *VAR_14)
{
    krb5_prompt VAR_15[2];
    krb5_error_code VAR_16;
    krb5_creds VAR_17;
    char VAR_18[VAR_0], VAR_19[VAR_0];
    krb5_data VAR_20[2];
    int VAR_21;
    krb5_data VAR_22;
    krb5_data VAR_23;
    char *VAR_24;
    krb5_get_init_creds_opt *VAR_25;

    FUNC_15 (&VAR_17, 0, sizeof(VAR_17));

    VAR_16 = FUNC_6(VAR_7, &VAR_25);
    if (VAR_16)
        return VAR_16;
    FUNC_11 (VAR_25, 60);
    FUNC_8 (VAR_25, VAR_3);
    FUNC_10 (VAR_25, VAR_3);
    if (VAR_14 && VAR_14->flags & VAR_4)
 FUNC_9 (VAR_25,
        VAR_14->preauth_list,
        VAR_14->preauth_list_length);

    FUNC_4 (&VAR_22);
    FUNC_4 (&VAR_23);

    VAR_16 = FUNC_12 (VAR_7,
     &VAR_17,
     VAR_8,
     VAR_9,
     VAR_12,
     VAR_13,
     0,
     "kadmin/changepw",
     VAR_25);
    FUNC_7(VAR_7, VAR_25);
    if (VAR_16)
 goto out;

    for(;;) {
 VAR_20[0].data = VAR_18;
 VAR_20[0].length = sizeof(VAR_18);

 VAR_15[0].hidden = 1;
 VAR_15[0].prompt = "New password: ";
 VAR_15[0].reply = &VAR_20[0];
 VAR_15[0].type = VAR_5;

 VAR_20[1].data = VAR_19;
 VAR_20[1].length = sizeof(VAR_19);

 VAR_15[1].hidden = 1;
 VAR_15[1].prompt = "Repeat new password: ";
 VAR_15[1].reply = &VAR_20[1];
 VAR_15[1].type = VAR_6;

 VAR_16 = (*VAR_12) (VAR_7, VAR_13, ((void*)0), "Changing password",
      2, VAR_15);
 if (VAR_16) {
     FUNC_15 (VAR_18, 0, sizeof(VAR_18));
     FUNC_15 (VAR_19, 0, sizeof(VAR_19));
     goto out;
 }

 if (FUNC_16 (VAR_18, VAR_19) == 0)
     break;
 FUNC_15 (VAR_18, 0, sizeof(VAR_18));
 FUNC_15 (VAR_19, 0, sizeof(VAR_19));
    }

    VAR_16 = FUNC_14 (VAR_7,
        &VAR_17,
        VAR_18,
        VAR_8,
        &VAR_21,
        &VAR_22,
        &VAR_23);
    if (VAR_16)
 goto out;
    if (FUNC_1(&VAR_24, "%s: %.*s\n",
   VAR_21 ? "Error" : "Success",
   (int)VAR_23.length,
   VAR_23.length > 0 ? (char*)VAR_23.data : "") < 0)
    {
 VAR_16 = VAR_1;
 goto out;
    }


    (*VAR_12) (VAR_7, VAR_13, ((void*)0), VAR_24, 0, ((void*)0));

    FUNC_2 (VAR_24);
    if (VAR_21 == 0) {
 FUNC_17 (VAR_10, VAR_18, VAR_11);
 VAR_16 = 0;
    } else {
 VAR_16 = VAR_2;
 FUNC_13(VAR_7, VAR_16,
          FUNC_0("failed changing password", ""));
    }

out:
    FUNC_15 (VAR_18, 0, sizeof(VAR_18));
    FUNC_15 (VAR_19, 0, sizeof(VAR_19));
    FUNC_3 (&VAR_23);
    FUNC_3 (&VAR_22);
    FUNC_5 (VAR_7, &VAR_17);
    return VAR_16;
}
