
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ada_opname_map {char const* mangled; char const* demangled; } ;


 int FUNC_0 (char const*,char const*,int) ;
 int FUNC_1 (char*,size_t,int) ;
 struct ada_opname_map* VAR_0 ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

char *
FUNC_5 (const char *VAR_1)
{
  static char *VAR_2 = ((void*)0);
  static size_t VAR_3 = 0;
  const char *VAR_4;
  int VAR_5;

  if (VAR_1 == ((void*)0))
    return ((void*)0);

  FUNC_1 (VAR_2, VAR_3,
      2 * FUNC_4 (VAR_1) + 10);

  VAR_5 = 0;
  for (VAR_4 = VAR_1; *VAR_4 != '\0'; VAR_4 += 1)
    {
      if (*VAR_4 == '.')
 {
   VAR_2[VAR_5] = VAR_2[VAR_5 + 1] = '_';
   VAR_5 += 2;
 }
      else if (*VAR_4 == '"')
 {
   const struct ada_opname_map *VAR_6;

   for (VAR_6 = VAR_0;
        VAR_6->mangled != ((void*)0) &&
        !FUNC_0 (VAR_6->demangled, VAR_4, FUNC_4 (VAR_6->demangled));
        VAR_4 += 1)
     ;
   if (VAR_6->mangled == ((void*)0))
     FUNC_2 ("invalid Ada operator name: %s", VAR_4);
   FUNC_3 (VAR_2 + VAR_5, VAR_6->mangled);
   VAR_5 += FUNC_4 (VAR_6->mangled);
   break;
 }
      else
 {
   VAR_2[VAR_5] = *VAR_4;
   VAR_5 += 1;
 }
    }

  VAR_2[VAR_5] = '\0';
  return VAR_2;
}
