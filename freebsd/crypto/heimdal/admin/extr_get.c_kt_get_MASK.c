
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int num_strings; char** strings; } ;
struct get_options {char* realm_string; int server_port_integer; int admin_server_string; int principal_string; TYPE_1__ enctypes_strings; } ;
typedef int princ ;
typedef void* krb5_principal ;
struct TYPE_15__ {scalar_t__ keytype; } ;
struct TYPE_14__ {int vno; int timestamp; TYPE_3__ keyblock; void* principal; } ;
typedef TYPE_2__ krb5_keytab_entry ;
typedef int * krb5_keytab ;
typedef TYPE_3__ krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef scalar_t__ krb5_enctype ;
struct TYPE_16__ {int attributes; int kvno; scalar_t__ princ_expire_time; void* principal; } ;
typedef TYPE_4__ kadm5_principal_ent_rec ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (void*,TYPE_4__*,int,char*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (void*,void*,TYPE_4__*,int) ;
 scalar_t__ FUNC_5 (void*,TYPE_4__*,int) ;
 scalar_t__ FUNC_6 (void*,void*,TYPE_3__**,int*) ;
 int FUNC_7 (int ,TYPE_3__*) ;
 int FUNC_8 (int ,void*) ;
 scalar_t__ FUNC_9 (int ,int *,TYPE_2__*) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,char*,void**) ;
 char* FUNC_12 (int ,void*) ;
 int FUNC_13 (int ,char*) ;
 scalar_t__ FUNC_14 (int ,char*,scalar_t__*) ;
 int FUNC_15 (int ,scalar_t__,char*,...) ;
 int FUNC_16 (int ,char*,...) ;
 int * FUNC_17 () ;
 scalar_t__* FUNC_18 (int) ;
 int FUNC_19 (TYPE_4__*,int ,int) ;
 void* FUNC_20 (int ,char const*,int ,int ) ;
 int FUNC_21 (int *) ;

int
FUNC_22(struct get_options *VAR_9, int VAR_10, char **VAR_11)
{
    krb5_error_code VAR_12 = 0;
    krb5_keytab VAR_13;
    void *VAR_14 = ((void*)0);
    krb5_enctype *VAR_15 = ((void*)0);
    size_t VAR_16 = 0;
    size_t VAR_17;
    int VAR_18, VAR_19;
    unsigned int VAR_20 = 0;

    if((VAR_13 = FUNC_17()) == ((void*)0))
 return 1;

    if(VAR_9->realm_string)
 FUNC_13(VAR_8, VAR_9->realm_string);

    if (VAR_9->enctypes_strings.num_strings != 0) {

 VAR_15 = FUNC_18 (VAR_9->enctypes_strings.num_strings * sizeof(*VAR_15));
 if (VAR_15 == ((void*)0)) {
     FUNC_16(VAR_8, "malloc failed");
     goto out;
 }
 VAR_16 = VAR_9->enctypes_strings.num_strings;
 for(VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
     VAR_12 = FUNC_14(VAR_8,
      VAR_9->enctypes_strings.strings[VAR_17],
      &VAR_15[VAR_17]);
     if(VAR_12) {
  FUNC_16(VAR_8, "unrecognized enctype: %s",
      VAR_9->enctypes_strings.strings[VAR_17]);
  goto out;
     }
 }
    }


    for(VAR_18 = 0; VAR_18 < VAR_10; VAR_18++){
 krb5_principal VAR_21;
 kadm5_principal_ent_rec VAR_22;
 int VAR_23 = 0;
 krb5_keyblock *VAR_24;
 int VAR_25;
 int VAR_26 = 0;
 krb5_keytab_entry VAR_27;

 VAR_12 = FUNC_11(VAR_8, VAR_11[VAR_18], &VAR_21);
 if (VAR_12) {
     FUNC_15(VAR_8, VAR_12, "can't parse principal %s", VAR_11[VAR_18]);
     VAR_20++;
     continue;
 }
 FUNC_19(&VAR_22, 0, sizeof(VAR_22));
 VAR_22.principal = VAR_21;
 VAR_23 |= VAR_4;
 VAR_22.attributes |= VAR_6;
 VAR_23 |= VAR_1;
 VAR_22.princ_expire_time = 0;
 VAR_23 |= VAR_5;

 if(VAR_14 == ((void*)0)) {
     const char *VAR_28;
     if(VAR_9->realm_string != ((void*)0))
  VAR_28 = VAR_9->realm_string;
     else
  VAR_28 = FUNC_12(VAR_8, VAR_21);
     VAR_14 = FUNC_20(VAR_9->principal_string,
       VAR_28,
       VAR_9->admin_server_string,
       VAR_9->server_port_integer);
     if(VAR_14 == ((void*)0))
  break;
 }

 VAR_12 = FUNC_1(VAR_14, &VAR_22, VAR_23, "x");
 if(VAR_12 == 0)
     VAR_26 = 1;
 else if(VAR_12 != VAR_2) {
     FUNC_15(VAR_8, VAR_12, "kadm5_create_principal(%s)", VAR_11[VAR_18]);
     FUNC_8(VAR_8, VAR_21);
     VAR_20++;
     continue;
 }
 VAR_12 = FUNC_6(VAR_14, VAR_21, &VAR_24, &VAR_25);
 if (VAR_12) {
     FUNC_15(VAR_8, VAR_12, "kadm5_randkey_principal(%s)", VAR_11[VAR_18]);
     FUNC_8(VAR_8, VAR_21);
     VAR_20++;
     continue;
 }

 VAR_12 = FUNC_4(VAR_14, VAR_21, &VAR_22,
         VAR_4 | VAR_3 | VAR_1);
 if (VAR_12) {
     FUNC_15(VAR_8, VAR_12, "kadm5_get_principal(%s)", VAR_11[VAR_18]);
     for (VAR_19 = 0; VAR_19 < VAR_25; VAR_19++)
  FUNC_7(VAR_8, &VAR_24[VAR_19]);
     FUNC_8(VAR_8, VAR_21);
     VAR_20++;
     continue;
 }
 if(!VAR_26 && (VAR_22.attributes & VAR_6))
     FUNC_16(VAR_8, "%s: disallow-all-tix flag set - clearing", VAR_11[VAR_18]);
 VAR_22.attributes &= (~VAR_6);
 VAR_23 = VAR_1;
 if(VAR_26) {
     VAR_22.kvno = 1;
     VAR_23 |= VAR_3;
 }
 VAR_12 = FUNC_5(VAR_14, &VAR_22, VAR_23);
 if (VAR_12) {
     FUNC_15(VAR_8, VAR_12, "kadm5_modify_principal(%s)", VAR_11[VAR_18]);
     for (VAR_19 = 0; VAR_19 < VAR_25; VAR_19++)
  FUNC_7(VAR_8, &VAR_24[VAR_19]);
     FUNC_8(VAR_8, VAR_21);
     VAR_20++;
     continue;
 }
 for(VAR_19 = 0; VAR_19 < VAR_25; VAR_19++) {
     int VAR_29 = VAR_7;

     if (VAR_16) {
  size_t VAR_30;

  VAR_29 = VAR_0;
  for (VAR_30 = 0; VAR_30 < VAR_16; ++VAR_30)
      if (VAR_24[VAR_19].keytype == VAR_15[VAR_30]) {
   VAR_29 = VAR_7;
   break;
      }
     }
     if (VAR_29) {
  VAR_27.principal = VAR_21;
  VAR_27.vno = VAR_22.kvno;
  VAR_27.keyblock = VAR_24[VAR_19];
  VAR_27.timestamp = FUNC_21 (((void*)0));
  VAR_12 = FUNC_9(VAR_8, VAR_13, &VAR_27);
  if (VAR_12)
      FUNC_15(VAR_8, VAR_12, "krb5_kt_add_entry");
     }
     FUNC_7(VAR_8, &VAR_24[VAR_19]);
 }

 FUNC_3(VAR_14, &VAR_22);
 FUNC_8(VAR_8, VAR_21);
    }
 out:
    FUNC_0(VAR_15);
    if (VAR_14)
 FUNC_2(VAR_14);
    FUNC_10(VAR_8, VAR_13);
    return VAR_12 != 0 || VAR_20 > 0;
}
