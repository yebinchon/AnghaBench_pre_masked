
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file_off ;
typedef int FILE ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static long
FUNC_2 (FILE *VAR_3, file_off *VAR_4, int *VAR_5, char **VAR_6)
{
  int VAR_7, VAR_8;
  long VAR_9 = VAR_0;
  unsigned char VAR_10[4];

  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
    {
      if (*VAR_5)
 {
   (*VAR_5)--;
   VAR_7 = *(*VAR_6)++;
 }
      else
 {
   if (VAR_3 == ((void*)0))
     return VAR_0;
   VAR_7 = FUNC_0 (VAR_3);

   if (VAR_7 == VAR_0)
     return VAR_0;
 }

      (*VAR_4)++;
      VAR_10[VAR_8] = VAR_7;
    }

  switch (VAR_1)
    {
    case 'S':
    case 's':
      VAR_9 = VAR_10[0];
      break;
    case 'b':
      VAR_9 = (VAR_10[0] << 8) | VAR_10[1];
      break;
    case 'l':
      VAR_9 = VAR_10[0] | (VAR_10[1] << 8);
      break;
    case 'B':
      VAR_9 = ((long) VAR_10[0] << 24) | ((long) VAR_10[1] << 16) |
 ((long) VAR_10[2] << 8) | VAR_10[3];
      break;
    case 'L':
      VAR_9 = VAR_10[0] | ((long) VAR_10[1] << 8) | ((long) VAR_10[2] << 16) |
 ((long) VAR_10[3] << 24);
      break;
    }

  if (VAR_9 == VAR_0)
    return 0;

  return VAR_9;
}
