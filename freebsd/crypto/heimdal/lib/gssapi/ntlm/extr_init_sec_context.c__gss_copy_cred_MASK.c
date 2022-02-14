
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* ntlm_cred ;
struct TYPE_8__ {int length; int * data; } ;
struct TYPE_9__ {TYPE_1__ key; struct TYPE_9__* username; struct TYPE_9__* domain; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int ) ;
 void* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(ntlm_cred VAR_1, ntlm_cred *VAR_2)
{
    *VAR_2 = FUNC_0(1, sizeof(**VAR_2));
    if (*VAR_2 == ((void*)0))
 return VAR_0;
    (*VAR_2)->username = FUNC_4(VAR_1->username);
    if ((*VAR_2)->username == ((void*)0)) {
 FUNC_1(*VAR_2);
 return VAR_0;
    }
    (*VAR_2)->domain = FUNC_4(VAR_1->domain);
    if ((*VAR_2)->domain == ((void*)0)) {
 FUNC_1((*VAR_2)->username);
 FUNC_1(*VAR_2);
 return VAR_0;
    }
    (*VAR_2)->key.data = FUNC_2(VAR_1->key.length);
    if ((*VAR_2)->key.data == ((void*)0)) {
 FUNC_1((*VAR_2)->domain);
 FUNC_1((*VAR_2)->username);
 FUNC_1(*VAR_2);
 return VAR_0;
    }
    FUNC_3((*VAR_2)->key.data, VAR_1->key.data, VAR_1->key.length);
    (*VAR_2)->key.length = VAR_1->key.length;

    return 0;
}
