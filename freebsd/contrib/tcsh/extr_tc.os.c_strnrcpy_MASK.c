
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static char *
FUNC_1(char *VAR_0, char *VAR_1, size_t VAR_2)
{
    int VAR_3 = FUNC_0(VAR_1);
    if (VAR_2 == 0)
 return VAR_0;

    while (VAR_3 && VAR_2--)
 *--VAR_0 = VAR_1[--VAR_3];

    return (VAR_0);
}
