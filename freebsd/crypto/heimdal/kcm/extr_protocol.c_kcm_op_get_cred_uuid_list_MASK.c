
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct kcm_creds {int uuid; struct kcm_creds* next; } ;
typedef int ssize_t ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_operation ;
typedef int kcm_client ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_4__ {struct kcm_creds* creds; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,int ,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int *,int ,char*,TYPE_1__**) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,char**) ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_1,
     kcm_client *VAR_2,
     kcm_operation VAR_3,
     krb5_storage *VAR_4,
     krb5_storage *VAR_5)
{
    struct kcm_creds *VAR_6;
    krb5_error_code VAR_7;
    kcm_ccache VAR_8;
    char *VAR_9;

    VAR_7 = FUNC_4(VAR_4, &VAR_9);
    if (VAR_7)
 return VAR_7;

    FUNC_0(VAR_1, VAR_2, VAR_3, VAR_9);

    VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3,
        VAR_9, &VAR_8);
    FUNC_1(VAR_9);
    if (VAR_7)
 return VAR_7;

    for (VAR_6 = VAR_8->creds ; VAR_6 ; VAR_6 = VAR_6->next) {
 ssize_t VAR_10;
 VAR_10 = FUNC_5(VAR_5, &VAR_6->uuid, sizeof(VAR_6->uuid));
 if (VAR_10 != sizeof(VAR_6->uuid)) {
     VAR_7 = VAR_0;
     break;
 }
    }

    FUNC_3(VAR_1, VAR_8);

    return VAR_7;
}
