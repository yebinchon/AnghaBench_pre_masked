
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char*,char*,int,char*) ;
 scalar_t__ FUNC_3 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_4(char **VAR_0, int VAR_1)
{
    int VAR_2 = 0;

    if (VAR_1 < FUNC_1(VAR_0)) {
 char VAR_3[80];
 char *VAR_4 = 0;
 VAR_2 = (int) FUNC_3(VAR_0[VAR_1], &VAR_4, 10);

 if (VAR_4 == 0 || *VAR_4 != 0) {
     FUNC_2(VAR_3, "Expected a number for token %d of %.20s", VAR_1, VAR_0[0]);
     FUNC_0(VAR_3);
 }
    }
    return VAR_2;
}
