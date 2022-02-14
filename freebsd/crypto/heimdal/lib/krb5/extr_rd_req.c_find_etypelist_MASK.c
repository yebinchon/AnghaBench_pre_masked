
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_16__ {unsigned int len; TYPE_3__* val; } ;
typedef TYPE_4__ krb5_authdata ;
typedef TYPE_5__* krb5_auth_context ;
typedef int adIfRelevant ;
struct TYPE_18__ {int * val; scalar_t__ len; } ;
struct TYPE_17__ {TYPE_1__* authenticator; } ;
struct TYPE_14__ {int length; int data; } ;
struct TYPE_15__ {scalar_t__ ad_type; TYPE_2__ ad_data; } ;
struct TYPE_13__ {TYPE_4__* authorization_data; } ;
typedef TYPE_6__ EtypeList ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_4__*,int *) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_6__*,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;

__attribute__((used)) static krb5_error_code
FUNC_5(krb5_context VAR_2,
        krb5_auth_context VAR_3,
        EtypeList *VAR_4)
{
    krb5_error_code VAR_5;
    krb5_authdata *VAR_6;
    krb5_authdata VAR_7;
    unsigned VAR_8;

    FUNC_4(&VAR_7, 0, sizeof(VAR_7));

    VAR_4->len = 0;
    VAR_4->val = ((void*)0);

    VAR_6 = VAR_3->authenticator->authorization_data;
    if (VAR_6 == ((void*)0))
 return 0;

    for (VAR_8 = 0; VAR_8 < VAR_6->len; VAR_8++) {
 if (VAR_6->val[VAR_8].ad_type == VAR_1) {
     VAR_5 = FUNC_0(VAR_6->val[VAR_8].ad_data.data,
     VAR_6->val[VAR_8].ad_data.length,
     &VAR_7,
     ((void*)0));
     if (VAR_5)
  return VAR_5;

     if (VAR_7.len == 1 &&
  VAR_7.val[0].ad_type ==
   VAR_0) {
  break;
     }
     FUNC_2(&VAR_7);
     VAR_7.len = 0;
 }
    }

    if (VAR_7.len == 0)
 return 0;

    VAR_5 = FUNC_1(VAR_7.val[0].ad_data.data,
      VAR_7.val[0].ad_data.length,
      VAR_4,
      ((void*)0));
    if (VAR_5)
 FUNC_3(VAR_2);

    FUNC_2(&VAR_7);

    return VAR_5;
}
