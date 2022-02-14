
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct TYPE_3__ {scalar_t__ type; int flags; int length; scalar_t__ data; } ;
typedef TYPE_1__ ASN1_TIME ;


 int VAR_0 ;
 int FUNC_0 (struct tm*,int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (struct tm*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tm*,int ,int) ;

int FUNC_5(struct tm *VAR_3, const ASN1_TIME *VAR_4)
{
    static const int VAR_5[9] = { 0, 0, 1, 1, 0, 0, 0, 0, 0 };
    static const int VAR_6[9] = { 99, 99, 12, 31, 23, 59, 59, 12, 59 };
    static const int VAR_7[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    char *VAR_8;
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = 11, VAR_15 = 0, VAR_16 = 6, VAR_17 = 5, VAR_18;
    struct tm VAR_19;



    const char VAR_20 = 'Z', VAR_21 = '0', VAR_22 = '.', VAR_23 = '-', VAR_24 = '+';
    if (VAR_4->type == VAR_2) {
        if (VAR_4->flags & VAR_0) {
            VAR_14 = 13;
            VAR_15 = 1;
        }
    } else if (VAR_4->type == VAR_1) {
        VAR_16 = 7;
        VAR_17 = 6;
        if (VAR_4->flags & VAR_0) {
            VAR_14 = 15;
            VAR_15 = 1;
        } else {
            VAR_14 = 13;
        }
    } else {
        return 0;
    }

    VAR_12 = VAR_4->length;
    VAR_8 = (char *)VAR_4->data;
    VAR_13 = 0;
    FUNC_4(&VAR_19, 0, sizeof(VAR_19));







    if (VAR_12 < VAR_14)
        goto err;
    for (VAR_10 = 0; VAR_10 < VAR_16; VAR_10++) {
        if (!VAR_15 && (VAR_10 == VAR_17) && ((VAR_8[VAR_13] == VAR_20) || (VAR_8[VAR_13] == VAR_24) || (VAR_8[VAR_13] == VAR_23))) {
            VAR_10++;
            break;
        }
        if (!FUNC_1(VAR_8[VAR_13]))
            goto err;
        VAR_9 = VAR_8[VAR_13] - VAR_21;

        if (++VAR_13 == VAR_12)
            goto err;

        if (!FUNC_1(VAR_8[VAR_13]))
            goto err;
        VAR_9 = (VAR_9 * 10) + VAR_8[VAR_13] - VAR_21;

        if (++VAR_13 == VAR_12)
            goto err;

        VAR_11 = (VAR_4->type == VAR_2) ? VAR_10 + 1 : VAR_10;

        if ((VAR_9 < VAR_5[VAR_11]) || (VAR_9 > VAR_6[VAR_11]))
            goto err;
        switch (VAR_11) {
        case 0:

            VAR_19.tm_year = VAR_9 * 100 - 1900;
            break;
        case 1:
            if (VAR_4->type == VAR_2)
                VAR_19.tm_year = VAR_9 < 50 ? VAR_9 + 100 : VAR_9;
            else
                VAR_19.tm_year += VAR_9;
            break;
        case 2:
            VAR_19.tm_mon = VAR_9 - 1;
            break;
        case 3:

            if (VAR_19.tm_mon == 1) {

                VAR_18 = VAR_7[1] + FUNC_3(VAR_19.tm_year + 1900);
            } else {
                VAR_18 = VAR_7[VAR_19.tm_mon];
            }
            if (VAR_9 > VAR_18)
                goto err;
            VAR_19.tm_mday = VAR_9;
            FUNC_2(&VAR_19);
            break;
        case 4:
            VAR_19.tm_hour = VAR_9;
            break;
        case 5:
            VAR_19.tm_min = VAR_9;
            break;
        case 6:
            VAR_19.tm_sec = VAR_9;
            break;
        }
    }





    if (VAR_4->type == VAR_1 && VAR_8[VAR_13] == VAR_22) {
        if (VAR_15)

            goto err;
        if (++VAR_13 == VAR_12)
            goto err;
        VAR_10 = VAR_13;
        while ((VAR_13 < VAR_12) && FUNC_1(VAR_8[VAR_13]))
            VAR_13++;

        if (VAR_10 == VAR_13)
            goto err;

        if (VAR_13 == VAR_12)
            goto err;
    }






    if (VAR_8[VAR_13] == VAR_20) {
        VAR_13++;
    } else if (!VAR_15 && ((VAR_8[VAR_13] == VAR_24) || (VAR_8[VAR_13] == VAR_23))) {
        int VAR_25 = VAR_8[VAR_13] == VAR_23 ? 1 : -1;
        int VAR_26 = 0;

        VAR_13++;






        if (VAR_13 + 4 != VAR_12)
            goto err;
        for (VAR_10 = VAR_16; VAR_10 < VAR_16 + 2; VAR_10++) {
            if (!FUNC_1(VAR_8[VAR_13]))
                goto err;
            VAR_9 = VAR_8[VAR_13] - VAR_21;
            VAR_13++;
            if (!FUNC_1(VAR_8[VAR_13]))
                goto err;
            VAR_9 = (VAR_9 * 10) + VAR_8[VAR_13] - VAR_21;
            VAR_11 = (VAR_4->type == VAR_2) ? VAR_10 + 1 : VAR_10;
            if ((VAR_9 < VAR_5[VAR_11]) || (VAR_9 > VAR_6[VAR_11]))
                goto err;

            if (VAR_3 != ((void*)0)) {
                if (VAR_10 == VAR_16)
                    VAR_26 = VAR_9 * 3600;
                else if (VAR_10 == VAR_16 + 1)
                    VAR_26 += VAR_9 * 60;
            }
            VAR_13++;
        }
        if (VAR_26 && !FUNC_0(&VAR_19, 0, VAR_26 * VAR_25))
            goto err;
    } else {

        goto err;
    }
    if (VAR_13 == VAR_12) {

        if (VAR_3 != ((void*)0))
            *VAR_3 = VAR_19;
        return 1;
    }
 err:
    return 0;
}
