
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct init_options {scalar_t__ bare_flag; int * realm_max_renewable_life_string; int * realm_max_ticket_life_string; } ;
typedef int krb5_principal ;
typedef int krb5_deltat ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_8__ {int max_life; int max_renewable_life; int principal; int attributes; } ;
typedef TYPE_1__ kadm5_principal_ent_rec ;
typedef int ent ;
struct TYPE_9__ {int (* hdb_close ) (int ,TYPE_2__*) ;scalar_t__ (* hdb_open ) (int ,TYPE_2__*,int,int) ;} ;
typedef TYPE_2__ HDB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_2__* FUNC_0 (int ) ;
 int VAR_16 ;
 int FUNC_1 (int ,int,int,int) ;
 scalar_t__ FUNC_2 (char*,int*,int *,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int,char*) ;
 int VAR_17 ;
 int FUNC_4 (int ,int,scalar_t__,char*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int *,char const*,char*,char const*,...) ;
 int FUNC_7 (int ,scalar_t__,char*) ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_18 ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_10 (int *,int*) ;
 scalar_t__ FUNC_11 (int ,TYPE_2__*,int,int) ;
 int FUNC_12 (int ,TYPE_2__*) ;

int
FUNC_13(struct init_options *VAR_19, int VAR_20, char **VAR_21)
{
    kadm5_ret_t VAR_22;
    int VAR_23;
    HDB *VAR_24;
    krb5_deltat VAR_25 = 0, VAR_26 = 0;

    if (!VAR_18) {
 FUNC_8(VAR_16, "init is only available in local (-l) mode");
 return 0;
    }

    if (VAR_19->realm_max_ticket_life_string) {
 if (FUNC_10 (VAR_19->realm_max_ticket_life_string, &VAR_25) != 0) {
     FUNC_8 (VAR_16, "unable to parse \"%s\"",
   VAR_19->realm_max_ticket_life_string);
     return 0;
 }
    }
    if (VAR_19->realm_max_renewable_life_string) {
 if (FUNC_10 (VAR_19->realm_max_renewable_life_string, &VAR_26) != 0) {
     FUNC_8 (VAR_16, "unable to parse \"%s\"",
   VAR_19->realm_max_renewable_life_string);
     return 0;
 }
    }

    VAR_24 = FUNC_0(VAR_17);

    VAR_22 = VAR_24->hdb_open(VAR_16, VAR_24, VAR_15 | VAR_14, 0600);
    if(VAR_22){
 FUNC_7(VAR_16, VAR_22, "hdb_open");
 return 0;
    }
    VAR_24->hdb_close(VAR_16, VAR_24);
    for(VAR_23 = 0; VAR_23 < VAR_20; VAR_23++){
 krb5_principal VAR_27;
 const char *VAR_28 = VAR_21[VAR_23];

 if (VAR_19->realm_max_ticket_life_string == ((void*)0)) {
     VAR_25 = 0;
     if(FUNC_2 ("Realm max ticket life", &VAR_25, ((void*)0), 0)) {
  return 0;
     }
 }
 if (VAR_19->realm_max_renewable_life_string == ((void*)0)) {
     VAR_26 = 0;
     if(FUNC_2("Realm max renewable ticket life", &VAR_26,
      ((void*)0), 0)) {
  return 0;
     }
 }


 VAR_22 = FUNC_6(VAR_16, &VAR_27, VAR_28,
      VAR_12, VAR_28, ((void*)0));
 if(VAR_22)
     return 0;

 FUNC_1(VAR_27, VAR_25, VAR_26, 0);
 FUNC_5(VAR_16, VAR_27);

 if (VAR_19->bare_flag)
     continue;


 FUNC_6(VAR_16, &VAR_27, VAR_28,
       "kadmin", "changepw", ((void*)0));






 FUNC_1(VAR_27, 5*60, 5*60,
       VAR_9|
       VAR_10|
       VAR_6|
       VAR_8|
       VAR_7|
       VAR_11);
 FUNC_5(VAR_16, VAR_27);


 FUNC_6(VAR_16, &VAR_27, VAR_28,
       "kadmin", "admin", ((void*)0));
 FUNC_1(VAR_27, 60*60, 60*60, VAR_11);
 FUNC_5(VAR_16, VAR_27);


 FUNC_6(VAR_16, &VAR_27, VAR_28,
       "changepw", "kerberos", ((void*)0));
 FUNC_1(VAR_27, 60*60, 60*60,
       VAR_9|
       VAR_10);

 FUNC_5(VAR_16, VAR_27);


 FUNC_6(VAR_16, &VAR_27, VAR_28,
       "kadmin", "hprop", ((void*)0));
 FUNC_1(VAR_27, 60*60, 60*60,
       VAR_11|
       VAR_9);
 FUNC_5(VAR_16, VAR_27);


 FUNC_6(VAR_16, &VAR_27, VAR_28,
       VAR_13, VAR_4, ((void*)0));
 FUNC_1(VAR_27, 60*60, 60*60,
       VAR_11);
 FUNC_5(VAR_16, VAR_27);



 {
     kadm5_principal_ent_rec VAR_29;
     int VAR_30 = 0;

     FUNC_9 (&VAR_29, 0, sizeof(VAR_29));
     VAR_30 |= VAR_3;
     FUNC_6(VAR_16, &VAR_29.principal, VAR_28,
    "default", ((void*)0));
     VAR_30 |= VAR_1;
     VAR_29.max_life = 24 * 60 * 60;
     VAR_30 |= VAR_2;
     VAR_29.max_renewable_life = 7 * VAR_29.max_life;
     VAR_29.attributes = VAR_5;
     VAR_30 |= VAR_0;

     VAR_22 = FUNC_3(VAR_17, &VAR_29, VAR_30, "");
     if (VAR_22)
  FUNC_4 (VAR_16, 1, VAR_22, "kadm5_create_principal");

     FUNC_5(VAR_16, VAR_29.principal);
 }
    }
    return 0;
}
