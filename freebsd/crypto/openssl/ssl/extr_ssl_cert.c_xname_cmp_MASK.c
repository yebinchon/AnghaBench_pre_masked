
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_NAME ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int *,unsigned char**) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(const X509_NAME *VAR_0, const X509_NAME *VAR_1)
{
    unsigned char *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
    int VAR_4, VAR_5, VAR_6;




    VAR_4 = FUNC_1((X509_NAME *)VAR_0, &VAR_2);
    VAR_5 = FUNC_1((X509_NAME *)VAR_1, &VAR_3);

    if (VAR_4 < 0 || VAR_5 < 0)
        VAR_6 = -2;
    else if (VAR_4 != VAR_5)
        VAR_6 = VAR_4 - VAR_5;
    else
        VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);

    FUNC_0(VAR_2);
    FUNC_0(VAR_3);

    return VAR_6;
}
