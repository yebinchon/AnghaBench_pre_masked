
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PBE_KEYGEN ;
typedef int EVP_MD ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int,int,int *) ;

int FUNC_3(int VAR_1, const EVP_CIPHER *VAR_2, const EVP_MD *VAR_3,
                    EVP_PBE_KEYGEN *VAR_4)
{
    int VAR_5, VAR_6;

    if (VAR_2)
        VAR_5 = FUNC_0(VAR_2);
    else
        VAR_5 = -1;
    if (VAR_3)
        VAR_6 = FUNC_1(VAR_3);
    else
        VAR_6 = -1;

    return FUNC_2(VAR_0, VAR_1,
                                VAR_5, VAR_6, VAR_4);
}
