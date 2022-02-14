
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prime_infos; } ;
typedef TYPE_1__ RSA ;


 int FUNC_0 (int ) ;

int FUNC_1(const RSA *VAR_0)
{
    int VAR_1;

    VAR_1 = FUNC_0(VAR_0->prime_infos);
    if (VAR_1 <= 0)
        VAR_1 = 0;
    return VAR_1;
}
