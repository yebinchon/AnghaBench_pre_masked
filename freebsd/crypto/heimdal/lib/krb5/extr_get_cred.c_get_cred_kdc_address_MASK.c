
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int krb5_principal ;
typedef int krb5_kdc_flags ;
typedef int krb5_error_code ;
struct TYPE_15__ {scalar_t__ len; } ;
struct TYPE_17__ {TYPE_2__* server; TYPE_1__ addresses; } ;
typedef TYPE_3__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int krb5_boolean ;
struct TYPE_18__ {scalar_t__ len; int * member_1; int member_0; } ;
typedef TYPE_4__ krb5_addresses ;
typedef int Ticket ;
struct TYPE_16__ {int realm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,TYPE_4__*,TYPE_3__*,TYPE_3__*,int ,int *,TYPE_3__*) ;
 int FUNC_1 (int ,int *,int ,char*,int ,int *) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (int ,TYPE_4__*) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_1,
       krb5_ccache VAR_2,
       krb5_kdc_flags VAR_3,
       krb5_addresses *VAR_4,
       krb5_creds *VAR_5,
       krb5_creds *VAR_6,
       krb5_principal VAR_7,
       Ticket *VAR_8,
       krb5_creds *VAR_9)
{
    krb5_error_code VAR_10;
    krb5_addresses VAR_11 = { 0, ((void*)0) };






    if (VAR_4 == ((void*)0) && VAR_6->addresses.len != 0) {
 krb5_boolean VAR_12;

 FUNC_1(VAR_1, ((void*)0), VAR_6->server->realm,
    "no-addresses", VAR_0, &VAR_12);

 if (!VAR_12) {
     FUNC_3(VAR_1, &VAR_11);

     VAR_4 = &VAR_11;
     if(VAR_11.len == 0)
  VAR_4 = ((void*)0);
 }
    }
    VAR_10 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7,
         VAR_8, VAR_9);
    FUNC_2(VAR_1, &VAR_11);
    return VAR_10;
}
