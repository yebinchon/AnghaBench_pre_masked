
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hx509_context ;
typedef int hx509_cert ;
typedef int buf ;
typedef int KeyUsage ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int,char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,char*,int) ;

int
FUNC_6(hx509_context VAR_1, hx509_cert VAR_2, char **VAR_3)
{
    KeyUsage VAR_4;
    char VAR_5[256];
    int VAR_6;

    *VAR_3 = ((void*)0);

    VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_4);
    if (VAR_6)
 return VAR_6;
    FUNC_5(FUNC_0(VAR_4), FUNC_2(), VAR_5, sizeof(VAR_5));
    *VAR_3 = FUNC_4(VAR_5);
    if (*VAR_3 == ((void*)0)) {
 FUNC_3(VAR_1, 0, VAR_0, "out of memory");
 return VAR_0;
    }

    return 0;
}
