
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_11__ {int server; } ;
typedef TYPE_1__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_5(krb5_context VAR_2,
   krb5_ccache VAR_3,
   krb5_principal VAR_4,
   krb5_creds **VAR_5,
   krb5_creds *VAR_6)
{
    krb5_error_code VAR_7;
    krb5_creds VAR_8;

    FUNC_0(&VAR_8);
    VAR_8.server = VAR_4;
    VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_1,
    &VAR_8, VAR_6);
    if(VAR_7 == 0)
 return 0;
    while(VAR_5 && *VAR_5){
 if(FUNC_2(VAR_2, VAR_1,
         &VAR_8, *VAR_5)){
     VAR_7 = FUNC_3(VAR_2, *VAR_5, VAR_6);
     return VAR_7;
 }
 VAR_5++;
    }
    return FUNC_4(VAR_2, VAR_4, VAR_0);
}
