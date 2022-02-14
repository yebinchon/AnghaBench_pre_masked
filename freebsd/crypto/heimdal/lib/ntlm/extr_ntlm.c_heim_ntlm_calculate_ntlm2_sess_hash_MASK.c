
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;

int
FUNC_7(const unsigned char VAR_2[8],
        const unsigned char VAR_3[8],
        unsigned char VAR_4[8])
{
    unsigned char VAR_5[VAR_1];
    EVP_MD_CTX *VAR_6;

    VAR_6 = FUNC_3();
    if (VAR_6 == ((void*)0))
 return VAR_0;

    FUNC_1(VAR_6, FUNC_5(), ((void*)0));
    FUNC_2(VAR_6, VAR_3, 8);
    FUNC_2(VAR_6, VAR_2, 8);
    FUNC_0(VAR_6, VAR_5, ((void*)0));
    FUNC_4(VAR_6);

    FUNC_6(VAR_4, VAR_5, 8);

    return 0;
}
