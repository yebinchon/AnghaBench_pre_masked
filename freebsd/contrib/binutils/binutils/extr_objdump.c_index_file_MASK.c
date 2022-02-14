
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char** FUNC_0 (char const**,unsigned long) ;

__attribute__((used)) static const char **
FUNC_1 (const char *VAR_1, size_t VAR_2, unsigned int *VAR_3)
{
  const char *VAR_4, *VAR_5, *VAR_6;
  int VAR_7 = 45;
  unsigned int VAR_8;
  const char **VAR_9 = ((void*)0);
  unsigned long VAR_10 = 0;

  VAR_8 = 0;
  VAR_5 = VAR_1;
  VAR_6 = VAR_1 + VAR_2;

  for (VAR_4 = VAR_1; VAR_4 < VAR_6; VAR_4++)
    {
      if (*VAR_4 == '\n')
 {
   if (VAR_4 + 1 < VAR_6 && VAR_4[1] == '\r')
     VAR_4++;
 }
      else if (*VAR_4 == '\r')
 {
   if (VAR_4 + 1 < VAR_6 && VAR_4[1] == '\n')
     VAR_4++;
 }
      else
 continue;



      if (VAR_9 == ((void*)0) || VAR_10 < VAR_8 + 1)
 {
   unsigned long VAR_11;

   VAR_7 -= VAR_0;
   if (VAR_7 <= 1)
     VAR_7 = 1;
   VAR_10 = VAR_2 / VAR_7 + 1;
   if (VAR_10 < VAR_8 + 1)
     VAR_10 = VAR_8 + 1;
   VAR_11 = VAR_10 * sizeof (char *);
   VAR_9 = FUNC_0 (VAR_9, VAR_11);
 }

      VAR_9[VAR_8++] = VAR_5;
      VAR_5 = VAR_4 + 1;
    }

  *VAR_3 = VAR_8;
  return VAR_9;
}
