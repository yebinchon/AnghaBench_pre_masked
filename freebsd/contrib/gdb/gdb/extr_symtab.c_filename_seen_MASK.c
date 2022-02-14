
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3 (const char *VAR_0, int VAR_1, int *VAR_2)
{

  static const char **VAR_3 = ((void*)0);



  static int VAR_4 = (256 - 24) / sizeof (char *);

  static int VAR_5;
  const char **VAR_6;

  if (*VAR_2)
    {
      if (VAR_3 == ((void*)0))
 VAR_3 = (const char **) FUNC_1 (VAR_4 * sizeof (*VAR_3));
      VAR_5 = 0;
    }


  for (VAR_6 = VAR_3; VAR_6 < VAR_3 + VAR_5; VAR_6++)
    if (FUNC_0 (*VAR_6, VAR_0) == 0)
      return 1;


  if (VAR_1)
    {
      if (VAR_5 == VAR_4)
 {
   VAR_4 *= 2;
   VAR_3 = (const char **) FUNC_2 ((char *) VAR_3,
       VAR_4 * sizeof (*VAR_3));
 }
      VAR_3[VAR_5++] = VAR_0;
    }

  return 0;
}
