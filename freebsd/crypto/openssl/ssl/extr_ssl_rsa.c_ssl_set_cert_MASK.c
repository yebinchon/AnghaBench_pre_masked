
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_5__ {TYPE_1__* pkeys; TYPE_1__* key; } ;
struct TYPE_4__ {int * x509; int * privatekey; } ;
typedef int EVP_PKEY ;
typedef TYPE_2__ CERT ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *,size_t*) ;

__attribute__((used)) static int FUNC_14(CERT *VAR_7, X509 *VAR_8)
{
    EVP_PKEY *VAR_9;
    size_t VAR_10;

    VAR_9 = FUNC_11(VAR_8);
    if (VAR_9 == ((void*)0)) {
        FUNC_8(VAR_2, VAR_6);
        return 0;
    }

    if (FUNC_13(VAR_9, &VAR_10) == ((void*)0)) {
        FUNC_8(VAR_2, VAR_5);
        return 0;
    }

    if (VAR_10 == VAR_3 && !FUNC_0(FUNC_4(VAR_9))) {
        FUNC_8(VAR_2, VAR_4);
        return 0;
    }

    if (VAR_7->pkeys[VAR_10].privatekey != ((void*)0)) {




        FUNC_2(VAR_9, VAR_7->pkeys[VAR_10].privatekey);
        FUNC_1();






        if (FUNC_6(VAR_7->pkeys[VAR_10].privatekey) == VAR_0
            && FUNC_7(FUNC_5(VAR_7->pkeys[VAR_10].privatekey)) &
            VAR_1) ;
        else

        if (!FUNC_9(VAR_8, VAR_7->pkeys[VAR_10].privatekey)) {





            FUNC_3(VAR_7->pkeys[VAR_10].privatekey);
            VAR_7->pkeys[VAR_10].privatekey = ((void*)0);

            FUNC_1();
        }
    }

    FUNC_10(VAR_7->pkeys[VAR_10].x509);
    FUNC_12(VAR_8);
    VAR_7->pkeys[VAR_10].x509 = VAR_8;
    VAR_7->key = &(VAR_7->pkeys[VAR_10]);

    return 1;
}
