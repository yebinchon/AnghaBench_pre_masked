
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_NAME_ENTRY ;
typedef int X509_NAME ;


 int * FUNC_0 (int *,char const*,int,unsigned char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int,int) ;

int FUNC_3(X509_NAME *VAR_0, const char *VAR_1, int VAR_2,
                               const unsigned char *VAR_3, int VAR_4, int VAR_5,
                               int VAR_6)
{
    X509_NAME_ENTRY *VAR_7;
    int VAR_8;
    VAR_7 = FUNC_0(((void*)0), VAR_1, VAR_2, VAR_3, VAR_4);
    if (!VAR_7)
        return 0;
    VAR_8 = FUNC_2(VAR_0, VAR_7, VAR_5, VAR_6);
    FUNC_1(VAR_7);
    return VAR_8;
}
