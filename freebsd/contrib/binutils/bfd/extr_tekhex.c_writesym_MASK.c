
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static void
FUNC_1 (char **VAR_1, const char *VAR_2)
{
  char *VAR_3 = *VAR_1;
  int VAR_4 = (VAR_2 ? FUNC_0 (VAR_2) : 0);

  if (VAR_4 >= 16)
    {
      *VAR_3++ = '0';
      VAR_4 = 16;
    }
  else
    {
      if (VAR_4 == 0)
 {
   *VAR_3++ = '1';
   VAR_2 = "$";
   VAR_4 = 1;
 }
      else
 *VAR_3++ = VAR_0[VAR_4];
    }

  while (VAR_4--)
    *VAR_3++ = *VAR_2++;

  *VAR_1 = VAR_3;
}
