
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_char ;



__attribute__((used)) static u_long
FUNC_0(u_char *VAR_0, int VAR_1)
{
 u_long VAR_2;
 int VAR_3;

 VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2 = (VAR_2 << 8) | VAR_0[VAR_3];
 return (VAR_2);
}
