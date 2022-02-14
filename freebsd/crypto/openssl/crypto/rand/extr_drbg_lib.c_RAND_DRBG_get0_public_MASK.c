
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RAND_DRBG ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int * FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

RAND_DRBG *FUNC_5(void)
{
    RAND_DRBG *VAR_5;

    if (!FUNC_2(&VAR_4, VAR_1))
        return ((void*)0);

    VAR_5 = FUNC_0(&VAR_3);
    if (VAR_5 == ((void*)0)) {
        if (!FUNC_4(VAR_0))
            return ((void*)0);
        VAR_5 = FUNC_3(VAR_2);
        FUNC_1(&VAR_3, VAR_5);
    }
    return VAR_5;
}
