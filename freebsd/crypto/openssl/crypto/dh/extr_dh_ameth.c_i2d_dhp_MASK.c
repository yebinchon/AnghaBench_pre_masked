
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ameth; } ;
typedef TYPE_1__ EVP_PKEY ;
typedef int DH ;


 int VAR_0 ;
 int FUNC_0 (int const*,unsigned char**) ;
 int FUNC_1 (int const*,unsigned char**) ;

__attribute__((used)) static int FUNC_2(const EVP_PKEY *VAR_1, const DH *VAR_2, unsigned char **VAR_3)
{
    if (VAR_1->ameth == &VAR_0)
        return FUNC_1(VAR_2, VAR_3);
    return FUNC_0(VAR_2, VAR_3);
}
