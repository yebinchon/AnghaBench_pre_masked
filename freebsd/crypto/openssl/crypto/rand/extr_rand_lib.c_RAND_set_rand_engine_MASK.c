
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RAND_METHOD ;
typedef int ENGINE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_7(ENGINE *VAR_4)
{
    const RAND_METHOD *VAR_5 = ((void*)0);

    if (!FUNC_6(&VAR_3, VAR_0))
        return 0;

    if (VAR_4 != ((void*)0)) {
        if (!FUNC_4(VAR_4))
            return 0;
        VAR_5 = FUNC_3(VAR_4);
        if (VAR_5 == ((void*)0)) {
            FUNC_2(VAR_4);
            return 0;
        }
    }
    FUNC_1(VAR_2);

    FUNC_5(VAR_5);
    VAR_1 = VAR_4;
    FUNC_0(VAR_2);
    return 1;
}
