
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char const VAR_0 ;
 unsigned char const VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (unsigned char const**) ;

__attribute__((used)) static int FUNC_2(const unsigned char **VAR_7, unsigned int VAR_8,
                          unsigned int *VAR_9, unsigned int *VAR_10,
                          int *VAR_11, int *VAR_12)
{
    const unsigned char *VAR_13 = *VAR_7;
    if (VAR_8 < 16)
        return 0;

    if (*VAR_13 == VAR_1) {
        if (*VAR_12 == 0) {
            FUNC_0(VAR_2, VAR_5);
            return 0;
        }
        *VAR_12 = 1;
    } else if (*VAR_13 == VAR_0) {
        if (*VAR_12 == 1) {
            FUNC_0(VAR_2, VAR_6);
            return 0;
        }
        *VAR_12 = 0;
    } else
        return 0;
    VAR_13++;

    if (*VAR_13++ != 0x2) {
        FUNC_0(VAR_2, VAR_4);
        return 0;
    }

    VAR_13 += 6;
    *VAR_9 = FUNC_1(&VAR_13);
    *VAR_10 = FUNC_1(&VAR_13);
    *VAR_11 = 0;
    switch (*VAR_9) {

    case 131:
        *VAR_11 = 1;

    case 129:
        if (*VAR_12 == 0) {
            FUNC_0(VAR_2, VAR_5);
            return 0;
        }
        break;

    case 130:
        *VAR_11 = 1;

    case 128:
        if (*VAR_12 == 1) {
            FUNC_0(VAR_2, VAR_6);
            return 0;
        }
        break;

    default:
        FUNC_0(VAR_2, VAR_3);
        return -1;
    }
    *VAR_7 = VAR_13;
    return 1;
}
