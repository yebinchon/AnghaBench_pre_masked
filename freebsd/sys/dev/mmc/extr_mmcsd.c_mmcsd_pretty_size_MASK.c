
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int off_t ;



__attribute__((used)) static uintmax_t
FUNC_0(off_t VAR_0, char *VAR_1)
{
 uintmax_t VAR_2;
 int VAR_3;
 VAR_2 = VAR_0;
 VAR_1[0] = VAR_1[1] = '\0';
 for (VAR_3 = 0; VAR_3 <= 2 && VAR_2 >= 1000; VAR_3++) {
  VAR_2 = (VAR_2 + 1000 / 2 - 1) / 1000;
  switch (VAR_3) {
  case 0:
   VAR_1[0] = 'k';
   break;
  case 1:
   VAR_1[0] = 'M';
   break;
  case 2:
   VAR_1[0] = 'G';
   break;
  default:
   break;
  }
 }
 return (VAR_2);
}
