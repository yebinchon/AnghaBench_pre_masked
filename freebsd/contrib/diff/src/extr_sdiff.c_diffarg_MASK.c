
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const** VAR_1 ;
 int FUNC_0 () ;
 char** FUNC_1 (char const**,size_t) ;

__attribute__((used)) static void
FUNC_2 (char const *VAR_2)
{
  static size_t VAR_3, VAR_4;

  if (VAR_3 == VAR_4)
    {
      if (! VAR_4)
 VAR_4 = 16;
      else if (VAR_0 / (2 * sizeof *VAR_1) <= VAR_4)
 FUNC_0 ();
      else
 VAR_4 *= 2;
      VAR_1 = FUNC_1 (VAR_1, VAR_4 * sizeof *VAR_1);
    }
  VAR_1[VAR_3++] = VAR_2;
}
