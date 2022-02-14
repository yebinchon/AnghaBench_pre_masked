
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int const** VAR_2 ;

const EVP_MD *FUNC_0(int VAR_3)
{
    VAR_3 &= VAR_0;
    if (VAR_3 < 0 || VAR_3 >= VAR_1)
        return ((void*)0);
    return VAR_2[VAR_3];
}
