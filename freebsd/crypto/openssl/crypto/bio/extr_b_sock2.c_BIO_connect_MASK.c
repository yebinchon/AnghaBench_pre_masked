
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int on ;
typedef int BIO_ADDR ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,int ) ;
 int VAR_13 ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int,int ,int ,void const*,int) ;

int FUNC_9(int VAR_14, const BIO_ADDR *VAR_15, int VAR_16)
{
    const int VAR_17 = 1;

    if (VAR_14 == -1) {
        FUNC_4(VAR_0, VAR_2);
        return 0;
    }

    if (!FUNC_3(VAR_14, (VAR_16 & VAR_7) != 0))
        return 0;

    if (VAR_16 & VAR_5) {
        if (FUNC_8(VAR_14, VAR_9, VAR_10,
                       (const void *)&VAR_17, sizeof(VAR_17)) != 0) {
            FUNC_5(VAR_12, FUNC_7());
            FUNC_4(VAR_0, VAR_3);
            return 0;
        }
    }

    if (VAR_16 & VAR_6) {
        if (FUNC_8(VAR_14, VAR_8, VAR_13,
                       (const void *)&VAR_17, sizeof(VAR_17)) != 0) {
            FUNC_5(VAR_12, FUNC_7());
            FUNC_4(VAR_0, VAR_4);
            return 0;
        }
    }

    if (FUNC_6(VAR_14, FUNC_0(VAR_15),
                FUNC_1(VAR_15)) == -1) {
        if (!FUNC_2(-1)) {
            FUNC_5(VAR_11, FUNC_7());
            FUNC_4(VAR_0, VAR_1);
        }
        return 0;
    }
    return 1;
}
