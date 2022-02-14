
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int EC_GROUP ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_4(EVP_PKEY *VAR_12, int VAR_13, unsigned long *VAR_14)
{
    const EC_GROUP *VAR_15 = ((void*)0);
    int VAR_16;
    if (VAR_12 && FUNC_3(VAR_12) == VAR_0)
        VAR_15 = FUNC_1(FUNC_2(VAR_12));
    if (!VAR_15)
        return VAR_5;
    VAR_16 = FUNC_0(VAR_15);

    if (VAR_16 == VAR_4) {



        if (VAR_13 != -1 && VAR_13 != VAR_3)
            return VAR_7;
        if (!(*VAR_14 & VAR_10))
            return VAR_8;

        *VAR_14 &= ~VAR_9;
    } else if (VAR_16 == VAR_1) {
        if (VAR_13 != -1 && VAR_13 != VAR_2)
            return VAR_7;
        if (!(*VAR_14 & VAR_9))
            return VAR_8;
    } else
        return VAR_6;

    return VAR_11;
}
