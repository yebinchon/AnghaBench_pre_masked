
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;
typedef int EC_GROUP ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int
FUNC_6(EVP_PKEY* VAR_4)
{
        EC_KEY* VAR_5;
        const EC_GROUP* VAR_6;




        if(FUNC_5(VAR_3->type) != VAR_0)
                return 0;

        VAR_5 = FUNC_4(VAR_4);
        VAR_6 = FUNC_2(VAR_5);
        if(!VAR_6) {
                FUNC_1(VAR_5);
                return 0;
        }
        if(FUNC_0(VAR_6) == VAR_1) {
                FUNC_1(VAR_5);
                return 32;
 }
        if(FUNC_0(VAR_6) == VAR_2) {
                FUNC_1(VAR_5);
                return 48;
        }

        FUNC_1(VAR_5);
        return 0;
}
