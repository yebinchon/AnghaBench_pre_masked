
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int const*) ;
 int * FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *,int *,int) ;

int FUNC_7(BIO *VAR_3, ASN1_VALUE *VAR_4, BIO *VAR_5, int VAR_6,
                        const ASN1_ITEM *VAR_7)
{

    if (VAR_6 & VAR_2) {
        BIO *VAR_8, *VAR_9;
        VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_7);
        if (!VAR_8) {
            FUNC_1(VAR_0, VAR_1);
            return 0;
        }
        FUNC_6(VAR_5, VAR_8, VAR_6);
        (void)FUNC_2(VAR_8);

        do {
            VAR_9 = FUNC_5(VAR_8);
            FUNC_3(VAR_8);
            VAR_8 = VAR_9;
        } while (VAR_8 != VAR_3);
    }




    else
        FUNC_0(VAR_7, VAR_3, VAR_4);
    return 1;
}
