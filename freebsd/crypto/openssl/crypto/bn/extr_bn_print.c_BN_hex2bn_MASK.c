
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int* d; int top; int neg; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (TYPE_1__*,int) ;
 scalar_t__ FUNC_7 (char const) ;

int FUNC_8(BIGNUM **VAR_2, const char *VAR_3)
{
    BIGNUM *VAR_4 = ((void*)0);
    BN_ULONG VAR_5 = 0;
    int VAR_6 = 0, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    int VAR_13;

    if (VAR_3 == ((void*)0) || *VAR_3 == '\0')
        return 0;

    if (*VAR_3 == '-') {
        VAR_6 = 1;
        VAR_3++;
    }

    for (VAR_9 = 0; VAR_9 <= VAR_1 / 4 && FUNC_7(VAR_3[VAR_9]); VAR_9++)
        continue;

    if (VAR_9 == 0 || VAR_9 > VAR_1 / 4)
        goto err;

    VAR_13 = VAR_9 + VAR_6;
    if (VAR_2 == ((void*)0))
        return VAR_13;


    if (*VAR_2 == ((void*)0)) {
        if ((VAR_4 = FUNC_1()) == ((void*)0))
            return 0;
    } else {
        VAR_4 = *VAR_2;
        FUNC_2(VAR_4);
    }


    if (FUNC_6(VAR_4, VAR_9 * 4) == ((void*)0))
        goto err;

    VAR_10 = VAR_9;
    VAR_8 = 0;
    VAR_7 = 0;
    while (VAR_10 > 0) {
        VAR_8 = (VAR_0 * 2 <= VAR_10) ? VAR_0 * 2 : VAR_10;
        VAR_5 = 0;
        for (;;) {
            VAR_12 = VAR_3[VAR_10 - VAR_8];
            VAR_11 = FUNC_3(VAR_12);
            if (VAR_11 < 0)
                VAR_11 = 0;
            VAR_5 = (VAR_5 << 4) | VAR_11;

            if (--VAR_8 <= 0) {
                VAR_4->d[VAR_7++] = VAR_5;
                break;
            }
        }
        VAR_10 -= VAR_0 * 2;
    }
    VAR_4->top = VAR_7;
    FUNC_5(VAR_4);

    *VAR_2 = VAR_4;
    FUNC_4(VAR_4);

    if (VAR_4->top != 0)
        VAR_4->neg = VAR_6;
    return VAR_13;
 err:
    if (*VAR_2 == ((void*)0))
        FUNC_0(VAR_4);
    return 0;
}
