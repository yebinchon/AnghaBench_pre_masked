
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;

__attribute__((used)) static size_t
FUNC_1(size_t VAR_0)
{
    if (VAR_0 % 2 == 0)
 VAR_0++;

    while (FUNC_0(VAR_0) == 0)
 VAR_0 += 2;

    return VAR_0;
}
