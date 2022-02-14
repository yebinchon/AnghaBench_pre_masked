
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _krb5_key_type {int (* schedule ) (int ,struct _krb5_key_type*,struct _krb5_key_data*) ;int schedule_size; } ;
struct _krb5_key_data {int * schedule; TYPE_1__* key; } ;
struct _krb5_encryption_type {struct _krb5_key_type* keytype; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_2__ {int keytype; } ;


 int FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char*) ;
 struct _krb5_encryption_type* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int ,struct _krb5_key_type*,struct _krb5_key_data*) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_8(krb5_context VAR_1,
       struct _krb5_key_data *VAR_2)
{
    krb5_error_code VAR_3;
    struct _krb5_encryption_type *VAR_4 = FUNC_2(VAR_2->key->keytype);
    struct _krb5_key_type *VAR_5;

    if (VAR_4 == ((void*)0)) {
        return FUNC_7 (VAR_1,
                               VAR_2->key->keytype);
    }

    VAR_5 = VAR_4->keytype;

    if(VAR_5->schedule == ((void*)0))
 return 0;
    if (VAR_2->schedule != ((void*)0))
 return 0;
    FUNC_0(VAR_2->schedule, 1);
    if(VAR_2->schedule == ((void*)0)) {
 FUNC_5(VAR_1, VAR_0, FUNC_1("malloc: out of memory", ""));
 return VAR_0;
    }
    VAR_3 = FUNC_4(VAR_2->schedule, VAR_5->schedule_size);
    if(VAR_3) {
 FUNC_3(VAR_2->schedule);
 VAR_2->schedule = ((void*)0);
 return VAR_3;
    }
    (*VAR_5->schedule)(VAR_1, VAR_5, VAR_2);
    return 0;
}
