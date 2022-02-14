
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int chain; TYPE_1__* param; } ;
typedef TYPE_2__ X509_STORE_CTX ;
typedef int X509 ;
struct TYPE_7__ {scalar_t__ auth_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *,int,int ) ;

__attribute__((used)) static int FUNC_5(X509_STORE_CTX *VAR_2)
{
    int VAR_3;
    int VAR_4 = FUNC_2(VAR_2->chain);

    if (VAR_2->param->auth_level <= 0)
        return 1;

    for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
        X509 *VAR_5 = FUNC_3(VAR_2->chain, VAR_3);





        if (VAR_3 > 0 && !FUNC_0(VAR_2, VAR_5) &&
            FUNC_4(VAR_2, VAR_5, VAR_3, VAR_0) == 0)
            return 0;




        if (VAR_3 < VAR_4 - 1 && !FUNC_1(VAR_2, VAR_5) &&
            FUNC_4(VAR_2, VAR_5, VAR_3, VAR_1) == 0)
            return 0;
    }
    return 1;
}
