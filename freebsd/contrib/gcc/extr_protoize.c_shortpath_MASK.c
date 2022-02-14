
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char,char) ;
 char* FUNC_2 (char const*,char const*) ;
 char* VAR_1 ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (size_t) ;

__attribute__((used)) static const char *
FUNC_5 (const char *VAR_2, const char *VAR_3)
{
  char *VAR_4;
  char *VAR_5;
  char *VAR_6 = VAR_1;
  char *VAR_7;
  int VAR_8 = 0;
  size_t VAR_9 = FUNC_3 (VAR_3);

  VAR_7 = FUNC_2 (VAR_2, VAR_3);
  VAR_5 = VAR_4 = FUNC_4 (VAR_9);

  while (*VAR_6 && FUNC_1 (*VAR_6, *VAR_7))
    {
      VAR_6++;
      VAR_7++;
    }
  if (!*VAR_6 && (!*VAR_7 || FUNC_0 (*VAR_7)))
    {

      if (!*VAR_7)
 return ".";
      else
 return ++VAR_7;
    }
  else
    {
      if (*VAR_7)
 {
   --VAR_6;
   --VAR_7;
   while (! FUNC_0 (*VAR_6))
     {
       --VAR_6;
       --VAR_7;
     }
   VAR_6++;
   VAR_7++;
   VAR_8++;
 }


      while (*VAR_6++)
 if (FUNC_0 (*(VAR_6-1)))
   VAR_8++;



      if (VAR_8 * 3 + FUNC_3 (VAR_7) >= VAR_9)
 return VAR_3;


      while (VAR_8--)
 {


   if (VAR_4 + VAR_9 <= VAR_5 + 3)
     return VAR_3;
   *VAR_5++ = '.';
   *VAR_5++ = '.';
   *VAR_5++ = VAR_0;
 }


      do
 {
   if (VAR_4 + VAR_9 <= VAR_5)
     return VAR_3;
 }
      while ((*VAR_5++ = *VAR_7++));

      --VAR_5;
      if (FUNC_0 (*(VAR_5-1)))
 *--VAR_5 = '\0';
      return VAR_4;
    }
}
