
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int prime_infos; } ;
struct TYPE_6__ {int * t; int * d; } ;
typedef TYPE_1__ RSA_PRIME_INFO ;
typedef TYPE_2__ RSA ;
typedef int BIGNUM ;


 int FUNC_0 (TYPE_2__ const*) ;
 TYPE_1__* FUNC_1 (int ,int) ;

int FUNC_2(const RSA *VAR_0, const BIGNUM *VAR_1[],
                                    const BIGNUM *VAR_2[])
{
    int VAR_3;

    if ((VAR_3 = FUNC_0(VAR_0)) == 0)
        return 0;


    if (VAR_1 != ((void*)0) || VAR_2 != ((void*)0)) {
        RSA_PRIME_INFO *VAR_4;
        int VAR_5;


        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
            VAR_4 = FUNC_1(VAR_0->prime_infos, VAR_5);
            if (VAR_1 != ((void*)0))
                VAR_1[VAR_5] = VAR_4->d;
            if (VAR_2 != ((void*)0))
                VAR_2[VAR_5] = VAR_4->t;
        }
    }

    return 1;
}
