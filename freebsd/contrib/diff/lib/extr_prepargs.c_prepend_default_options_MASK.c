
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,char**) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (int) ;

void
FUNC_3 (char const *VAR_0, int *VAR_1, char ***VAR_2)
{
  if (VAR_0)
    {
      char *VAR_3 = FUNC_2 (FUNC_1 (VAR_0) + 1);
      int VAR_4 = FUNC_0 (VAR_0, VAR_3, (char **) 0);
      int VAR_5 = *VAR_1;
      char * const *VAR_6 = *VAR_2;
      char **VAR_7 = (char **) FUNC_2 ((VAR_4 + VAR_5 + 1) * sizeof *VAR_7);
      *VAR_1 = VAR_4 + VAR_5;
      *VAR_2 = VAR_7;
      *VAR_7++ = *VAR_6++;
      VAR_7 += FUNC_0 (VAR_0, VAR_3, VAR_7);
      while ((*VAR_7++ = *VAR_6++))
 continue;
    }
}
