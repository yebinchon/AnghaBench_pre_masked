
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* d1; } ;
struct TYPE_6__ {size_t mtu; } ;
typedef int SSL_CIPHER ;
typedef TYPE_2__ SSL ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*) ;
 int * FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (int const*,size_t*,size_t*,size_t*,size_t*) ;

size_t FUNC_3(const SSL *VAR_1)
{
    size_t VAR_2, VAR_3, VAR_4, VAR_5;
    const SSL_CIPHER *VAR_6 = FUNC_1(VAR_1);
    size_t VAR_7 = VAR_1->d1->mtu;

    if (VAR_6 == ((void*)0))
        return 0;

    if (!FUNC_2(VAR_6, &VAR_2, &VAR_3,
                                 &VAR_4, &VAR_5))
        return 0;

    if (FUNC_0(VAR_1))
        VAR_5 += VAR_2;
    else
        VAR_3 += VAR_2;


    if (VAR_5 + VAR_0 >= VAR_7)
        return 0;
    VAR_7 -= VAR_5 + VAR_0;



    if (VAR_4)
        VAR_7 -= (VAR_7 % VAR_4);


    if (VAR_3 >= VAR_7)
        return 0;
    VAR_7 -= VAR_3;

    return VAR_7;
}
