
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* caddr_t ;


 int FUNC_0 (int*) ;

int
FUNC_1(void *VAR_0, void *VAR_1)
{
 caddr_t VAR_2 = VAR_0, VAR_3 = VAR_1;
 caddr_t VAR_4, VAR_5 = VAR_4 = VAR_3 + FUNC_0(VAR_3);
 int VAR_6 = FUNC_0(VAR_3++) - FUNC_0(VAR_2++);
 int VAR_7 = 1;

 if (VAR_6 > 0)
  VAR_4 -= VAR_6;
 while (VAR_3 < VAR_4) {
  if (*VAR_3 & ~(*VAR_2))
   return (0);
  if (*VAR_3++ != *VAR_2++)
   VAR_7 = 0;
 }
 while (VAR_3 < VAR_5)
  if (*VAR_3++)
   return (0);
 if (VAR_7 && (VAR_6 < 0))
  for (VAR_5 = VAR_2 - VAR_6; VAR_2 < VAR_5; )
   if (*VAR_2++)
    return (1);
 return (!VAR_7);
}
