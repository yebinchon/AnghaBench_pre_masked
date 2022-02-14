
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_POINT ;
typedef int EC_KEY ;
typedef int EC_GROUP ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int const*,int *,int ,int *,int *,int *) ;
 int * FUNC_7 (int const*) ;

__attribute__((used)) static int
FUNC_8(EC_KEY* VAR_0)
{
        EC_POINT* VAR_1;
        const EC_GROUP* VAR_2;
        VAR_2 = FUNC_1(VAR_0);
        VAR_1 = FUNC_7(VAR_2);
        if(!VAR_1) return 0;
        if(!FUNC_4(VAR_1, FUNC_0(VAR_2))) {
                FUNC_5(VAR_1);
                return 0;
        }
        if(!FUNC_6(VAR_2, VAR_1, FUNC_2(VAR_0),
                ((void*)0), ((void*)0), ((void*)0))) {
                FUNC_5(VAR_1);
                return 0;
        }
        if(FUNC_3(VAR_0, VAR_1) == 0) {
                FUNC_5(VAR_1);
                return 0;
        }
        FUNC_5(VAR_1);
        return 1;
}
