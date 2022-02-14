
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socktype ;
typedef int socklen_t ;
typedef int on ;
typedef int BIO_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,int const*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (int ,int ) ;
 int VAR_23 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int,int ,int ,void*,int*) ;
 int FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int,int ,int ,void const*,int) ;

int FUNC_9(int VAR_24, const BIO_ADDR *VAR_25, int VAR_26)
{
    int VAR_27 = 1;
    int VAR_28;
    socklen_t VAR_29 = sizeof(VAR_28);

    if (VAR_24 == -1) {
        FUNC_3(VAR_1, VAR_3);
        return 0;
    }

    if (FUNC_6(VAR_24, VAR_17, VAR_19,
                   (void *)&VAR_28, &VAR_29) != 0
        || VAR_29 != sizeof(VAR_28)) {
        FUNC_4(VAR_20, FUNC_5());
        FUNC_3(VAR_1, VAR_2);
        return 0;
    }

    if (!FUNC_2(VAR_24, (VAR_26 & VAR_10) != 0))
        return 0;

    if (VAR_26 & VAR_8) {
        if (FUNC_8(VAR_24, VAR_17, VAR_18,
                       (const void *)&VAR_27, sizeof(VAR_27)) != 0) {
            FUNC_4(VAR_22, FUNC_5());
            FUNC_3(VAR_1, VAR_5);
            return 0;
        }
    }

    if (VAR_26 & VAR_9) {
        if (FUNC_8(VAR_24, VAR_13, VAR_23,
                       (const void *)&VAR_27, sizeof(VAR_27)) != 0) {
            FUNC_4(VAR_22, FUNC_5());
            FUNC_3(VAR_1, VAR_7);
            return 0;
        }
    }
    if (!FUNC_1(VAR_24, VAR_25, VAR_26))
        return 0;

    if (VAR_28 != VAR_16 && FUNC_7(VAR_24, VAR_15) == -1) {
        FUNC_4(VAR_21, FUNC_5());
        FUNC_3(VAR_1, VAR_6);
        return 0;
    }

    return 1;
}
