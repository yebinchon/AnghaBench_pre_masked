
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int dom ;
typedef int c448_error_t ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,...) ;
 int FUNC_2 () ;
 size_t VAR_2 ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static c448_error_t FUNC_4(EVP_MD_CTX *VAR_3, uint8_t VAR_4,
                                       uint8_t VAR_5,
                                       const uint8_t *VAR_6,
                                       size_t VAR_7)
{
    const char *VAR_8 = "SigEd448";
    uint8_t VAR_9[2];

    if (VAR_7 > VAR_2)
        return VAR_0;

    VAR_9[0] = (uint8_t)(2 - (VAR_4 == 0 ? 1 : 0)
                       - (VAR_5 == 0 ? 1 : 0));
    VAR_9[1] = (uint8_t)VAR_7;

    if (!FUNC_0(VAR_3, FUNC_2(), ((void*)0))
            || !FUNC_1(VAR_3, VAR_8, FUNC_3(VAR_8))
            || !FUNC_1(VAR_3, VAR_9, sizeof(VAR_9))
            || !FUNC_1(VAR_3, VAR_6, VAR_7))
        return VAR_0;

    return VAR_1;
}
