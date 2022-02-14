
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int* VAR_0 ;

__attribute__((used)) static ssize_t
FUNC_0(const unsigned char *VAR_1, ssize_t VAR_2, ssize_t *VAR_3)
{
 ssize_t VAR_4;

 VAR_4 = 0;
 while (VAR_4 < VAR_2) {
  switch (VAR_0[*VAR_1]) {
  case 0:
   if (VAR_3 != ((void*)0))
    *VAR_3 = 0;
   return (-1);
  case '\r':
   if (VAR_2-VAR_4 > 1 && VAR_1[1] == '\n') {
    if (VAR_3 != ((void*)0))
     *VAR_3 = 2;
    return (VAR_4+2);
   }

  case '\n':
   if (VAR_3 != ((void*)0))
    *VAR_3 = 1;
   return (VAR_4+1);
  case 1:
   VAR_1++;
   VAR_4++;
   break;
  }
 }
 if (VAR_3 != ((void*)0))
  *VAR_3 = 0;
 return (VAR_2);
}
