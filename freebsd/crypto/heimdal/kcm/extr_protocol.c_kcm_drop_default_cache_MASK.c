
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcm_default_cache {struct kcm_default_cache* name; struct kcm_default_cache* next; int session; int uid; } ;
typedef int krb5_context ;
typedef int kcm_client ;


 struct kcm_default_cache* VAR_0 ;
 int FUNC_0 (struct kcm_default_cache*) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (struct kcm_default_cache*,char*) ;

__attribute__((used)) static void
FUNC_3(krb5_context VAR_1, kcm_client *VAR_2, char *VAR_3)
{
    struct kcm_default_cache **VAR_4;

    for (VAR_4 = &VAR_0; *VAR_4 != ((void*)0); VAR_4 = &(*VAR_4)->next) {
 if (!FUNC_1(VAR_2, (*VAR_4)->uid, (*VAR_4)->session))
     continue;
 if (FUNC_2((*VAR_4)->name, VAR_3) == 0) {
     struct kcm_default_cache *VAR_5 = *VAR_4;
     *VAR_4 = (*VAR_4)->next;
     FUNC_0(VAR_5->name);
     FUNC_0(VAR_5);
     break;
 }
    }
}
