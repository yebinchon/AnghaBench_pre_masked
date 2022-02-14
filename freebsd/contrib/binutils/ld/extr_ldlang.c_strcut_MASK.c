
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_0, char *VAR_1)
{
  VAR_0 = FUNC_1 (VAR_0, VAR_1);

  if (VAR_0)
    {
      char *VAR_2;

      for (VAR_2 = VAR_0 + FUNC_0 (VAR_1); *VAR_2;)
 *VAR_0++ = *VAR_2++;

      *VAR_0 = 0;
    }
}
