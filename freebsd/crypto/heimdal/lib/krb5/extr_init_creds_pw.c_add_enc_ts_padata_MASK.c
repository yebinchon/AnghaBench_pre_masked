
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int krb5_salt ;
typedef scalar_t__ (* krb5_s2k_proc ) (TYPE_1__*,scalar_t__,int ,int ,int *,int **) ;
typedef int krb5_principal ;
typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef scalar_t__ krb5_enctype ;
typedef int krb5_data ;
typedef TYPE_1__* krb5_context ;
typedef int krb5_const_pointer ;
struct TYPE_11__ {scalar_t__* etypes; } ;
typedef int METHOD_DATA ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,char*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,scalar_t__,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__,int ,int ,int *,int **) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_1,
    METHOD_DATA *VAR_2,
    krb5_principal VAR_3,
    krb5_s2k_proc VAR_4,
    krb5_const_pointer VAR_5,
    krb5_enctype *VAR_6,
    unsigned VAR_7,
    krb5_salt *VAR_8,
    krb5_data *VAR_9)
{
    krb5_error_code VAR_10;
    krb5_salt VAR_11;
    krb5_enctype *VAR_12;
    size_t VAR_13;

    if(VAR_8 == ((void*)0)) {

 VAR_10 = FUNC_3 (VAR_1, VAR_3, &VAR_11);
 if (VAR_10)
     return VAR_10;
 VAR_8 = &VAR_11;
    }
    if (!VAR_6) {
 VAR_6 = VAR_1->etypes;
 VAR_7 = 0;
 for (VAR_12 = VAR_6; *VAR_12 != VAR_0; VAR_12++)
     VAR_7++;
    }

    for (VAR_13 = 0; VAR_13 < VAR_7; ++VAR_13) {
 krb5_keyblock *VAR_14;

 FUNC_0(VAR_1, 5, "krb5_get_init_creds: using ENC-TS with enctype %d", VAR_6[VAR_13]);

 VAR_10 = (*VAR_4)(VAR_1, VAR_6[VAR_13], VAR_5,
    *VAR_8, VAR_9, &VAR_14);
 if (VAR_10)
     continue;
 VAR_10 = FUNC_4 (VAR_1, VAR_2, VAR_6[VAR_13], VAR_14);
 FUNC_1 (VAR_1, VAR_14);
 if (VAR_10)
     return VAR_10;
    }
    if(VAR_8 == &VAR_11)
 FUNC_2(VAR_1, VAR_11);
    return 0;
}
