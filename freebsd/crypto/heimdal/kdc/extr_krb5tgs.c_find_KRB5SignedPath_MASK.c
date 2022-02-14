
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;
struct TYPE_9__ {int length; int data; } ;
struct TYPE_8__ {int len; TYPE_1__* val; } ;
struct TYPE_7__ {scalar_t__ ad_type; TYPE_5__ ad_data; } ;
typedef TYPE_2__ AuthorizationData ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_2__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,scalar_t__,char*,scalar_t__) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_3,
      const AuthorizationData *VAR_4,
      krb5_data *VAR_5)
{
    AuthorizationData VAR_6;
    krb5_error_code VAR_7;
    int VAR_8;

    if (VAR_4 == ((void*)0) || VAR_4->len == 0)
 return VAR_0;

    VAR_8 = VAR_4->len - 1;

    if (VAR_4->val[VAR_8].ad_type != VAR_1)
 return VAR_0;

    VAR_7 = FUNC_0(VAR_4->val[VAR_8].ad_data.data,
       VAR_4->val[VAR_8].ad_data.length,
       &VAR_6,
       ((void*)0));
    if (VAR_7) {
 FUNC_3(VAR_3, VAR_7, "Failed to decode "
          "IF_RELEVANT with %d", VAR_7);
 return VAR_7;
    }

    if (VAR_6.len != 1) {
 FUNC_2(&VAR_6);
 return VAR_0;
    }

    if (VAR_6.val[0].ad_type != VAR_2) {
 FUNC_2(&VAR_6);
 return VAR_0;
    }

    if (VAR_5)
 VAR_7 = FUNC_1(&VAR_6.val[0].ad_data, VAR_5);
    FUNC_2(&VAR_6);
    return VAR_7;
}
