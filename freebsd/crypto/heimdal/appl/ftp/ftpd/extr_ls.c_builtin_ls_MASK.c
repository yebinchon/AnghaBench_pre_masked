
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char const**,int,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;

int
FUNC_3(FILE *VAR_0, const char *VAR_1)
{
    int VAR_2;
    int VAR_3;

    if(*VAR_1 == '-') {
 VAR_2 = FUNC_1(VAR_1);
 VAR_1 = ".";
    } else
 VAR_2 = FUNC_1("");

    VAR_3 = FUNC_0(VAR_0, &VAR_1, 1, VAR_2);
    FUNC_2(VAR_0);
    return VAR_3;
}
