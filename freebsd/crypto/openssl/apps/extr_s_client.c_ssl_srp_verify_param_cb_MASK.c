
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int amp; scalar_t__ debug; scalar_t__ msg; } ;
typedef int SSL ;
typedef TYPE_1__ SRP_ARG ;
typedef int BIGNUM ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(SSL *VAR_2, void *VAR_3)
{
    SRP_ARG *VAR_4 = (SRP_ARG *)VAR_3;
    BIGNUM *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

    if (((VAR_5 = FUNC_4(VAR_2)) == ((void*)0)) || ((VAR_6 = FUNC_5(VAR_2)) == ((void*)0)))
        return 0;
    if (VAR_4->debug || VAR_4->msg || VAR_4->amp == 1) {
        FUNC_0(VAR_1, "SRP parameters:\n");
        FUNC_0(VAR_1, "\tN=");
        FUNC_2(VAR_1, VAR_5);
        FUNC_0(VAR_1, "\n\tg=");
        FUNC_2(VAR_1, VAR_6);
        FUNC_0(VAR_1, "\n");
    }

    if (FUNC_3(VAR_6, VAR_5))
        return 1;

    if (VAR_4->amp == 1) {
        if (VAR_4->debug)
            FUNC_0(VAR_1,
                       "SRP param N and g are not known params, going to check deeper.\n");






        if (FUNC_1(VAR_6) <= VAR_0 && FUNC_6(VAR_5, VAR_6))
            return 1;
    }
    FUNC_0(VAR_1, "SRP param N and g rejected.\n");
    return 0;
}
