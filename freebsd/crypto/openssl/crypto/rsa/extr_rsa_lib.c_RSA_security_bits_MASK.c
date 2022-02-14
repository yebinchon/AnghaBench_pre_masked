
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ version; int prime_infos; int n; } ;
typedef TYPE_1__ RSA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

int FUNC_4(const RSA *VAR_1)
{
    int VAR_2 = FUNC_0(VAR_1->n);

    if (VAR_1->version == VAR_0) {

        int VAR_3 = FUNC_3(VAR_1->prime_infos);

        if (VAR_3 <= 0 || (VAR_3 + 2) > FUNC_2(VAR_2))
            return 0;
    }
    return FUNC_1(VAR_2, -1);
}
