
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



__attribute__((used)) static int
FUNC_0(const u_char *VAR_0)
{
 return (VAR_0[0] &~ 3) ? 0 : 6*(1 + (VAR_0[0] & 3));
}
