
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int prime_infos; } ;
struct TYPE_6__ {int * r; } ;
typedef TYPE_1__ RSA_PRIME_INFO ;
typedef TYPE_2__ RSA ;
typedef int BIGNUM ;


 int FUNC_0 (TYPE_2__ const*) ;
 TYPE_1__* FUNC_1 (int ,int) ;

int FUNC_2(const RSA *VAR_0, const BIGNUM *VAR_1[])
{
    int VAR_2, VAR_3;
    RSA_PRIME_INFO *VAR_4;

    if ((VAR_2 = FUNC_0(VAR_0)) == 0)
        return 0;





    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        VAR_4 = FUNC_1(VAR_0->prime_infos, VAR_3);
        VAR_1[VAR_3] = VAR_4->r;
    }

    return 1;
}
