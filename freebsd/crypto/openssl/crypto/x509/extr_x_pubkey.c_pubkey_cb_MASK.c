
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pkey; } ;
typedef TYPE_1__ X509_PUBKEY ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(int VAR_2, ASN1_VALUE **VAR_3, const ASN1_ITEM *VAR_4,
                     void *VAR_5)
{
    if (VAR_2 == VAR_1) {
        X509_PUBKEY *VAR_6 = (X509_PUBKEY *)*VAR_3;
        FUNC_2(VAR_6->pkey);
    } else if (VAR_2 == VAR_0) {

        X509_PUBKEY *VAR_7 = (X509_PUBKEY *)*VAR_3;
        FUNC_2(VAR_7->pkey);
        VAR_7->pkey = ((void*)0);





        FUNC_1();
        if (FUNC_3(&VAR_7->pkey, VAR_7) == -1)
            return 0;
        FUNC_0();
    }
    return 1;
}
