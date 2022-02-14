
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; char** container; } ;
struct demangle_data {char* p; scalar_t__ type; TYPE_1__ vec; } ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (struct demangle_data*) ;
 int FUNC_6 (struct demangle_data*) ;
 int FUNC_7 (struct demangle_data*) ;
 int FUNC_8 (struct demangle_data*) ;
 int FUNC_9 (char*,size_t,char*,char*) ;
 size_t FUNC_10 (char*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,char*,size_t) ;

__attribute__((used)) static bool
FUNC_13(struct demangle_data *VAR_4)
{
 size_t VAR_5;
 bool VAR_6;
 char *VAR_7;

 if (VAR_4 == ((void*)0))
  return (0);

 VAR_6 = 0;
 VAR_7 = ((void*)0);

 FUNC_2(VAR_4->p != ((void*)0) && "d->p (org str) is NULL");

 if (*VAR_4->p == '_' && *(VAR_4->p + 1) == '_') {
  VAR_4->p += 2;

  VAR_4->type = VAR_0;
  if (FUNC_7(VAR_4) == 0)
   return (0);

  if (VAR_4->type == VAR_1 || VAR_4->type == VAR_2 ||
      VAR_4->type == VAR_3)
   return (1);


  VAR_4->p += 2;


  if (*VAR_4->p == 'Q' && FUNC_0(*(VAR_4->p + 1))) {
   ++VAR_4->p;

   FUNC_2(VAR_4->vec.size > 0);

   VAR_5 = FUNC_10(VAR_4->vec.container[VAR_4->vec.size - 1]);
   if ((VAR_7 = FUNC_4(sizeof(char) * (VAR_5 + 1)))
       == ((void*)0))
    return (0);

   FUNC_9(VAR_7, VAR_5 + 1, "%s",
       VAR_4->vec.container[VAR_4->vec.size - 1]);
   FUNC_11(&VAR_4->vec);

   if (FUNC_8(VAR_4) == 0)
    goto clean;

   if (FUNC_1(&VAR_4->vec, "::") == 0)
    goto clean;

   if (FUNC_12(&VAR_4->vec, VAR_7, VAR_5) == 0)
    goto clean;

   VAR_6 = 1;
  } else if (FUNC_0(*VAR_4->p)) {
   FUNC_2(VAR_4->vec.size > 0);

   VAR_5 = FUNC_10(VAR_4->vec.container[VAR_4->vec.size - 1]);
   if ((VAR_7 = FUNC_4(sizeof(char) * (VAR_5 + 1)))
       == ((void*)0))
    return (0);

   FUNC_9(VAR_7, VAR_5 + 1, "%s",
       VAR_4->vec.container[VAR_4->vec.size - 1]);
   FUNC_11(&VAR_4->vec);

   if (FUNC_5(VAR_4) == 0)
    goto clean;

   if (FUNC_1(&VAR_4->vec, "::") == 0)
    goto clean;

   if (FUNC_12(&VAR_4->vec, VAR_7, VAR_5) == 0)
    goto clean;

   VAR_6 = 1;
  }
 } else
  return (FUNC_6(VAR_4));

clean:
 FUNC_3(VAR_7);

 return (VAR_6);
}
