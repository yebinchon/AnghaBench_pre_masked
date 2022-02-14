
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_data {char* p; int ptr; int ref; int cnst; int vec; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct demangle_data*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct demangle_data*) ;
 int FUNC_4 (struct demangle_data*) ;
 char* FUNC_5 (int *,size_t*) ;
 int FUNC_6 (int *,char*,size_t) ;

__attribute__((used)) static bool
FUNC_7(struct demangle_data *VAR_1)
{
 struct demangle_data VAR_2;
 size_t VAR_3, VAR_4;
 char *VAR_5, *VAR_6;
 int VAR_7;

 if (VAR_1 == ((void*)0))
  return (0);

 if (FUNC_3(&VAR_2) == 0)
  return (0);

 VAR_2.p = VAR_1->p + 1;
 VAR_7 = 0;
 VAR_5 = ((void*)0);
 VAR_6 = ((void*)0);

 for (;;) {
  if (FUNC_4(&VAR_2) == 0) {
   FUNC_1(&VAR_2);

   return (0);
  }

  if (VAR_2.ptr == 1) {
   if (FUNC_0(&VAR_2.vec, "*") == 0) {
    FUNC_1(&VAR_2);

    return (0);
   }

   VAR_2.ptr = 0;
  }

  if (VAR_2.ref == 1) {
   if (FUNC_0(&VAR_2.vec, "&") == 0) {
    FUNC_1(&VAR_2);

    return (0);
   }

   VAR_2.ref = 0;
  }

  if (VAR_2.cnst == 1) {
   if (FUNC_0(&VAR_2.vec, " const") == 0) {
    FUNC_1(&VAR_2);

    return (0);
   }

   VAR_2.cnst = 0;
  }

  if (*VAR_2.p == '_')
   break;

  if (FUNC_0(&VAR_2.vec, ", ") == 0) {
   FUNC_1(&VAR_2);

   return (0);
  }

  if (++VAR_7 > VAR_0) {

   FUNC_1(&VAR_2);

   return (0);
  }
 }

 VAR_5 = FUNC_5(&VAR_2.vec, &VAR_3);

 VAR_1->p = VAR_2.p + 1;

 FUNC_1(&VAR_2);

 if (FUNC_3(&VAR_2) == 0) {
  FUNC_2(VAR_5);

  return (0);
 }

 VAR_2.p = VAR_1->p;
 VAR_7 = 0;

 if (FUNC_4(&VAR_2) == 0) {
  FUNC_2(VAR_5);
  FUNC_1(&VAR_2);

  return (0);
 }

 VAR_6 = FUNC_5(&VAR_2.vec, &VAR_4);
 VAR_1->p = VAR_2.p;


 FUNC_1(&VAR_2);

 if (FUNC_6(&VAR_1->vec, VAR_6, VAR_4) == 0) {
  FUNC_2(VAR_6);
  FUNC_2(VAR_5);

  return (0);
 }

 FUNC_2(VAR_6);

 if (FUNC_0(&VAR_1->vec, " (*)(") == 0) {
  FUNC_2(VAR_5);

  return (0);
 }

 if (FUNC_6(&VAR_1->vec, VAR_5, VAR_3) == 0) {
  FUNC_2(VAR_5);

  return (0);
 }

 FUNC_2(VAR_5);

 return (FUNC_0(&VAR_1->vec, ")"));
}
