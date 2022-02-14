
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pkeys; TYPE_1__* key; } ;
struct TYPE_4__ {int * privatekey; int * x509; } ;
typedef int EVP_PKEY ;
typedef TYPE_2__ CERT ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int * FUNC_11 (int *,size_t*) ;

__attribute__((used)) static int FUNC_12(CERT *VAR_5, EVP_PKEY *VAR_6)
{
    size_t VAR_7;

    if (FUNC_11(VAR_6, &VAR_7) == ((void*)0)) {
        FUNC_7(VAR_3, VAR_4);
        return 0;
    }

    if (VAR_5->pkeys[VAR_7].x509 != ((void*)0)) {
        EVP_PKEY *VAR_8;
        VAR_8 = FUNC_10(VAR_5->pkeys[VAR_7].x509);
        if (VAR_8 == ((void*)0)) {
            FUNC_7(VAR_3, VAR_0);
            return 0;
        }




        FUNC_1(VAR_8, VAR_6);
        FUNC_0();






        if (FUNC_4(VAR_6) == VAR_1
            && FUNC_6(FUNC_3(VAR_6)) & VAR_2) ;
        else

        if (!FUNC_8(VAR_5->pkeys[VAR_7].x509, VAR_6)) {
            FUNC_9(VAR_5->pkeys[VAR_7].x509);
            VAR_5->pkeys[VAR_7].x509 = ((void*)0);
            return 0;
        }
    }

    FUNC_2(VAR_5->pkeys[VAR_7].privatekey);
    FUNC_5(VAR_6);
    VAR_5->pkeys[VAR_7].privatekey = VAR_6;
    VAR_5->key = &VAR_5->pkeys[VAR_7];
    return 1;
}
