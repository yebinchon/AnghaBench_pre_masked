
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct kcm_default_cache {void* name; struct kcm_default_cache* next; int uid; int session; } ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_operation ;
struct TYPE_5__ {int uid; int session; } ;
typedef TYPE_1__ kcm_client ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int ,char*) ;
 struct kcm_default_cache* VAR_1 ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_3 (int *,char**) ;
 struct kcm_default_cache* FUNC_4 (int) ;
 void* FUNC_5 (char*) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_2,
    kcm_client *VAR_3,
    kcm_operation VAR_4,
    krb5_storage *VAR_5,
    krb5_storage *VAR_6)
{
    struct kcm_default_cache *VAR_7;
    krb5_error_code VAR_8;
    char *VAR_9;

    VAR_8 = FUNC_3(VAR_5, &VAR_9);
    if (VAR_8)
 return VAR_8;

    FUNC_0(VAR_2, VAR_3, VAR_4, VAR_9);

    for (VAR_7 = VAR_1; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
 if (FUNC_2(VAR_3, VAR_7->uid, VAR_7->session))
     break;
    }
    if (VAR_7 == ((void*)0)) {
 VAR_7 = FUNC_4(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
     return VAR_0;
 VAR_7->session = VAR_3->session;
 VAR_7->uid = VAR_3->uid;
 VAR_7->name = FUNC_5(VAR_9);

 VAR_7->next = VAR_1;
 VAR_1 = VAR_7;
    } else {
 FUNC_1(VAR_7->name);
 VAR_7->name = FUNC_5(VAR_9);
    }

    return 0;
}
