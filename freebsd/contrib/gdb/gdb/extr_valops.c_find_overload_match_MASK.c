
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct fn_field {int type; } ;
struct cleanup {int dummy; } ;
typedef struct symbol* badness_vector ;
typedef enum oload_classification { ____Placeholder_oload_classification } oload_classification ;




 char* FUNC_0 (struct symbol*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct fn_field*,int) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct value*) ;
 int FUNC_7 (struct symbol**,int,int) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (struct cleanup*) ;
 int FUNC_10 (char*,char const*,...) ;
 int FUNC_11 (struct type**,int,int,int,struct fn_field*,struct symbol**,struct symbol***) ;
 int FUNC_12 (struct type**,int,char*,char const*,struct symbol***,struct symbol***) ;
 int FUNC_13 (int ) ;
 struct cleanup* FUNC_14 (int ,char*) ;
 int FUNC_15 (int,struct fn_field*,int) ;
 struct value* FUNC_16 (struct value*) ;
 struct fn_field* FUNC_17 (struct value**,char*,int ,int*,struct type**,int*) ;
 struct value* FUNC_18 (struct value**,struct fn_field*,int,struct type*,int) ;
 struct value* FUNC_19 (struct value**,struct fn_field*,int,struct type*,int) ;
 int FUNC_20 (char*,char const*,...) ;
 int VAR_1 ;

int
FUNC_21 (struct type **VAR_2, int VAR_3, char *VAR_4, int VAR_5,
       int VAR_6, struct value **VAR_7, struct symbol *VAR_8,
       struct value **VAR_9, struct symbol **VAR_10, int *VAR_11)
{
  struct value *VAR_12 = (VAR_7 ? *VAR_7 : ((void*)0));

  int VAR_13;

  struct badness_vector *VAR_14 = ((void*)0);

  struct value *VAR_15 = VAR_12;
  struct fn_field *VAR_16 = ((void*)0);
  struct symbol **VAR_17 = ((void*)0);
  int VAR_18 = 0;
  struct type *VAR_19 = ((void*)0);
  int VAR_20;
  int VAR_21;
  int VAR_22;
  struct cleanup *VAR_23 = ((void*)0);

  const char *VAR_24 = ((void*)0);
  char *VAR_25 = ((void*)0);
  enum oload_classification VAR_26;


  if (VAR_5)
    {
      VAR_24 = FUNC_4 (FUNC_6 (VAR_12));


      if ((!VAR_24 || !*VAR_24) &&
   (FUNC_1 (FUNC_6 (VAR_12)) == VAR_0))
 VAR_24 = FUNC_4 (FUNC_5 (FUNC_6 (VAR_12)));

      VAR_16 = FUNC_17 (&VAR_15, VAR_4, 0,
           &VAR_18,
           &VAR_19, &VAR_20);
      if (!VAR_16 || !VAR_18)
 FUNC_10 ("Couldn't find method %s%s%s",
        VAR_24,
        (VAR_24 && *VAR_24) ? "::" : "",
        VAR_4);



      FUNC_13 (FUNC_2 (VAR_16[0].type) != ((void*)0));
      VAR_13 = FUNC_11 (VAR_2, VAR_3, VAR_5, VAR_18,
          VAR_16, VAR_17, &VAR_14);
    }
  else
    {
      const char *VAR_27 = FUNC_0 (VAR_8);
      VAR_25 = FUNC_8 (VAR_27);



      if (VAR_25 == ((void*)0))
        {
   *VAR_10 = VAR_8;
          return 0;
        }

      VAR_23 = FUNC_14 (VAR_1, VAR_25);
      FUNC_14 (VAR_1, VAR_17);
      FUNC_14 (VAR_1, VAR_14);

      VAR_13 = FUNC_12 (VAR_2, VAR_3,
      VAR_25,
      VAR_27,
      &VAR_17,
      &VAR_14);
    }



  VAR_26
    = FUNC_7 (VAR_14, VAR_3,
       FUNC_15 (VAR_5, VAR_16,
       VAR_13));

  if (VAR_26 == 129)
    {
      if (VAR_5)
 FUNC_10 ("Cannot resolve method %s%s%s to any overloaded instance",
        VAR_24,
        (VAR_24 && *VAR_24) ? "::" : "",
        VAR_4);
      else
 FUNC_10 ("Cannot resolve function %s to any overloaded instance",
        VAR_25);
    }
  else if (VAR_26 == 128)
    {
      if (VAR_5)
 FUNC_20 ("Using non-standard conversion to match method %s%s%s to supplied arguments",
   VAR_24,
   (VAR_24 && *VAR_24) ? "::" : "",
   VAR_4);
      else
 FUNC_20 ("Using non-standard conversion to match function %s to supplied arguments",
   VAR_25);
    }

  if (VAR_5)
    {
      if (VAR_11 != ((void*)0))
 *VAR_11 = FUNC_15 (VAR_5, VAR_16, VAR_13);
      if (FUNC_3 (VAR_16, VAR_13))
 *VAR_9 = FUNC_19 (&VAR_15, VAR_16, VAR_13, VAR_19, VAR_20);
      else
 *VAR_9 = FUNC_18 (&VAR_15, VAR_16, VAR_13, VAR_19, VAR_20);
    }
  else
    {
      *VAR_10 = VAR_17[VAR_13];
    }

  if (VAR_7)
    {
      if (FUNC_1 (FUNC_6 (VAR_15)) != VAR_0
   && FUNC_1 (FUNC_6 (*VAR_7)) == VAR_0)
 {
   VAR_15 = FUNC_16 (VAR_15);
 }
      *VAR_7 = VAR_15;
    }
  if (VAR_23 != ((void*)0))
    FUNC_9 (VAR_23);

  switch (VAR_26)
    {
    case 129:
      return 100;
    case 128:
      return 10;
    default:
      return 0;
    }
}
