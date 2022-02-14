
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ec; } ;
struct TYPE_6__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int EC_GROUP ;


 scalar_t__ FUNC_0 (int const*,int const*,int *) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const EVP_PKEY *VAR_0, const EVP_PKEY *VAR_1)
{
    const EC_GROUP *VAR_2 = FUNC_1(VAR_0->pkey.ec),
        *VAR_3 = FUNC_1(VAR_1->pkey.ec);
    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
        return -2;
    if (FUNC_0(VAR_2, VAR_3, ((void*)0)))
        return 0;
    else
        return 1;
}
