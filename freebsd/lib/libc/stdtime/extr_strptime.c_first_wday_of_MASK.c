
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(int VAR_0)
{
 return (((2 * (3 - (VAR_0 / 100) % 4)) + (VAR_0 % 100) +
  ((VAR_0 % 100) / 4) + (FUNC_0(VAR_0) ? 6 : 0) + 1) % 7);
}
