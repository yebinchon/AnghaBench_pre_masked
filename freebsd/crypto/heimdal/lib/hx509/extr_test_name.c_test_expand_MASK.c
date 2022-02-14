
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hx509_name ;
typedef int * hx509_env ;
typedef int hx509_context ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int **,char*,char*) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char**) ;
 int FUNC_6 (int ,char const*,int *) ;
 scalar_t__ FUNC_7 (char*,char const*) ;

__attribute__((used)) static int
FUNC_8(hx509_context VAR_0, const char *VAR_1, const char *VAR_2)
{
    hx509_env VAR_3 = ((void*)0);
    hx509_name VAR_4;
    char *VAR_5;
    int VAR_6;

    FUNC_1(VAR_0, &VAR_3, "uid", "lha");

    VAR_6 = FUNC_6(VAR_0, VAR_1, &VAR_4);
    if (VAR_6)
 return 1;

    VAR_6 = FUNC_3(VAR_0, VAR_4, VAR_3);
    FUNC_2(&VAR_3);
    if (VAR_6)
 return 1;

    VAR_6 = FUNC_5(VAR_4, &VAR_5);
    FUNC_4(&VAR_4);
    if (VAR_6)
 return 1;

    VAR_6 = FUNC_7(VAR_5, VAR_2) != 0;
    FUNC_0(VAR_5);
    if (VAR_6)
 return 1;

    return 0;
}
