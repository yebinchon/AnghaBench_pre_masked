
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int,int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 char** FUNC_2 (char const**,int) ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_4, int VAR_5, int VAR_6)
{
  if (VAR_1 + 1 == VAR_2)
    VAR_0 = FUNC_2 (VAR_0, (VAR_2 *= 2) * sizeof (const char *));

  VAR_0[VAR_1++] = VAR_4;
  VAR_0[VAR_1] = 0;

  if (FUNC_1 (VAR_4, "-o") == 0)
    VAR_3 = VAR_1;
  if (VAR_5 || VAR_6)
    FUNC_0 (VAR_4, VAR_5, VAR_6);
}
