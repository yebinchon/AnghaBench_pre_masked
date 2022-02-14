
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* add ) (int ,int ,double) ;} ;
typedef int RAND_POOL ;
typedef TYPE_1__ RAND_METHOD ;
typedef int RAND_DRBG ;


 int VAR_0 ;
 int * FUNC_0 () ;
 TYPE_1__ const* FUNC_1 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 double FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int,int,int,int ) ;
 scalar_t__ FUNC_12 (int ,int ,double) ;

int FUNC_13(void)
{
    int VAR_2 = 0;

    RAND_POOL *VAR_3 = ((void*)0);

    const RAND_METHOD *VAR_4 = FUNC_2();

    if (VAR_4 == FUNC_1()) {

        RAND_DRBG *VAR_5 = FUNC_0();

        if (VAR_5 == ((void*)0))
            return 0;

        FUNC_3(VAR_5);
        VAR_2 = FUNC_4(VAR_5, ((void*)0), 0, 0);
        FUNC_5(VAR_5);

        return VAR_2;

    } else {

        VAR_3 = FUNC_11(VAR_0, 1,
                             (VAR_0 + 7) / 8,
                             VAR_1);
        if (VAR_3 == ((void*)0))
            return 0;

        if (FUNC_6(VAR_3) == 0)
            goto err;

        if (VAR_4->add == ((void*)0)
            || VAR_4->add(FUNC_7(VAR_3),
                         FUNC_10(VAR_3),
                         (FUNC_8(VAR_3) / 8.0)) == 0)
            goto err;

        VAR_2 = 1;
    }

err:
    FUNC_9(VAR_3);
    return VAR_2;
}
