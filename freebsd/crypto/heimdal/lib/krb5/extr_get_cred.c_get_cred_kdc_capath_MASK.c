
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int krb5_principal ;
typedef int krb5_kdc_flags ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_8__ {int server; int client; } ;
typedef TYPE_1__ krb5_creds ;
typedef int krb5_context ;
typedef int * krb5_const_realm ;
typedef int krb5_ccache ;
typedef int Ticket ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,TYPE_1__*,int *,int ,int *,TYPE_1__**,TYPE_1__***) ;
 int * FUNC_1 (int ,int *,char*,int *,int *,int *) ;
 int * FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_1,
      krb5_kdc_flags VAR_2,
      krb5_ccache VAR_3,
      krb5_creds *VAR_4,
      krb5_principal VAR_5,
      Ticket *VAR_6,
      krb5_creds **VAR_7,
      krb5_creds ***VAR_8)
{
    krb5_error_code VAR_9;
    krb5_const_realm VAR_10, VAR_11, VAR_12;

    VAR_10 = FUNC_2(VAR_1, VAR_4->client);
    VAR_11 = FUNC_2(VAR_1, VAR_4->server);

    VAR_12 = VAR_10;
    VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_12,
                                     VAR_5, VAR_6, VAR_7,
                                     VAR_8);

    if (VAR_9 == VAR_0) {
        VAR_12 = FUNC_1(VAR_1, ((void*)0), "capaths",
                                           VAR_10, VAR_11, ((void*)0));

        if (VAR_12 != ((void*)0) && FUNC_3(VAR_12, VAR_10)) {
            VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
                                             VAR_12, VAR_5,
                                             VAR_6, VAR_7, VAR_8);
        }
    }

    return VAR_9;
}
