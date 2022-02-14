
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, void *VAR_1)
{
    int VAR_2, VAR_3;

    if (FUNC_0(VAR_0))
 VAR_2 = FUNC_1(VAR_0);
    else
 VAR_2 = *(int *)VAR_0;

    if (FUNC_0(VAR_1))
 VAR_3 = FUNC_1(VAR_1);
    else
 VAR_3 = *(int *)VAR_1;

    return VAR_2 - VAR_3;
}
