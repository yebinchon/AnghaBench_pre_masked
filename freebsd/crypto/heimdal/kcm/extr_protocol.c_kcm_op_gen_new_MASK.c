
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_storage ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_operation ;
struct TYPE_4__ {int gid; int uid; int pid; } ;
typedef TYPE_1__ kcm_client ;


 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_1,
        kcm_client *VAR_2,
        kcm_operation VAR_3,
        krb5_storage *VAR_4,
        krb5_storage *VAR_5)
{
    krb5_error_code VAR_6;
    char *VAR_7;

    FUNC_0(VAR_1, VAR_2, VAR_3);

    VAR_7 = FUNC_2(VAR_2->pid, VAR_2->uid, VAR_2->gid);
    if (VAR_7 == ((void*)0)) {
 return VAR_0;
    }

    VAR_6 = FUNC_3(VAR_5, VAR_7);
    FUNC_1(VAR_7);

    return VAR_6;
}
