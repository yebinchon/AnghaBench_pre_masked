
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_NAME_ENTRY ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*,char const*) ;
 int * FUNC_2 (char const*,int ) ;
 int VAR_0 ;
 int * FUNC_3 (int **,int *,int,unsigned char const*,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;

X509_NAME_ENTRY *FUNC_5(X509_NAME_ENTRY **VAR_2,
                                               const char *VAR_3, int VAR_4,
                                               const unsigned char *VAR_5,
                                               int VAR_6)
{
    ASN1_OBJECT *VAR_7;
    X509_NAME_ENTRY *VAR_8;

    VAR_7 = FUNC_2(VAR_3, 0);
    if (VAR_7 == ((void*)0)) {
        FUNC_4(VAR_0,
                VAR_1);
        FUNC_1(2, "name=", VAR_3);
        return ((void*)0);
    }
    VAR_8 = FUNC_3(VAR_2, VAR_7, VAR_4, VAR_5, VAR_6);
    FUNC_0(VAR_7);
    return VAR_8;
}
