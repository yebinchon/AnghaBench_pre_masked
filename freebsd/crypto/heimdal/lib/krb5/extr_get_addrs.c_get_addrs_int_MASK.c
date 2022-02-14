
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_9__ {scalar_t__ len; int * val; } ;
typedef TYPE_1__ krb5_addresses ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*) ;

__attribute__((used)) static krb5_error_code
FUNC_6 (krb5_context VAR_2, krb5_addresses *VAR_3, int VAR_4)
{
    krb5_error_code VAR_5 = -1;

    VAR_3->len = 0;
    VAR_3->val = ((void*)0);

    if (VAR_4 & VAR_1) {
 VAR_5 = FUNC_0 (VAR_2, VAR_3, VAR_4);
 if(VAR_5 || VAR_3->len == 0)
     VAR_5 = FUNC_2 (VAR_2, VAR_3);
    } else {
 VAR_5 = 0;
    }

    if(VAR_5 == 0 && (VAR_4 & VAR_0)) {
 krb5_addresses VAR_6;

 VAR_5 = FUNC_5(VAR_2, &VAR_6);
 if(VAR_5) {
     FUNC_4(VAR_2, VAR_3);
     return VAR_5;
 }
 VAR_5 = FUNC_3(VAR_2, VAR_3, &VAR_6);
 if(VAR_5) {
     FUNC_4(VAR_2, VAR_3);
     return VAR_5;
 }
 FUNC_4(VAR_2, &VAR_6);
    }
    if(VAR_3->len == 0) {
 FUNC_1(VAR_3->val);
 VAR_3->val = ((void*)0);
    }
    return VAR_5;
}
