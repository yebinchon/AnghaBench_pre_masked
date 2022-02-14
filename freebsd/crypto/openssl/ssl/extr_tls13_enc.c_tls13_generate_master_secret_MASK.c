
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int EVP_MD ;


 size_t FUNC_0 (int const*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,unsigned char*,int *,int ,unsigned char*) ;

int FUNC_3(SSL *VAR_0, unsigned char *VAR_1,
                                 unsigned char *VAR_2, size_t VAR_3,
                                 size_t *VAR_4)
{
    const EVP_MD *VAR_5 = FUNC_1(VAR_0);

    *VAR_4 = FUNC_0(VAR_5);

    return FUNC_2(VAR_0, VAR_5, VAR_2, ((void*)0), 0, VAR_1);
}
