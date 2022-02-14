
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
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,size_t) ;

__attribute__((used)) static bool
FUNC_9(struct demangle_data *VAR_0)
{
 struct demangle_data VAR_1, VAR_2;
 size_t VAR_3, VAR_4;
 bool VAR_5;
 char *VAR_6, *VAR_7;

 if (VAR_0 == ((void*)0))
  return (0);

 if (FUNC_3(&VAR_1) == 0)
  return (0);

 VAR_5 = 0;
 VAR_6 = ((void*)0);
 VAR_7 = ((void*)0);
 if (FUNC_3(&VAR_2) == 0)
  goto clean;

 VAR_2.p = VAR_0->p;
 if (*VAR_2.p == 'Q') {
  ++VAR_2.p;

  if (FUNC_5(&VAR_2) == 0)
   goto clean;


  if (FUNC_7(&VAR_2.vec) == 0)
   goto clean;
 } else {
  if (FUNC_4(&VAR_2) == 0)
   goto clean;


  VAR_2.p += 2;
 }

 if ((VAR_7 = FUNC_6(&VAR_2.vec, &VAR_4)) == ((void*)0))
  goto clean;

 VAR_1.p = VAR_2.p;
 if (*VAR_1.p == 'Q') {
  ++VAR_1.p;

  if (FUNC_5(&VAR_1) == 0)
   goto clean;


  if (FUNC_7(&VAR_1.vec) == 0)
   goto clean;
 } else {
  if (FUNC_4(&VAR_1) == 0)
   goto clean;
 }

 if ((VAR_6 = FUNC_6(&VAR_1.vec, &VAR_3)) == ((void*)0))
  goto clean;

 if (FUNC_8(&VAR_0->vec, VAR_6, VAR_3) == 0)
  goto clean;

 if (FUNC_0(&VAR_0->vec, "::operator ") == 0)
  return (0);

 if (FUNC_8(&VAR_0->vec, VAR_7, VAR_4) == 0)
  goto clean;

 VAR_5 = FUNC_0(&VAR_0->vec, "()");
clean:
 FUNC_2(VAR_7);
 FUNC_2(VAR_6);
 FUNC_1(&VAR_2);
 FUNC_1(&VAR_1);

 return (VAR_5);
}
