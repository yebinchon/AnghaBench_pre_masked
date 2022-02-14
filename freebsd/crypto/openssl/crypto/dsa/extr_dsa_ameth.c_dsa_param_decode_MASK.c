
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int DSA ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,unsigned char const**,int) ;

__attribute__((used)) static int FUNC_3(EVP_PKEY *VAR_2,
                            const unsigned char **VAR_3, int VAR_4)
{
    DSA *VAR_5;

    if ((VAR_5 = FUNC_2(((void*)0), VAR_3, VAR_4)) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    FUNC_1(VAR_2, VAR_5);
    return 1;
}
