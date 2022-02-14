
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1 (int VAR_0)
{
    int VAR_1 = 4;

    for (; VAR_0 > 1970; --VAR_0)
 VAR_1 = (VAR_1 + (FUNC_0 (VAR_0) ? 366 : 365)) % 7;
    return VAR_1;
}
