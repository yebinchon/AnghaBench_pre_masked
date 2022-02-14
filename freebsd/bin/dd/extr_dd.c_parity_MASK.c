
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



__attribute__((used)) static int
FUNC_0(u_char VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0 ^ (VAR_0 >> 1) ^ (VAR_0 >> 2) ^ (VAR_0 >> 3) ^
     (VAR_0 >> 4) ^ (VAR_0 >> 5) ^ (VAR_0 >> 6) ^ (VAR_0 >> 7);
 return (VAR_1 & 1);
}
