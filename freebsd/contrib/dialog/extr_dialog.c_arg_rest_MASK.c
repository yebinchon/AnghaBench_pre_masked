
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_2(char *VAR_1[])
{
    int VAR_2 = 1;

    while (VAR_1[VAR_2] != 0
    && (!FUNC_0(VAR_1[VAR_2]) || FUNC_1(VAR_1[VAR_2], 7) == VAR_0))
 VAR_2++;
    return VAR_2;
}
