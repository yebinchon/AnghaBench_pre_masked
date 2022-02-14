
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int len; int ** val; } ;
struct TYPE_6__ {TYPE_1__ name_string; } ;
struct TYPE_7__ {int cusec; int ctime; TYPE_2__ cname; int * crealm; } ;
typedef int EVP_MD_CTX ;
typedef TYPE_3__ Authenticator ;


 int FUNC_0 (int *,void*,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(Authenticator *VAR_0, void *VAR_1)
{
    EVP_MD_CTX *VAR_2 = FUNC_3();
    unsigned VAR_3;

    FUNC_1(VAR_2, FUNC_5(), ((void*)0));

    FUNC_2(VAR_2, VAR_0->crealm, FUNC_6(VAR_0->crealm));
    for(VAR_3 = 0; VAR_3 < VAR_0->cname.name_string.len; VAR_3++)
 FUNC_2(VAR_2, VAR_0->cname.name_string.val[VAR_3],
     FUNC_6(VAR_0->cname.name_string.val[VAR_3]));
    FUNC_2(VAR_2, &VAR_0->ctime, sizeof(VAR_0->ctime));
    FUNC_2(VAR_2, &VAR_0->cusec, sizeof(VAR_0->cusec));

    FUNC_0(VAR_2, VAR_1, ((void*)0));
    FUNC_4(VAR_2);
}
