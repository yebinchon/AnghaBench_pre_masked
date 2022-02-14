
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ FUNC_2 (char*,char**,int ) ;

__attribute__((used)) static int
FUNC_3(char **VAR_0, int *VAR_1)
{
    int VAR_2 = *VAR_1 + 1;
    char *VAR_3 = VAR_0[VAR_2];
    char *VAR_4 = 0;
    int VAR_5 = 0;

    if (VAR_3 != 0) {
 VAR_5 = (int) FUNC_2(VAR_3, &VAR_4, 0);
 if (VAR_4 == 0 || *VAR_4 != 0)
     VAR_3 = 0;
    }

    if (VAR_3 == 0) {
 char VAR_6[80];
 FUNC_1(VAR_6, "Expected a numeric-parameter for %.20s", VAR_0[*VAR_1]);
 FUNC_0(VAR_6);
    }
    *VAR_1 = VAR_2;
    return VAR_5;
}
