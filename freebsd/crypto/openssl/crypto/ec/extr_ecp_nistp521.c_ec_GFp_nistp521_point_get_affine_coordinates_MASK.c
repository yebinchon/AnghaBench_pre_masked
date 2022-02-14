
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int largefelem ;
typedef int felem ;
struct TYPE_4__ {int Z; int Y; int X; } ;
typedef TYPE_1__ EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int const*,TYPE_1__ const*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ) ;

int FUNC_9(const EC_GROUP *VAR_3,
                                                 const EC_POINT *VAR_4,
                                                 BIGNUM *VAR_5, BIGNUM *VAR_6,
                                                 BN_CTX *VAR_7)
{
    felem VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    largefelem VAR_14;

    if (FUNC_1(VAR_3, VAR_4)) {
        FUNC_2(VAR_0,
              VAR_1);
        return 0;
    }
    if ((!FUNC_0(VAR_10, VAR_4->X)) || (!FUNC_0(VAR_11, VAR_4->Y)) ||
        (!FUNC_0(VAR_8, VAR_4->Z)))
        return 0;
    FUNC_4(VAR_9, VAR_8);
    FUNC_7(VAR_14, VAR_9);
    FUNC_6(VAR_8, VAR_14);
    FUNC_5(VAR_14, VAR_10, VAR_8);
    FUNC_6(VAR_10, VAR_14);
    FUNC_3(VAR_12, VAR_10);
    if (VAR_5 != ((void*)0)) {
        if (!FUNC_8(VAR_5, VAR_12)) {
            FUNC_2(VAR_0,
                  VAR_2);
            return 0;
        }
    }
    FUNC_5(VAR_14, VAR_8, VAR_9);
    FUNC_6(VAR_8, VAR_14);
    FUNC_5(VAR_14, VAR_11, VAR_8);
    FUNC_6(VAR_11, VAR_14);
    FUNC_3(VAR_13, VAR_11);
    if (VAR_6 != ((void*)0)) {
        if (!FUNC_8(VAR_6, VAR_13)) {
            FUNC_2(VAR_0,
                  VAR_2);
            return 0;
        }
    }
    return 1;
}
