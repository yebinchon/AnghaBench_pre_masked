
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, int VAR_1)
{
 u_char *VAR_2 = (u_char *)VAR_0;
 int VAR_3, VAR_4, VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++, VAR_5 += 8)
  if (VAR_2[VAR_3] != 0xff)
   break;
 if (VAR_3 == VAR_1)
  return (VAR_5);
 for (VAR_4 = 7; VAR_4 != 0; VAR_4--, VAR_5++)
  if (!(VAR_2[VAR_3] & (1 << VAR_4)))
   break;
 for (; VAR_4 != 0; VAR_4--)
  if (VAR_2[VAR_3] & (1 << VAR_4))
   return(0);
 VAR_3++;
 for (; VAR_3 < VAR_1; VAR_3++)
  if (VAR_2[VAR_3])
   return(0);
 return (VAR_5);
}
