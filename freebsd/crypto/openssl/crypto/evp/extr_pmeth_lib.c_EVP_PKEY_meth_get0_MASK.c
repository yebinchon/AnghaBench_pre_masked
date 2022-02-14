
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_METHOD ;


 size_t FUNC_0 (int const**) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int const* FUNC_2 (int *,size_t) ;
 int const** VAR_1 ;

const EVP_PKEY_METHOD *FUNC_3(size_t VAR_2)
{
    if (VAR_2 < FUNC_0(VAR_1))
        return VAR_1[VAR_2];
    if (VAR_0 == ((void*)0))
        return ((void*)0);
    VAR_2 -= FUNC_0(VAR_1);
    if (VAR_2 >= (size_t)FUNC_1(VAR_0))
        return ((void*)0);
    return FUNC_2(VAR_0, VAR_2);
}
