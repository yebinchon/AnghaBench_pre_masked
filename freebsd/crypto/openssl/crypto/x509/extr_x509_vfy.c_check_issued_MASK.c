
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chain; } ;
typedef TYPE_1__ X509_STORE_CTX ;
typedef int X509 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(X509_STORE_CTX *VAR_2, X509 *VAR_3, X509 *VAR_4)
{
    int VAR_5;
    if (VAR_3 == VAR_4)
        return FUNC_2(VAR_3);
    VAR_5 = FUNC_0(VAR_4, VAR_3);
    if (VAR_5 == VAR_1) {
        int VAR_6;
        X509 *VAR_7;

        if (FUNC_2(VAR_3) && FUNC_3(VAR_2->chain) == 1)
            return 1;
        for (VAR_6 = 0; VAR_6 < FUNC_3(VAR_2->chain); VAR_6++) {
            VAR_7 = FUNC_4(VAR_2->chain, VAR_6);
            if (VAR_7 == VAR_4 || !FUNC_1(VAR_7, VAR_4)) {
                VAR_5 = VAR_0;
                break;
            }
        }
    }

    return (VAR_5 == VAR_1);
}
