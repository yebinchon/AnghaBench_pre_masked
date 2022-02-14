
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_NAME_ENTRY ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int VAR_0 ;
 int * FUNC_2 (int **,int *,int,unsigned char const*,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;

X509_NAME_ENTRY *FUNC_4(X509_NAME_ENTRY **VAR_2, int VAR_3,
                                               int VAR_4,
                                               const unsigned char *VAR_5,
                                               int VAR_6)
{
    ASN1_OBJECT *VAR_7;
    X509_NAME_ENTRY *VAR_8;

    VAR_7 = FUNC_1(VAR_3);
    if (VAR_7 == ((void*)0)) {
        FUNC_3(VAR_0, VAR_1);
        return ((void*)0);
    }
    VAR_8 = FUNC_2(VAR_2, VAR_7, VAR_4, VAR_5, VAR_6);
    FUNC_0(VAR_7);
    return VAR_8;
}
