
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int ENGINE ;


 scalar_t__ FUNC_0 (int *,unsigned char*,unsigned int*) ;
 scalar_t__ FUNC_1 (int *,int const*,int *) ;
 scalar_t__ FUNC_2 (int *,void const*,size_t) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;

int FUNC_6(const void *VAR_1, size_t VAR_2,
               unsigned char *VAR_3, unsigned int *VAR_4, const EVP_MD *VAR_5,
               ENGINE *VAR_6)
{
    EVP_MD_CTX *VAR_7 = FUNC_4();
    int VAR_8;

    if (VAR_7 == ((void*)0))
        return 0;
    FUNC_5(VAR_7, VAR_0);
    VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_6)
        && FUNC_2(VAR_7, VAR_1, VAR_2)
        && FUNC_0(VAR_7, VAR_3, VAR_4);
    FUNC_3(VAR_7);

    return VAR_8;
}
