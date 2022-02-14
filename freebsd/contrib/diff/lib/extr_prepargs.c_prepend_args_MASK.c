
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static int
FUNC_1 (char const *VAR_0, char *VAR_1, char **VAR_2)
{
  char const *VAR_3 = VAR_0;
  char *VAR_4 = VAR_1;
  int VAR_5 = 0;

  for (;;)
    {
      while (FUNC_0 ((unsigned char) *VAR_3))
 VAR_3++;
      if (!*VAR_3)
 return VAR_5;
      if (VAR_2)
 VAR_2[VAR_5] = VAR_4;
      VAR_5++;

      do
 if ((*VAR_4++ = *VAR_3++) == '\\' && *VAR_3)
   VAR_4[-1] = *VAR_3++;
      while (*VAR_3 && ! FUNC_0 ((unsigned char) *VAR_3));

      *VAR_4++ = '\0';
    }
}
