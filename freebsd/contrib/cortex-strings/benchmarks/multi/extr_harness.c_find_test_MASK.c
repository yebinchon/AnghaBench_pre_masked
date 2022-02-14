
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int * name; } ;


 scalar_t__ FUNC_0 (int *,char const*) ;
 struct test const* VAR_0 ;

__attribute__((used)) static const struct test *FUNC_1(const char *VAR_1)
{
  if (VAR_1 == ((void*)0))
    {
      return VAR_0 + 0;
    }
  else
    {
      for (const struct test *VAR_2 = VAR_0; VAR_2->name != ((void*)0); VAR_2++)
 {
          if (FUNC_0(VAR_2->name, VAR_1) == 0)
     {
              return VAR_2;
     }
 }
    }

  return ((void*)0);
}
