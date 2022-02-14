
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int off_t ;



off_t
FUNC_0(char *VAR_0)
{
 uint64_t VAR_1;
 char *VAR_2;
 int VAR_3;

 VAR_1 = 0;
 VAR_3 = 1;
 if (VAR_0 != ((void*)0)) {
  VAR_2 = VAR_0;
  if (*VAR_2 == '-') {
   VAR_3 = -1;
   VAR_2++;
  }


  if ((*VAR_2 >= '0') && (*VAR_2 <= '9')) {


   while ((*VAR_2 >= '0') && (*VAR_2 <= '9'))

    VAR_1 = VAR_1 * 10 + *VAR_2++ - '0';

   switch (*VAR_2) {
   case '\0':
    return VAR_1 * VAR_3;

   case 'B':
   case 'b':
   case 'S':
   case 's':
    return VAR_1 * VAR_3 * 512;

   case 'K':
   case 'k':
    return VAR_1 * VAR_3 * 1024;

   case 'M':
   case 'm':
    return VAR_1 * VAR_3 * 1024 * 1024;

   case 'G':
   case 'g':
    return VAR_1 * VAR_3 * 1024 * 1024 * 1024;
   }
  }
 }

 return (0);
}
