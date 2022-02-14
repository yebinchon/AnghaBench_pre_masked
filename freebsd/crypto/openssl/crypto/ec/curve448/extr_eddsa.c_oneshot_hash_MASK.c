
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int c448_error_t ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static c448_error_t FUNC_6(uint8_t *VAR_2, size_t VAR_3,
                                 const uint8_t *VAR_4, size_t VAR_5)
{
    EVP_MD_CTX *VAR_6 = FUNC_4();

    if (VAR_6 == ((void*)0))
        return VAR_0;

    if (!FUNC_1(VAR_6, FUNC_5(), ((void*)0))
            || !FUNC_2(VAR_6, VAR_4, VAR_5)
            || !FUNC_0(VAR_6, VAR_2, VAR_3)) {
        FUNC_3(VAR_6);
        return VAR_0;
    }

    FUNC_3(VAR_6);
    return VAR_1;
}
