
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int krb5_salt ;
typedef int krb5_principal ;
typedef int krb5_keyblock ;
typedef scalar_t__ (* krb5_key_proc ) (TYPE_1__*,scalar_t__,int ,int ,int **) ;
typedef scalar_t__ krb5_error_code ;
typedef scalar_t__ krb5_enctype ;
typedef TYPE_1__* krb5_context ;
typedef int krb5_const_pointer ;
struct TYPE_14__ {unsigned int len; int * val; } ;
struct TYPE_13__ {scalar_t__* etypes; } ;
typedef int PA_DATA ;
typedef TYPE_3__ METHOD_DATA ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int *) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *,scalar_t__,int *) ;
 int * FUNC_6 (int *,unsigned int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,scalar_t__,int ,int ,int **) ;

__attribute__((used)) static krb5_error_code
FUNC_8(krb5_context VAR_2,
    METHOD_DATA *VAR_3,
    krb5_principal VAR_4,
    krb5_key_proc VAR_5,
    krb5_const_pointer VAR_6,
    krb5_enctype *VAR_7,
    unsigned VAR_8,
    krb5_salt *VAR_9)
{
    krb5_error_code VAR_10;
    PA_DATA *VAR_11;
    krb5_salt VAR_12;
    krb5_enctype *VAR_13;
    size_t VAR_14;

    if(VAR_9 == ((void*)0)) {

 VAR_10 = FUNC_3 (VAR_2, VAR_4, &VAR_12);
 if (VAR_10)
     return VAR_10;
 VAR_9 = &VAR_12;
    }
    if (!VAR_7) {
 VAR_7 = VAR_2->etypes;
 VAR_8 = 0;
 for (VAR_13 = VAR_7; *VAR_13 != VAR_1; VAR_13++)
     VAR_8++;
    }
    VAR_11 = FUNC_6 (VAR_3->val, (VAR_3->len + VAR_8) * sizeof(*VAR_3->val));
    if (VAR_11 == ((void*)0)) {
 FUNC_4(VAR_2, VAR_0, FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }
    VAR_3->val = VAR_11;

    for (VAR_14 = 0; VAR_14 < VAR_8; ++VAR_14) {
 krb5_keyblock *VAR_15;

 VAR_10 = (*VAR_5)(VAR_2, VAR_7[VAR_14], *VAR_9, VAR_6, &VAR_15);
 if (VAR_10)
     continue;
 VAR_10 = FUNC_5 (VAR_2, &VAR_3->val[VAR_3->len],
         VAR_7[VAR_14], VAR_15);
 FUNC_1 (VAR_2, VAR_15);
 if (VAR_10)
     return VAR_10;
 ++VAR_3->len;
    }
    if(VAR_9 == &VAR_12)
 FUNC_2(VAR_2, VAR_12);
    return 0;
}
