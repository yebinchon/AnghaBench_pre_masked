
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int felem_bytearray ;
typedef int felem ;
typedef int b_out ;
typedef int BIGNUM ;


 int FUNC_0 (int const*,int ,int) ;
 scalar_t__ FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(felem VAR_2, const BIGNUM *VAR_3)
{
    felem_bytearray VAR_4;
    int VAR_5;

    if (FUNC_1(VAR_3)) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }
    VAR_5 = FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
    if (VAR_5 < 0) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }
    FUNC_3(VAR_2, VAR_4);
    return 1;
}
