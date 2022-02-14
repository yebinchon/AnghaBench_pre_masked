
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 scalar_t__ FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(BIO *VAR_0, char *VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    char *VAR_4 = VAR_1;
    char *VAR_5 = VAR_1 + VAR_2 - 1;

    while (VAR_4 < VAR_5 && FUNC_0(VAR_0, VAR_4, 1) > 0) {
        if (*VAR_4++ == '\n')
           break;
    }

    VAR_4[0] = '\0';

    if (VAR_1[0] != '\0')
        VAR_3 = FUNC_1(VAR_1);
    return VAR_3;
}
