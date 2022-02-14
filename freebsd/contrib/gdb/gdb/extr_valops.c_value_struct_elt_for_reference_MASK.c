
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct fn_field {int dummy; } ;
typedef enum noside { ____Placeholder_noside } noside ;
typedef int VALUE_TYPE ;
typedef scalar_t__ LONGEST ;


 scalar_t__ FUNC_0 (struct type*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 struct type* FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*,int) ;
 scalar_t__ FUNC_4 (struct type*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct type*,int) ;
 char* FUNC_6 (struct type*,int) ;
 scalar_t__ FUNC_7 (struct type*,int) ;
 scalar_t__ FUNC_8 (struct type*,int) ;
 struct type* FUNC_9 (struct type*,int) ;
 struct fn_field* FUNC_10 (struct type*,int) ;
 int FUNC_11 (struct type*,int) ;
 char* FUNC_12 (struct type*,int) ;
 int FUNC_13 (struct fn_field*,int) ;
 struct type* FUNC_14 (struct fn_field*,int) ;
 scalar_t__ FUNC_15 (struct fn_field*,int) ;
 int FUNC_16 (struct fn_field*,int) ;
 int FUNC_17 (struct type*) ;
 int FUNC_18 (struct type*) ;
 int FUNC_19 (struct type*) ;
 struct type* FUNC_20 (struct type*) ;
 int VAR_4 ;
 int FUNC_21 (struct type*,int) ;
 scalar_t__ FUNC_22 (char*,char*,int ) ;
 scalar_t__ FUNC_23 (char*,struct type*) ;
 int FUNC_24 (char*,...) ;
 int FUNC_25 (struct type*,struct type*) ;
 int FUNC_26 (int ) ;
 struct symbol* FUNC_27 (int ,int ,int ,int ,int *) ;
 struct value* FUNC_28 (struct symbol*,int ) ;
 scalar_t__ FUNC_29 (char*,char*) ;
 scalar_t__ FUNC_30 (char*,char*,int) ;
 struct value* FUNC_31 (int ,scalar_t__) ;
 struct value* FUNC_32 (struct type*,char*,int) ;
 struct value* FUNC_33 (struct type*,int) ;

__attribute__((used)) static struct value *
FUNC_34 (struct type *VAR_5, int VAR_6,
    struct type *VAR_7, char *VAR_8,
    struct type *VAR_9,
    enum noside VAR_10)
{
  struct type *VAR_11 = VAR_7;
  int VAR_12;
  struct value *VAR_13;

  if (FUNC_4 (VAR_11) != VAR_2
      && FUNC_4 (VAR_11) != VAR_3)
    FUNC_24 ("Internal error: non-aggregate type to value_struct_elt_for_reference");

  for (VAR_12 = FUNC_17 (VAR_11) - 1; VAR_12 >= FUNC_19 (VAR_11); VAR_12--)
    {
      char *VAR_14 = FUNC_6 (VAR_11, VAR_12);

      if (VAR_14 && FUNC_29 (VAR_14, VAR_8) == 0)
 {
   if (FUNC_8 (VAR_11, VAR_12))
     {
       VAR_13 = FUNC_33 (VAR_11, VAR_12);
       if (VAR_13 == ((void*)0))
  FUNC_24 ("static field %s has been optimized out",
         VAR_8);
       return VAR_13;
     }
   if (FUNC_7 (VAR_11, VAR_12))
     FUNC_24 ("pointers to bitfield members not allowed");

   return FUNC_31
     (FUNC_26 (FUNC_25 (FUNC_9 (VAR_11, VAR_12),
       VAR_5)),
      VAR_6 + (LONGEST) (FUNC_5 (VAR_11, VAR_12) >> 3));
 }
    }





  if (FUNC_23 (VAR_8, VAR_11))
    {
      FUNC_24 ("member pointers to destructors not implemented yet");
    }


  while (VAR_9 && FUNC_4 (VAR_9) == VAR_1)
    VAR_9 = FUNC_20 (VAR_9);

  for (VAR_12 = FUNC_18 (VAR_11) - 1; VAR_12 >= 0; --VAR_12)
    {
      char *VAR_15 = FUNC_12 (VAR_11, VAR_12);
      char VAR_16[64];

      if (FUNC_30 (VAR_15, "__", 2) == 0 ||
   FUNC_30 (VAR_15, "op", 2) == 0 ||
   FUNC_30 (VAR_15, "type", 4) == 0)
 {
   if (FUNC_22 (VAR_15, VAR_16, VAR_0))
     VAR_15 = VAR_16;
   else if (FUNC_22 (VAR_15, VAR_16, 0))
     VAR_15 = VAR_16;
 }
      if (VAR_15 && FUNC_29 (VAR_15, VAR_8) == 0)
 {
   int VAR_17 = FUNC_11 (VAR_11, VAR_12);
   struct fn_field *VAR_18 = FUNC_10 (VAR_11, VAR_12);

   FUNC_21 (VAR_11, VAR_12);

   if (VAR_9 == 0 && VAR_17 > 1)
     FUNC_24 ("non-unique member `%s' requires type instantiation", VAR_8);
   if (VAR_9)
     {
       while (VAR_17--)
  if (FUNC_14 (VAR_18, VAR_17) == VAR_9)
    break;
       if (VAR_17 < 0)
  FUNC_24 ("no member function matches that type instantiation");
     }
   else
     VAR_17 = 0;

   if (FUNC_15 (VAR_18, VAR_17))
     {
       return FUNC_31
  (FUNC_26
   (FUNC_25 (FUNC_14 (VAR_18, VAR_17),
          VAR_5)),
   (LONGEST) FUNC_1 (FUNC_16 (VAR_18, VAR_17)));
     }
   else
     {
       struct symbol *VAR_19 = FUNC_27 (FUNC_13 (VAR_18, VAR_17),
      0, VAR_4, 0, ((void*)0));
       if (VAR_19 == ((void*)0))
  {
    VAR_13 = 0;
  }
       else
  {
    VAR_13 = FUNC_28 (VAR_19, 0);





  }
       return VAR_13;
     }
 }
    }
  for (VAR_12 = FUNC_19 (VAR_11) - 1; VAR_12 >= 0; VAR_12--)
    {
      struct value *VAR_20;
      int VAR_21;

      if (FUNC_0 (VAR_11, VAR_12))
 VAR_21 = 0;
      else
 VAR_21 = FUNC_3 (VAR_11, VAR_12) / 8;
      VAR_20 = FUNC_34 (VAR_5,
       VAR_6 + VAR_21,
       FUNC_2 (VAR_11, VAR_12),
       VAR_8,
       VAR_9,
       VAR_10);
      if (VAR_20)
 return VAR_20;
    }





  return FUNC_32 (VAR_7, VAR_8, VAR_10);
}
