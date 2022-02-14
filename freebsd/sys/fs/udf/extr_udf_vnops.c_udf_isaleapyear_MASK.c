
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0)
{
 int VAR_1;

 VAR_1 = (VAR_0 % 4) ? 0 : 1;
 VAR_1 &= (VAR_0 % 100) ? 1 : 0;
 VAR_1 |= (VAR_0 % 400) ? 0 : 1;

 return VAR_1;
}
