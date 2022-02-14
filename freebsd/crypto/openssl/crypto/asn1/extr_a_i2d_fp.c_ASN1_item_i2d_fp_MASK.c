
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int BIO ;
typedef int ASN1_ITEM ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *,void*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *,int ) ;
 int VAR_2 ;

int FUNC_6(const ASN1_ITEM *VAR_3, FILE *VAR_4, void *VAR_5)
{
    BIO *VAR_6;
    int VAR_7;

    if ((VAR_6 = FUNC_3(FUNC_4())) == ((void*)0)) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }
    FUNC_5(VAR_6, VAR_4, VAR_1);
    VAR_7 = FUNC_0(VAR_3, VAR_6, VAR_5);
    FUNC_2(VAR_6);
    return VAR_7;
}
