
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_data {char* p; int vec; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct demangle_data*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct demangle_data*) ;
 int FUNC_4 (struct demangle_data*) ;
 int FUNC_5 (struct demangle_data*) ;
 char* FUNC_6 (int *,size_t*) ;
 int FUNC_7 (int *,char*,size_t) ;

__attribute__((used)) static bool
FUNC_8(struct demangle_data *VAR_0)
{
 struct demangle_data VAR_1;
 size_t VAR_2;
 bool VAR_3;
 char *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_0->p == ((void*)0))
  return (0);

 if (FUNC_3(&VAR_1) == 0)
  return (0);

 VAR_3 = 0;
 VAR_4 = ((void*)0);

 VAR_1.p = VAR_0->p;
 if (*VAR_1.p == 'Q') {
  ++VAR_1.p;

  if (FUNC_5(&VAR_1) == 0)
   goto clean;
 } else {
  if (FUNC_4(&VAR_1) == 0)
   goto clean;
 }

 VAR_0->p = VAR_1.p;

 if ((VAR_4 = FUNC_6(&VAR_1.vec, &VAR_2)) == ((void*)0))
  goto clean;

 if (FUNC_7(&VAR_0->vec, VAR_4, VAR_2) == 0)
  goto clean;

 if (FUNC_0(&VAR_0->vec, "::*") == 0)
  goto clean;

 VAR_3 = 1;
clean:
 FUNC_2(VAR_4);
 FUNC_1(&VAR_1);

 return (VAR_3);
}
