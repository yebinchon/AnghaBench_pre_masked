
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;


typedef int tmp_creds ;
typedef int krb5_principal ;
typedef int krb5_kdc_flags ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_33__ {int ok_as_delegate; } ;
struct TYPE_34__ {TYPE_1__ b; } ;
struct TYPE_37__ {TYPE_6__* client; TYPE_6__* server; TYPE_2__ flags; } ;
typedef TYPE_5__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_const_realm ;
typedef int krb5_ccache ;
typedef int heim_general_string ;
typedef int Ticket ;
struct TYPE_35__ {int * val; } ;
struct TYPE_36__ {TYPE_3__ name_string; } ;
struct TYPE_38__ {TYPE_4__ name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ,TYPE_5__*,TYPE_5__***) ;
 TYPE_5__* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_6__*,TYPE_5__**,TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int *,TYPE_5__*,TYPE_5__*,int ,int *,TYPE_5__*) ;
 scalar_t__ FUNC_6 (int ,int ,int ,TYPE_5__*,int *,int *,TYPE_5__**,TYPE_5__***) ;
 scalar_t__ FUNC_7 (int ,TYPE_6__*,TYPE_6__**) ;
 int FUNC_8 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_9 (int ,TYPE_5__*) ;
 int FUNC_10 (int ,TYPE_6__*) ;
 scalar_t__ FUNC_11 (int ,TYPE_6__**,int ,int ,int ,int *) ;
 int FUNC_12 (int ,TYPE_6__*) ;
 scalar_t__ FUNC_13 (int ,TYPE_6__*,TYPE_6__*) ;
 int FUNC_14 (int ,scalar_t__,int ) ;
 int FUNC_15 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_16 (int ,TYPE_6__*,int ) ;
 scalar_t__ FUNC_17 (int ,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_18(krb5_context VAR_3,
                           krb5_kdc_flags VAR_4,
                           krb5_ccache VAR_5,
                           krb5_creds *VAR_6,
                           krb5_const_realm VAR_7,
                           krb5_principal VAR_8,
                           Ticket *VAR_9,
                           krb5_creds **VAR_10,
                           krb5_creds ***VAR_11)
{
    krb5_error_code VAR_12;
    krb5_creds *VAR_13, VAR_14;
    krb5_const_realm VAR_15, VAR_16;
    int VAR_17 = 1;

    *VAR_10 = ((void*)0);

    VAR_15 = FUNC_12(VAR_3, VAR_6->client);
    VAR_16 = FUNC_12(VAR_3, VAR_6->server);
    FUNC_15(&VAR_14, 0, sizeof(VAR_14));
    VAR_12 = FUNC_7(VAR_3, VAR_6->client, &VAR_14.client);
    if(VAR_12)
 return VAR_12;

    VAR_12 = FUNC_11(VAR_3,
         &VAR_14.server,
         VAR_7,
         VAR_2,
         VAR_16,
         ((void*)0));
    if(VAR_12){
 FUNC_10(VAR_3, VAR_14.client);
 return VAR_12;
    }
    {
 krb5_creds VAR_18;

 VAR_12 = FUNC_3(VAR_3, VAR_5, VAR_14.server,
   *VAR_11, &VAR_18);
 if(VAR_12 == 0){

     if (FUNC_17(VAR_7, VAR_15) != 0 || FUNC_17(VAR_7, VAR_16) != 0)
  VAR_17 = VAR_18.flags.b.ok_as_delegate;

     *VAR_10 = FUNC_2(1, sizeof(**VAR_10));
     if(*VAR_10 == ((void*)0)) {
  VAR_12 = VAR_0;
  FUNC_14(VAR_3, VAR_12,
           FUNC_0("malloc: out of memory", ""));
     } else {
  VAR_12 = FUNC_5(VAR_3, VAR_5, VAR_4, ((void*)0),
        VAR_6, &VAR_18,
        VAR_8,
        VAR_9,
        *VAR_10);
  if (VAR_12) {
      FUNC_4 (*VAR_10);
      *VAR_10 = ((void*)0);
  } else if (VAR_17 == 0)
      (*VAR_10)->flags.b.ok_as_delegate = 0;
     }
     FUNC_8(VAR_3, &VAR_18);
     FUNC_10(VAR_3, VAR_14.server);
     FUNC_10(VAR_3, VAR_14.client);
     return VAR_12;
 }
    }
    if(FUNC_13(VAR_3, VAR_6->client, VAR_6->server))
 return FUNC_16(VAR_3, VAR_6->server, VAR_1);


    while(1){
 heim_general_string VAR_19;

 VAR_12 = FUNC_6(VAR_3, VAR_4, VAR_5, &VAR_14,
      ((void*)0), ((void*)0), &VAR_13, VAR_11);
 if(VAR_12) {
     FUNC_10(VAR_3, VAR_14.server);
     FUNC_10(VAR_3, VAR_14.client);
     return VAR_12;
 }




 if (VAR_17 == 0 || VAR_13->flags.b.ok_as_delegate == 0) {
     VAR_17 = 0;
     VAR_13->flags.b.ok_as_delegate = 0;
 }

 VAR_12 = FUNC_1(VAR_3, VAR_13, VAR_11);
 if(VAR_12) {
     FUNC_10(VAR_3, VAR_14.server);
     FUNC_10(VAR_3, VAR_14.client);
     return VAR_12;
 }
 VAR_19 = VAR_13->server->name.name_string.val[1];
 if(FUNC_17(VAR_19, VAR_16) == 0)
     break;
 FUNC_10(VAR_3, VAR_14.server);
 VAR_14.server = ((void*)0);
 VAR_12 = FUNC_11(VAR_3, &VAR_14.server,
      VAR_19, VAR_2, VAR_16, ((void*)0));
 if(VAR_12) {
     FUNC_10(VAR_3, VAR_14.server);
     FUNC_10(VAR_3, VAR_14.client);
     return VAR_12;
 }
 VAR_12 = FUNC_9(VAR_3, VAR_13);
 if(VAR_12) {
     FUNC_10(VAR_3, VAR_14.server);
     FUNC_10(VAR_3, VAR_14.client);
     return VAR_12;
 }
    }

    FUNC_10(VAR_3, VAR_14.server);
    FUNC_10(VAR_3, VAR_14.client);
    *VAR_10 = FUNC_2(1, sizeof(**VAR_10));
    if(*VAR_10 == ((void*)0)) {
 VAR_12 = VAR_0;
 FUNC_14(VAR_3, VAR_12, FUNC_0("malloc: out of memory", ""));
    } else {
 VAR_12 = FUNC_5 (VAR_3, VAR_5, VAR_4, ((void*)0),
        VAR_6, VAR_13, VAR_8,
        VAR_9, *VAR_10);
 if (VAR_12) {
     FUNC_4 (*VAR_10);
     *VAR_10 = ((void*)0);
 }
    }
    FUNC_9(VAR_3, VAR_13);
    return VAR_12;
}
