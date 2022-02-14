
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (int *,int) ;

__attribute__((used)) static char *
FUNC_3 (const char *VAR_0, ssize_t VAR_1)
{
    if (VAR_1 < 0)
 VAR_1 = FUNC_1(VAR_0);

    char *VAR_2 = FUNC_2(((void*)0), VAR_1 + 1);
    if (VAR_2) {
 FUNC_0(VAR_2, VAR_0, VAR_1);
 VAR_2[VAR_1] = '\0';
    }

    return VAR_2;
}
