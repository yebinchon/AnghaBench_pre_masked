
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pkey; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ _; } ;
typedef TYPE_2__ OSSL_STORE_INFO ;
typedef int EVP_PKEY ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

EVP_PKEY *FUNC_2(const OSSL_STORE_INFO *VAR_3)
{
    if (VAR_3->type == VAR_1) {
        FUNC_0(VAR_3->_.pkey);
        return VAR_3->_.pkey;
    }
    FUNC_1(VAR_0,
                  VAR_2);
    return ((void*)0);
}
