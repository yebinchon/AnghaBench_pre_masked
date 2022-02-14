
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct slcompress {int dummy; } ;


 int FUNC_0 (int *,intptr_t,int) ;
 int FUNC_1 (int *,int,int,int ,struct slcompress*,int **,int*) ;

int
FUNC_2(u_char **VAR_0, int VAR_1, u_int VAR_2, struct slcompress *VAR_3)
{
 u_char *VAR_4, *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = VAR_0? *VAR_0: ((void*)0);
 VAR_7 = FUNC_1(VAR_5, VAR_1, VAR_1, VAR_2, VAR_3, &VAR_4, &VAR_6);
 if (VAR_7 < 0)
  return (0);
 if (VAR_7 == 0)
  return (VAR_1);

 VAR_5 += VAR_7;
 VAR_1 -= VAR_7;
 if ((intptr_t)VAR_5 & 3) {
  if (VAR_1 > 0)
   FUNC_0(VAR_5, ((intptr_t)VAR_5 &~ 3), VAR_1);
  VAR_5 = (u_char *)((intptr_t)VAR_5 &~ 3);
 }
 VAR_5 -= VAR_6;
 VAR_1 += VAR_6;
 FUNC_0(VAR_4, VAR_5, VAR_6);

 *VAR_0 = VAR_5;
 return (VAR_1);
}
