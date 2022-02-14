
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t
FUNC_0(size_t VAR_0)
{
 VAR_0--;

 VAR_0 |= (VAR_0 >> 1);
 VAR_0 |= (VAR_0 >> 2);
 VAR_0 |= (VAR_0 >> 4);
 VAR_0 |= (VAR_0 >> 8);
 VAR_0 |= (VAR_0 >> 16);

 return (VAR_0 + 1);
}
