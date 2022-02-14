
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; char** container; } ;
struct demangle_data {char* p; scalar_t__ type; int cnst_fn; TYPE_1__ vec; } ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 (struct demangle_data*) ;
 int FUNC_7 (struct demangle_data*) ;
 int FUNC_8 (struct demangle_data*) ;
 int FUNC_9 (struct demangle_data*) ;
 int FUNC_10 (char*,size_t,char*,char*) ;
 size_t FUNC_11 (char*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,char*,size_t) ;

__attribute__((used)) static bool
FUNC_14(struct demangle_data *VAR_8)
{
 size_t VAR_9;
 bool VAR_10;
 char *VAR_11;

 if (VAR_8 == ((void*)0))
  return (0);

 VAR_10 = 0;
 VAR_11 = ((void*)0);

 FUNC_2(VAR_8->p != ((void*)0) && "d->p (org str) is NULL");

 if (*VAR_8->p == '_' && *(VAR_8->p + 1) == '_') {
  VAR_8->p += 2;


  if (*VAR_8->p == 'Q' && FUNC_0(*(VAR_8->p + 1))) {
   ++VAR_8->p;
   VAR_8->type = VAR_2;

   if (FUNC_9(VAR_8) == 0)
    return (0);

   return (FUNC_12(&VAR_8->vec));
  } else if (FUNC_0(*VAR_8->p)) {
   VAR_8->type = VAR_2;

   return (FUNC_6(VAR_8));
  }

  VAR_8->type = VAR_1;
  if (FUNC_8(VAR_8) == 0) {

   VAR_8->type = VAR_0;

   if (FUNC_1(&VAR_8->vec, "__") == 0)
    return (0);

   return (FUNC_7(VAR_8));
  }

  if (VAR_8->type == VAR_6 ||
      VAR_8->type == VAR_4 ||
      VAR_8->type == VAR_5)
   return (1);


  VAR_8->p += 2;

  if (*VAR_8->p == 'C') {
   ++VAR_8->p;

   VAR_8->cnst_fn = 1;
  }


  if (*VAR_8->p == 'Q' && FUNC_0(*(VAR_8->p + 1))) {
   ++VAR_8->p;

   FUNC_2(VAR_8->vec.size > 0);

   VAR_9 = FUNC_11(VAR_8->vec.container[VAR_8->vec.size - 1]);
   if ((VAR_11 = FUNC_4(sizeof(char) * (VAR_9 + 1)))
       == ((void*)0))
    return (0);

   FUNC_10(VAR_11, VAR_9 + 1, "%s",
       VAR_8->vec.container[VAR_8->vec.size - 1]);
   FUNC_12(&VAR_8->vec);

   if (FUNC_9(VAR_8) == 0)
    goto clean;

   if (FUNC_1(&VAR_8->vec, "::") == 0)
    goto clean;

   if (FUNC_13(&VAR_8->vec, VAR_11, VAR_9) == 0)
    goto clean;

   VAR_10 = 1;
  } else if (FUNC_0(*VAR_8->p)) {
   FUNC_2(VAR_8->vec.size > 0);

   VAR_9 = FUNC_11(VAR_8->vec.container[VAR_8->vec.size - 1]);
   if ((VAR_11 = FUNC_4(sizeof(char) * (VAR_9 + 1)))
       == ((void*)0))
    return (0);

   FUNC_10(VAR_11, VAR_9 + 1, "%s",
       VAR_8->vec.container[VAR_8->vec.size - 1]);
   FUNC_12(&VAR_8->vec);

   if (FUNC_6(VAR_8) == 0)
    goto clean;

   if (FUNC_1(&VAR_8->vec, "::") == 0)
    goto clean;

   if (FUNC_13(&VAR_8->vec, VAR_11, VAR_9) == 0)
    goto clean;

   VAR_10 = 1;
  }
 } else if (FUNC_5(VAR_8->p, "_$_", 3) == 0) {

  VAR_8->p += 3;
  VAR_8->type = VAR_3;

  if (*VAR_8->p == 'Q' && FUNC_0(*(VAR_8->p + 1))) {
   ++VAR_8->p;

   if (FUNC_9(VAR_8) == 0)
    return (0);

   return (FUNC_12(&VAR_8->vec));
  } else if (FUNC_0(*VAR_8->p))
   return (FUNC_6(VAR_8));

  return (0);
 } else if (FUNC_5(VAR_8->p, "_vt$", 4) == 0) {

  VAR_8->p += 4;
  VAR_8->type = VAR_7;

  if (*VAR_8->p == 'Q' && FUNC_0(*(VAR_8->p + 1))) {
   ++VAR_8->p;

   if (FUNC_9(VAR_8) == 0)
    return (0);

   if (FUNC_12(&VAR_8->vec) == 0)
    return (0);
  } else if (FUNC_0(*VAR_8->p)) {
   if (FUNC_6(VAR_8) == 0)
    return (0);
  }

  return (FUNC_1(&VAR_8->vec, " virtual table"));
 } else
  return (FUNC_7(VAR_8));
clean:
 FUNC_3(VAR_11);

 return (VAR_10);
}
