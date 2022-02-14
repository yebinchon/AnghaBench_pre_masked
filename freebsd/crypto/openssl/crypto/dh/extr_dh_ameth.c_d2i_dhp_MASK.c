
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ameth; } ;
typedef TYPE_1__ EVP_PKEY ;
typedef int DH ;


 int * FUNC_0 (int *,unsigned char const**,long) ;
 int * FUNC_1 (int *,unsigned char const**,long) ;
 int VAR_0 ;

__attribute__((used)) static DH *FUNC_2(const EVP_PKEY *VAR_1, const unsigned char **VAR_2,
                   long VAR_3)
{
    if (VAR_1->ameth == &VAR_0)
        return FUNC_1(((void*)0), VAR_2, VAR_3);
    return FUNC_0(((void*)0), VAR_2, VAR_3);
}
