
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int const*,unsigned char*) ;
 size_t FUNC_1 (int const*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int *,unsigned char*,size_t,int *) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (unsigned char*) ;
 unsigned char* FUNC_7 (size_t) ;

EC_POINT *FUNC_8(const EC_GROUP *VAR_2,
                            const BIGNUM *VAR_3, EC_POINT *VAR_4, BN_CTX *VAR_5)
{
    size_t VAR_6 = 0;
    unsigned char *VAR_7;
    EC_POINT *VAR_8;

    if ((VAR_6 = FUNC_1(VAR_3)) == 0)
        return ((void*)0);
    if ((VAR_7 = FUNC_7(VAR_6)) == ((void*)0)) {
        FUNC_5(VAR_0, VAR_1);
        return ((void*)0);
    }

    if (!FUNC_0(VAR_3, VAR_7)) {
        FUNC_6(VAR_7);
        return ((void*)0);
    }

    if (VAR_4 == ((void*)0)) {
        if ((VAR_8 = FUNC_3(VAR_2)) == ((void*)0)) {
            FUNC_6(VAR_7);
            return ((void*)0);
        }
    } else
        VAR_8 = VAR_4;

    if (!FUNC_4(VAR_2, VAR_8, VAR_7, VAR_6, VAR_5)) {
        if (VAR_8 != VAR_4)
            FUNC_2(VAR_8);
        FUNC_6(VAR_7);
        return ((void*)0);
    }

    FUNC_6(VAR_7);
    return VAR_8;
}
