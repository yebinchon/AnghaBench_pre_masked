
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
typedef scalar_t__ int64_t ;
typedef int convert ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char**,char**,size_t*,size_t*,char const) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(char **VAR_7,
       char **VAR_8,
       size_t *VAR_9,
       size_t *VAR_10, int64_t VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
    int VAR_16 = 0;
    const char *VAR_17 = "";
    uint64_t VAR_18;
    char VAR_19[FUNC_0(VAR_11) + 3];
    int VAR_20 = 0;
    int VAR_21 = 0;
    int VAR_22 = 0;
    int VAR_23 = 0;

    if (VAR_14 < 0)
        VAR_14 = 0;
    VAR_18 = VAR_11;
    if (!(VAR_15 & VAR_4)) {
        if (VAR_11 < 0) {
            VAR_16 = '-';
            VAR_18 = 0 - (uint64_t)VAR_11;
        } else if (VAR_15 & VAR_2)
            VAR_16 = '+';
        else if (VAR_15 & VAR_3)
            VAR_16 = ' ';
    }
    if (VAR_15 & VAR_1) {
        if (VAR_12 == 8)
            VAR_17 = "0";
        if (VAR_12 == 16)
            VAR_17 = "0x";
    }
    if (VAR_15 & VAR_5)
        VAR_23 = 1;
    do {
        VAR_19[VAR_20++] = (VAR_23 ? "0123456789ABCDEF" : "0123456789abcdef")
            [VAR_18 % (unsigned)VAR_12];
        VAR_18 = (VAR_18 / (unsigned)VAR_12);
    } while (VAR_18 && (VAR_20 < (int)sizeof(VAR_19)));
    if (VAR_20 == sizeof(VAR_19))
        VAR_20--;
    VAR_19[VAR_20] = 0;

    VAR_22 = VAR_14 - VAR_20;
    VAR_21 =
        VAR_13 - FUNC_1(VAR_14, VAR_20) - (VAR_16 ? 1 : 0) - FUNC_3(VAR_17);
    if (VAR_22 < 0)
        VAR_22 = 0;
    if (VAR_21 < 0)
        VAR_21 = 0;
    if (VAR_15 & VAR_6) {
        VAR_22 = FUNC_1(VAR_22, VAR_21);
        VAR_21 = 0;
    }
    if (VAR_15 & VAR_0)
        VAR_21 = -VAR_21;


    while (VAR_21 > 0) {
        if (!FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, ' '))
            return 0;
        --VAR_21;
    }


    if (VAR_16)
        if (!FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_16))
            return 0;


    while (*VAR_17) {
        if (!FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, *VAR_17))
            return 0;
        VAR_17++;
    }


    if (VAR_22 > 0) {
        while (VAR_22 > 0) {
            if (!FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, '0'))
                return 0;
            --VAR_22;
        }
    }

    while (VAR_20 > 0) {
        if (!FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_19[--VAR_20]))
            return 0;
    }


    while (VAR_21 < 0) {
        if (!FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, ' '))
            return 0;
        ++VAR_21;
    }
    return 1;
}
