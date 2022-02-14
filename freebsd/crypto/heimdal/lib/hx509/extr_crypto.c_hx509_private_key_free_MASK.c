
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* hx509_private_key ;
struct TYPE_7__ {int * rsa; scalar_t__ ecdsa; } ;
struct TYPE_8__ {scalar_t__ ref; TYPE_2__ private_key; TYPE_1__* ops; } ;
struct TYPE_6__ {int key_oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;

int
FUNC_5(hx509_private_key *VAR_2)
{
    if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0))
 return 0;

    if ((*VAR_2)->ref == 0)
 FUNC_2("key refcount == 0 on free");
    if (--(*VAR_2)->ref > 0)
 return 0;

    if ((*VAR_2)->ops && FUNC_3((*VAR_2)->ops->key_oid, VAR_1) == 0) {
 if ((*VAR_2)->private_key.rsa)
     FUNC_1((*VAR_2)->private_key.rsa);





    }
    (*VAR_2)->private_key.rsa = ((void*)0);
    FUNC_4(*VAR_2);
    *VAR_2 = ((void*)0);
    return 0;
}
