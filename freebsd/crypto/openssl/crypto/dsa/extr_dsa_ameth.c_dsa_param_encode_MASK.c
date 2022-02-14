
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dsa; } ;
struct TYPE_5__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;


 int FUNC_0 (int ,unsigned char**) ;

__attribute__((used)) static int FUNC_1(const EVP_PKEY *VAR_0, unsigned char **VAR_1)
{
    return FUNC_0(VAR_0->pkey.dsa, VAR_1);
}
