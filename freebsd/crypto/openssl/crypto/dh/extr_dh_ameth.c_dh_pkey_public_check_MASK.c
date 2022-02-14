
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * pub_key; } ;
struct TYPE_6__ {TYPE_3__* dh; } ;
struct TYPE_7__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef TYPE_3__ DH ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const EVP_PKEY *VAR_2)
{
    DH *VAR_3 = VAR_2->pkey.dh;

    if (VAR_3->pub_key == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }

    return FUNC_0(VAR_3, VAR_3->pub_key);
}
