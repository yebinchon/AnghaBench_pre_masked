
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* ntlm_name ;
typedef TYPE_2__* ntlm_cred ;
struct TYPE_10__ {int domain; int key; int username; } ;
struct TYPE_9__ {int domain; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__* const,int *,int *) ;
 int FUNC_3 (TYPE_1__* const,int *,int *) ;
 int FUNC_4 (int ) ;

int
FUNC_5(const ntlm_name VAR_1,
   ntlm_cred *VAR_2)
{
    ntlm_cred VAR_3;
    int VAR_4;

    VAR_3 = FUNC_0(1, sizeof(*VAR_3));
    if (VAR_3 == ((void*)0))
 return VAR_0;

    VAR_4 = FUNC_3(VAR_1, &VAR_3->username, &VAR_3->key);
    if (VAR_4)
 VAR_4 = FUNC_2(VAR_1, &VAR_3->username, &VAR_3->key);
    if (VAR_4) {
 FUNC_1(VAR_3);
 return VAR_4;
    }

    VAR_3->domain = FUNC_4(VAR_1->domain);
    *VAR_2 = VAR_3;

    return VAR_4;
}
