
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spec_function {int * name; } ;


 struct spec_function* VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static const struct spec_function *
FUNC_1 (const char *VAR_1)
{
  const struct spec_function *VAR_2;

  for (VAR_2 = VAR_0; VAR_2->name != ((void*)0); VAR_2++)
    if (FUNC_0 (VAR_2->name, VAR_1) == 0)
      return VAR_2;

  return ((void*)0);
}
