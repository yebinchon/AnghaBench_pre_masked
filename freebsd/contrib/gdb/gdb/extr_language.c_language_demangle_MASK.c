
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct language_defn {char* (* la_demangle ) (char const*,int) ;} ;


 char* FUNC_0 (char const*,int) ;

char *
FUNC_1 (const struct language_defn *VAR_0,
    const char *VAR_1, int VAR_2)
{
  if (VAR_0 != ((void*)0) && VAR_0->la_demangle)
    return VAR_0->la_demangle (VAR_1, VAR_2);
  return ((void*)0);
}
