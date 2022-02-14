
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ top; int neg; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (char const) ;

int FUNC_9(BIGNUM **VAR_3, const char *VAR_4)
{
    BIGNUM *VAR_5 = ((void*)0);
    BN_ULONG VAR_6 = 0;
    int VAR_7 = 0, VAR_8, VAR_9;
    int VAR_10;

    if (VAR_4 == ((void*)0) || *VAR_4 == '\0')
        return 0;
    if (*VAR_4 == '-') {
        VAR_7 = 1;
        VAR_4++;
    }

    for (VAR_8 = 0; VAR_8 <= VAR_2 / 4 && FUNC_8(VAR_4[VAR_8]); VAR_8++)
        continue;

    if (VAR_8 == 0 || VAR_8 > VAR_2 / 4)
        goto err;

    VAR_10 = VAR_8 + VAR_7;
    if (VAR_3 == ((void*)0))
        return VAR_10;





    if (*VAR_3 == ((void*)0)) {
        if ((VAR_5 = FUNC_3()) == ((void*)0))
            return 0;
    } else {
        VAR_5 = *VAR_3;
        FUNC_4(VAR_5);
    }


    if (FUNC_7(VAR_5, VAR_8 * 4) == ((void*)0))
        goto err;

    VAR_9 = VAR_1 - VAR_8 % VAR_1;
    if (VAR_9 == VAR_1)
        VAR_9 = 0;
    VAR_6 = 0;
    while (--VAR_8 >= 0) {
        VAR_6 *= 10;
        VAR_6 += *VAR_4 - '0';
        VAR_4++;
        if (++VAR_9 == VAR_1) {
            if (!FUNC_2(VAR_5, VAR_0)
                || !FUNC_0(VAR_5, VAR_6))
                goto err;
            VAR_6 = 0;
            VAR_9 = 0;
        }
    }

    FUNC_6(VAR_5);
    *VAR_3 = VAR_5;
    FUNC_5(VAR_5);

    if (VAR_5->top != 0)
        VAR_5->neg = VAR_7;
    return VAR_10;
 err:
    if (*VAR_3 == ((void*)0))
        FUNC_1(VAR_5);
    return 0;
}
