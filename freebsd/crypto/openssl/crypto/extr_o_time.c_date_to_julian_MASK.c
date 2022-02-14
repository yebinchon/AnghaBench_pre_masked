
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static long FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{
    return (1461 * (VAR_0 + 4800 + (VAR_1 - 14) / 12)) / 4 +
        (367 * (VAR_1 - 2 - 12 * ((VAR_1 - 14) / 12))) / 12 -
        (3 * ((VAR_0 + 4900 + (VAR_1 - 14) / 12) / 100)) / 4 + VAR_2 - 32075;
}
