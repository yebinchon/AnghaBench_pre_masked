
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_17__ {scalar_t__ num_strings; } ;
struct TYPE_15__ {scalar_t__ num_strings; } ;
struct TYPE_14__ {scalar_t__ num_strings; } ;
struct modify_options {int kvno_integer; TYPE_9__ pkinit_acl_strings; TYPE_13__ alias_strings; TYPE_11__ constrained_delegation_strings; scalar_t__ attributes_string; scalar_t__ pw_expiration_time_string; scalar_t__ expiration_time_string; scalar_t__ max_renewable_life_string; scalar_t__ max_ticket_life_string; } ;
typedef int princ ;
typedef int krb5_principal ;
typedef int krb5_error_code ;
struct TYPE_16__ {int kvno; } ;
typedef TYPE_1__ kadm5_principal_ent_rec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,TYPE_1__*,TYPE_13__*) ;
 int FUNC_1 (int ,TYPE_1__*,TYPE_11__*) ;
 int FUNC_2 (int ,TYPE_1__*,TYPE_9__*) ;
 int VAR_8 ;
 int FUNC_3 (TYPE_1__*,int*,int *,int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,int ,TYPE_1__*,int) ;
 int FUNC_6 (int ,TYPE_1__*,int) ;
 int VAR_9 ;
 int FUNC_7 (int ,int,char*) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (int ,TYPE_1__*,int*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_10(krb5_principal VAR_10, void *VAR_11)
{
    krb5_error_code VAR_12;
    kadm5_principal_ent_rec VAR_13;
    int VAR_14 = 0;
    struct modify_options *VAR_15 = VAR_11;

    FUNC_8 (&VAR_13, 0, sizeof(VAR_13));
    VAR_12 = FUNC_5(VAR_9, VAR_10, &VAR_13,
         VAR_4 | VAR_0 |
         VAR_2 | VAR_3 |
         VAR_5 |
         VAR_6);
    if(VAR_12)
 return VAR_12;

    if(VAR_15->max_ticket_life_string ||
       VAR_15->max_renewable_life_string ||
       VAR_15->expiration_time_string ||
       VAR_15->pw_expiration_time_string ||
       VAR_15->attributes_string ||
       VAR_15->kvno_integer != -1 ||
       VAR_15->constrained_delegation_strings.num_strings ||
       VAR_15->alias_strings.num_strings ||
       VAR_15->pkinit_acl_strings.num_strings) {
 VAR_12 = FUNC_9(VAR_8, &VAR_13, &VAR_14,
   VAR_15->max_ticket_life_string,
   VAR_15->max_renewable_life_string,
   VAR_15->expiration_time_string,
   VAR_15->pw_expiration_time_string,
   VAR_15->attributes_string);
 if(VAR_15->kvno_integer != -1) {
     VAR_13.kvno = VAR_15->kvno_integer;
     VAR_14 |= VAR_1;
 }
 if (VAR_15->constrained_delegation_strings.num_strings) {
     FUNC_1(VAR_8, &VAR_13,
           &VAR_15->constrained_delegation_strings);
     VAR_14 |= VAR_7;
 }
 if (VAR_15->alias_strings.num_strings) {
     FUNC_0(VAR_8, &VAR_13, &VAR_15->alias_strings);
     VAR_14 |= VAR_7;
 }
 if (VAR_15->pkinit_acl_strings.num_strings) {
     FUNC_2(VAR_8, &VAR_13, &VAR_15->pkinit_acl_strings);
     VAR_14 |= VAR_7;
 }

    } else
 VAR_12 = FUNC_3(&VAR_13, &VAR_14, ((void*)0), 0);
    if(VAR_12 == 0) {
 VAR_12 = FUNC_6(VAR_9, &VAR_13, VAR_14);
 if(VAR_12)
     FUNC_7(VAR_8, VAR_12, "kadm5_modify_principal");
    }

    FUNC_4(VAR_9, &VAR_13);
    return VAR_12;
}
