
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct kcm_default_cache {char* name; int session; int uid; struct kcm_default_cache* next; } ;
typedef int krb5_storage ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_operation ;
struct TYPE_6__ {scalar_t__ uid; } ;
typedef TYPE_1__ kcm_client ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (char**,char*,int) ;
 struct kcm_default_cache* VAR_1 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int *,char const*) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_2,
    kcm_client *VAR_3,
    kcm_operation VAR_4,
    krb5_storage *VAR_5,
    krb5_storage *VAR_6)
{
    struct kcm_default_cache *VAR_7;
    krb5_error_code VAR_8;
    const char *VAR_9 = ((void*)0);
    char *VAR_10 = ((void*)0);

    FUNC_0(VAR_2, VAR_3, VAR_4);

    for (VAR_7 = VAR_1; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
 if (FUNC_4(VAR_3, VAR_7->uid, VAR_7->session)) {
     VAR_9 = VAR_7->name;
     break;
 }
    }
    if (VAR_9 == ((void*)0))
 VAR_9 = VAR_10 = FUNC_3(VAR_3);

    if (VAR_9 == ((void*)0)) {
 FUNC_1(&VAR_10, "%d", (int)VAR_3->uid);
 VAR_9 = VAR_10;
    }
    if (VAR_9 == ((void*)0))
 return VAR_0;
    VAR_8 = FUNC_5(VAR_6, VAR_9);
    if (VAR_10)
 FUNC_2(VAR_10);
    return VAR_8;
}
