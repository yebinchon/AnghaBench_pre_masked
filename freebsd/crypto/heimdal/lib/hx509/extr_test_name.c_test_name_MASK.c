
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hx509_name ;
typedef int hx509_context ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char**) ;
 int FUNC_3 (int ,char const*,int *) ;
 scalar_t__ FUNC_4 (char*,char const*) ;

__attribute__((used)) static int
FUNC_5(hx509_context VAR_0, const char *VAR_1)
{
    hx509_name VAR_2;
    char *VAR_3;
    int VAR_4;

    VAR_4 = FUNC_3(VAR_0, VAR_1, &VAR_2);
    if (VAR_4)
 return 1;

    VAR_4 = FUNC_2(VAR_2, &VAR_3);
    if (VAR_4)
 return 1;

    if (FUNC_4(VAR_3, VAR_1) != 0)
 return 1;

    FUNC_1(&VAR_2);
    FUNC_0(VAR_3);

    return 0;
}
