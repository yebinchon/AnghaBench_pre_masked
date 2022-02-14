
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct suffix_code_t {char const* form; int * suffix; } ;


 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static const char *
FUNC_1(const struct suffix_code_t *VAR_0, const char *VAR_1)
{
 int VAR_2;

 if (VAR_1 == ((void*)0))
  return (((void*)0));
 for (VAR_2 = 0; VAR_0[VAR_2].suffix != ((void*)0); VAR_2++) {
  if (FUNC_0(VAR_0[VAR_2].suffix, VAR_1) == 0)
   return (VAR_0[VAR_2].form);
 }
 return (((void*)0));
}
