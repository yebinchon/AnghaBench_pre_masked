
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_PURPOSE ;
typedef int X509 ;
typedef int BIO ;


 int FUNC_0 (int *,char*,...) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_0, X509 *VAR_1, X509_PURPOSE *VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    const char *VAR_6;
    VAR_3 = FUNC_2(VAR_2);
    VAR_6 = FUNC_1(VAR_2);
    for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
        VAR_5 = FUNC_3(VAR_1, VAR_3, VAR_4);
        FUNC_0(VAR_0, "%s%s : ", VAR_6, VAR_4 ? " CA" : "");
        if (VAR_5 == 1)
            FUNC_0(VAR_0, "Yes\n");
        else if (VAR_5 == 0)
            FUNC_0(VAR_0, "No\n");
        else
            FUNC_0(VAR_0, "Yes (WARNING code=%d)\n", VAR_5);
    }
    return 1;
}
