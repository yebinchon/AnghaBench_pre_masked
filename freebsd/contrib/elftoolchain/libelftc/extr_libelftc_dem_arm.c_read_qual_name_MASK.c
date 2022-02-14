
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_data {int* p; int vec; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct demangle_data*) ;

__attribute__((used)) static bool
FUNC_3(struct demangle_data *VAR_0)
{
 int VAR_1;
 char VAR_2;

 if (VAR_0 == ((void*)0))
  return (0);

 FUNC_1(VAR_0->p != ((void*)0) && "d->p (org str) is NULL");
 FUNC_1(*VAR_0->p > 48 && *VAR_0->p < 58 && "*d->p not in ASCII numeric range");

 VAR_2 = *VAR_0->p - 48;

 FUNC_1(VAR_2 > 0);

 ++VAR_0->p;
 for (VAR_1 = 0; VAR_1 < VAR_2 ; ++VAR_1) {
  if (FUNC_2(VAR_0) == 0)
   return (0);

  if (FUNC_0(&VAR_0->vec, "::") == 0)
   return (0);
 }

 if (*VAR_0->p != '\0')
  VAR_0->p = VAR_0->p + 2;

 return (1);
}
