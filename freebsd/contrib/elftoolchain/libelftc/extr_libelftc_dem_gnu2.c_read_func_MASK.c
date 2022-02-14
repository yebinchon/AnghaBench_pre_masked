
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_data {char* p; int cnst_fn; int vec; } ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct demangle_data*) ;
 int FUNC_4 (struct demangle_data*) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,char const*,size_t) ;

__attribute__((used)) static bool
FUNC_7(struct demangle_data *VAR_0)
{
 size_t VAR_1;
 const char *VAR_2;
 char *VAR_3;

 if (VAR_0 == ((void*)0))
  return (0);

 FUNC_2(VAR_0->p != ((void*)0) && "d->p (org str) is NULL");
 if ((VAR_3 = FUNC_5(VAR_0->p, "__")) == ((void*)0))
  return (0);

 VAR_1 = VAR_3 - VAR_0->p;
 FUNC_2(VAR_1 != 0);

 VAR_2 = VAR_0->p;

 VAR_0->p = VAR_3 + 2;

 if (*VAR_0->p == 'C') {
  ++VAR_0->p;

  VAR_0->cnst_fn = 1;
 }

 if (*VAR_0->p == 'Q' && FUNC_0(*(VAR_0->p + 1))) {
  ++VAR_0->p;

  if (FUNC_4(VAR_0) == 0)
   return (0);
 } else if (FUNC_0(*VAR_0->p)) {
  if (FUNC_3(VAR_0) == 0)
   return (0);

  if (FUNC_1(&VAR_0->vec, "::") == 0)
   return (0);
 }

 return (FUNC_6(&VAR_0->vec, VAR_2, VAR_1));
}
