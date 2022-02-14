
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int const*,int *,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static ASN1_VALUE *FUNC_8(BIO *VAR_3, const ASN1_ITEM *VAR_4)
{
    BIO *VAR_5;
    ASN1_VALUE *VAR_6;

    if ((VAR_5 = FUNC_5(FUNC_2())) == ((void*)0)) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }
    VAR_3 = FUNC_7(VAR_5, VAR_3);
    VAR_6 = FUNC_0(VAR_4, VAR_3, ((void*)0));
    if (!VAR_6)
        FUNC_1(VAR_0, VAR_1);
    (void)FUNC_3(VAR_3);
    FUNC_6(VAR_3);
    FUNC_4(VAR_5);
    return VAR_6;
}
