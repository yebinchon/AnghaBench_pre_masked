
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct type {int dummy; } ;
struct expression {TYPE_1__* elts; } ;
typedef enum noside { ____Placeholder_noside } noside ;
typedef enum exp_opcode { ____Placeholder_exp_opcode } exp_opcode ;
typedef enum ada_attribute { ____Placeholder_ada_attribute } ada_attribute ;
struct TYPE_2__ {int opcode; int string; int longconst; int symbol; struct type* type; } ;
typedef int LONGEST ;






 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct type* VAR_5 ;


 int VAR_6 ;




 int FUNC_1 (int ) ;

 int const FUNC_2 (struct type*) ;


 int const VAR_7 ;

 int const VAR_8 ;

 struct type* FUNC_3 (struct type*) ;





 scalar_t__ FUNC_4 (struct value*) ;
 int FUNC_5 (struct value*) ;
 scalar_t__ FUNC_6 (struct value*) ;
 struct type* FUNC_7 (struct value*) ;
 struct type* FUNC_8 (struct type*) ;
 int FUNC_9 (struct type*) ;
 struct type* FUNC_10 (struct type*,int) ;
 struct value* FUNC_11 (struct value*) ;
 struct value* FUNC_12 (struct value*) ;
 int FUNC_13 (struct type*) ;
 int FUNC_14 (struct type*) ;
 int FUNC_15 (struct type*) ;
 struct type* FUNC_16 (struct type*,int *,int ,int *) ;
 struct value* FUNC_17 (struct type*,int ,scalar_t__,struct value*) ;
 int FUNC_18 (struct type*) ;
 struct type* FUNC_19 (struct value*,int ) ;
 struct value* FUNC_20 (struct value*,struct value*) ;
 struct value* FUNC_21 (struct value*) ;
 struct value* FUNC_22 (struct value*,struct type*,int,struct value**) ;
 struct value* FUNC_23 (struct value*,int *,char*) ;
 struct value* FUNC_24 (struct value*,int,struct value**) ;
 scalar_t__ FUNC_25 (int) ;
 struct value* FUNC_26 (struct type*) ;
 int FUNC_27 (int,struct value*,struct value*) ;
 struct type* VAR_9 ;
 int VAR_10 ;
 struct type* VAR_11 ;
 struct value* FUNC_28 (struct value*,int,struct value**) ;
 struct value* FUNC_29 (struct value*) ;
 struct value* FUNC_30 (struct type*,struct value*) ;
 struct type* FUNC_31 (struct type*) ;
 struct value* FUNC_32 (struct type*,struct value*) ;
 int FUNC_33 (char*,...) ;
 struct value* FUNC_34 (struct type*,struct expression*,int*,int) ;
 struct value* FUNC_35 (struct type*,struct expression*,int*,int) ;
 struct value* FUNC_36 (struct expression*,int*,int) ;
 int FUNC_37 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 struct type* FUNC_38 (int ) ;
 struct type* FUNC_39 (struct type*,int *,int) ;
 struct type* FUNC_40 (struct type*) ;
 int FUNC_41 (int,struct value*) ;
 struct value* FUNC_42 (struct value*) ;
 struct value* FUNC_43 (struct value*,struct value*) ;
 struct value* FUNC_44 (struct value*) ;
 struct value* FUNC_45 (int,int,struct value**) ;
 int FUNC_46 (struct value*) ;
 struct value* FUNC_47 (struct type*,int ,int *) ;
 struct value* FUNC_48 (struct value*,struct value*,int) ;
 struct value* FUNC_49 (struct type*,struct value*) ;
 struct value* FUNC_50 (int ,int ) ;
 int FUNC_51 (struct value*,struct value*) ;
 struct value* FUNC_52 (struct value*) ;
 struct value* FUNC_53 (struct value*,int,int) ;
 struct value* FUNC_54 (struct value*,struct value*) ;
 struct value* FUNC_55 (struct value*,struct value*,int,int ,int ) ;
 struct value* FUNC_56 (struct value*,int,int ) ;
 struct value* FUNC_57 (struct type*,int ) ;

struct value *
FUNC_58 (struct type *VAR_14, struct expression *VAR_15,
       int *VAR_16, enum noside VAR_17)
{
  enum exp_opcode VAR_18;
  enum ada_attribute VAR_19;
  int VAR_20, VAR_21, VAR_22;
  int VAR_23;
  struct value *VAR_24 = ((void*)0), *VAR_25 = ((void*)0), *VAR_26;
  struct type *VAR_27;
  int VAR_28;
  struct value **VAR_29;

  VAR_23 = *VAR_16;
  *VAR_16 += 1;
  VAR_18 = VAR_15->elts[VAR_23].opcode;

  switch (VAR_18)
    {
    default:
      *VAR_16 -= 1;
      return
 FUNC_42 (FUNC_35
        (VAR_14, VAR_15, VAR_16, VAR_17));

    case 131:
      (*VAR_16) += 2;
      VAR_27 = VAR_15->elts[VAR_23 + 1].type;
      VAR_24 = FUNC_34 (VAR_27, VAR_15, VAR_16, VAR_17);
      if (VAR_17 == VAR_4)
 goto nosideret;
      if (VAR_27 != FUNC_31 (FUNC_7 (VAR_24)))
 {
   if (FUNC_14 (VAR_27))
     VAR_24 = FUNC_30 (VAR_27, VAR_24);
   else if (FUNC_14 (FUNC_7 (VAR_24)))
     VAR_24 = FUNC_49 (VAR_27, FUNC_29 (VAR_24));
   else if (FUNC_5 (VAR_24) == VAR_12)
     {





       if (VAR_17 == VAR_2)
  return FUNC_57 (FUNC_40 (VAR_27), VAR_13);
       VAR_24 =
  FUNC_17
  (VAR_27, 0, FUNC_4 (VAR_24) + FUNC_6 (VAR_24), 0);
     }
   else
     VAR_24 = FUNC_49 (VAR_27, VAR_24);
 }
      return VAR_24;







    case 148:
      VAR_24 = FUNC_34 (VAR_5, VAR_15, VAR_16, VAR_17);
      VAR_25 = FUNC_34 (FUNC_7 (VAR_24), VAR_15, VAR_16, VAR_17);
      if (VAR_17 == VAR_4 || VAR_17 == VAR_2)
 return VAR_24;
      if (FUNC_27 (VAR_18, VAR_24, VAR_25))
 return FUNC_55 (VAR_24, VAR_25, VAR_18, VAR_6, VAR_3);
      else
 {
   if (FUNC_14 (FUNC_7 (VAR_24)))
     VAR_25 = FUNC_30 (FUNC_7 (VAR_24), VAR_25);
   else if (FUNC_14 (FUNC_7 (VAR_25)))
     FUNC_33
       ("Fixed-point values must be assigned to fixed-point variables");
   else
     VAR_25 = FUNC_32 (FUNC_7 (VAR_24), VAR_25);
   return FUNC_20 (VAR_24, VAR_25);
 }

    case 149:
      VAR_24 = FUNC_36 (VAR_15, VAR_16, VAR_17);
      VAR_25 = FUNC_36 (VAR_15, VAR_16, VAR_17);
      if (VAR_17 == VAR_4)
 goto nosideret;
      if (FUNC_27 (VAR_18, VAR_24, VAR_25))
 return FUNC_55 (VAR_24, VAR_25, VAR_18, VAR_6, VAR_3);
      else
 {
   if ((FUNC_14 (FUNC_7 (VAR_24))
        || FUNC_14 (FUNC_7 (VAR_25)))
       && FUNC_7 (VAR_24) != FUNC_7 (VAR_25))
     FUNC_33
       ("Operands of fixed-point addition must have the same type");
   return FUNC_49 (FUNC_7 (VAR_24), FUNC_43 (VAR_24, VAR_25));
 }

    case 144:
      VAR_24 = FUNC_36 (VAR_15, VAR_16, VAR_17);
      VAR_25 = FUNC_36 (VAR_15, VAR_16, VAR_17);
      if (VAR_17 == VAR_4)
 goto nosideret;
      if (FUNC_27 (VAR_18, VAR_24, VAR_25))
 return FUNC_55 (VAR_24, VAR_25, VAR_18, VAR_6, VAR_3);
      else
 {
   if ((FUNC_14 (FUNC_7 (VAR_24))
        || FUNC_14 (FUNC_7 (VAR_25)))
       && FUNC_7 (VAR_24) != FUNC_7 (VAR_25))
     FUNC_33
       ("Operands of fixed-point subtraction must have the same type");
   return FUNC_49 (FUNC_7 (VAR_24), FUNC_54 (VAR_24, VAR_25));
 }

    case 145:
    case 147:
      VAR_24 = FUNC_34 (VAR_5, VAR_15, VAR_16, VAR_17);
      VAR_25 = FUNC_34 (VAR_5, VAR_15, VAR_16, VAR_17);
      if (VAR_17 == VAR_4)
 goto nosideret;
      if (FUNC_27 (VAR_18, VAR_24, VAR_25))
 return FUNC_55 (VAR_24, VAR_25, VAR_18, VAR_6, VAR_3);
      else
 if (VAR_17 == VAR_2
     && (VAR_18 == 147 || VAR_18 == VAR_1 || VAR_18 == VAR_0))
 return FUNC_57 (FUNC_7 (VAR_24), VAR_13);
      else
 {
   if (FUNC_14 (FUNC_7 (VAR_24)))
     VAR_24 = FUNC_29 (VAR_24);
   if (FUNC_14 (FUNC_7 (VAR_25)))
     VAR_25 = FUNC_29 (VAR_25);
   return FUNC_48 (VAR_24, VAR_25, VAR_18);
 }

    case 129:
      VAR_24 = FUNC_34 (VAR_5, VAR_15, VAR_16, VAR_17);
      if (VAR_17 == VAR_4)
 goto nosideret;
      if (FUNC_41 (VAR_18, VAR_24))
 return FUNC_56 (VAR_24, VAR_18, VAR_3);
      else if (FUNC_14 (FUNC_7 (VAR_24)))
 return FUNC_49 (FUNC_7 (VAR_24), FUNC_52 (VAR_24));
      else
 return FUNC_52 (VAR_24);
    case 140:
      *VAR_16 -= 1;
      if (VAR_17 == VAR_4)
 {
   *VAR_16 += 4;
   goto nosideret;
 }
      else if (VAR_17 == VAR_2)
 {
   *VAR_16 += 4;
   return FUNC_57
     (FUNC_40
      (FUNC_38 (FUNC_1 (VAR_15->elts[VAR_23 + 2].symbol))),
      VAR_13);
 }
      else
 {
   VAR_24 =
     FUNC_42 (FUNC_35
     (VAR_14, VAR_15, VAR_16, VAR_17));
   return FUNC_17 (FUNC_7 (VAR_24), 0,
         FUNC_4 (VAR_24) +
         FUNC_6 (VAR_24), VAR_24);
 }

    case 143:
      (*VAR_16) += 3;
      VAR_21 = FUNC_37 (VAR_15->elts[VAR_23 + 1].longconst);
      VAR_22 = FUNC_37 (VAR_15->elts[VAR_23 + 2].longconst);
      VAR_28 = VAR_22 - VAR_21 + 1;
      VAR_27 = VAR_14 ? FUNC_31 (VAR_14) : VAR_5;

      VAR_29 =
 (struct value * *) FUNC_25 (sizeof (struct value *) * (VAR_28 + 1));
      for (VAR_20 = 0; VAR_20 == 0 || VAR_20 < VAR_28; VAR_20 += 1)

 {

   VAR_29[VAR_20] = FUNC_36 (VAR_15, VAR_16, VAR_17);
 }
      if (VAR_17 == VAR_4)
 goto nosideret;
      return FUNC_45 (VAR_21, VAR_22, VAR_29);

    case 142:
      (*VAR_16) += 2;



      VAR_28 = FUNC_37 (VAR_15->elts[VAR_23 + 1].longconst);
      VAR_29 =
 (struct value * *) FUNC_25 (sizeof (struct value *) * (VAR_28 + 2));







      if (0)
 {
   FUNC_33 ("unexpected code path, FIXME");
 }
      else
 {
   for (VAR_20 = 0; VAR_20 <= VAR_28; VAR_20 += 1)
     VAR_29[VAR_20] = FUNC_34 (VAR_5, VAR_15, VAR_16, VAR_17);
   VAR_29[VAR_20] = 0;

   if (VAR_17 == VAR_4)
     goto nosideret;
 }

      if (FUNC_2 (FUNC_7 (VAR_29[0])) == VAR_8)
 VAR_29[0] = FUNC_44 (VAR_29[0]);

      if (FUNC_15 (FUNC_7 (VAR_29[0])))
 VAR_29[0] = FUNC_12 (VAR_29[0]);

      VAR_27 = FUNC_31 (FUNC_7 (VAR_29[0]));
      if (FUNC_2 (VAR_27) == 134)
 {
   switch (FUNC_2 (FUNC_31 (FUNC_3 (VAR_27))))
     {
     case 135:
       VAR_27 = FUNC_31 (FUNC_3 (VAR_27));
       break;
     case 136:
       break;
     case 133:
       if (VAR_17 != VAR_2)
  VAR_29[0] = FUNC_21 (VAR_29[0]);
       VAR_27 = FUNC_31 (FUNC_3 (VAR_27));
       break;
     default:
       FUNC_33 ("cannot subscript or call something of type `%s'",
       FUNC_18 (FUNC_7 (VAR_29[0])));
       break;
     }
 }

      switch (FUNC_2 (VAR_27))
 {
 case 135:
   if (VAR_17 == VAR_2)
     return FUNC_26 (FUNC_3 (VAR_27));
   return FUNC_28 (VAR_29[0], VAR_28, VAR_29 + 1);
 case 133:
   {
     int VAR_30 = FUNC_9 (VAR_27);
     VAR_27 = FUNC_10 (VAR_27, VAR_28);
     if (VAR_27 == ((void*)0))
       FUNC_33 ("cannot subscript or call a record");
     if (VAR_30 != VAR_28)
       FUNC_33 ("wrong number of subscripts; expecting %d", VAR_30);
     if (VAR_17 == VAR_2)
       return FUNC_26 (FUNC_8 (VAR_27));
     return
       FUNC_42 (FUNC_24
       (VAR_29[0], VAR_28, VAR_29 + 1));
   }
 case 136:
   if (VAR_17 == VAR_2)
     {
       VAR_27 = FUNC_10 (VAR_27, VAR_28);
       if (VAR_27 == ((void*)0))
  FUNC_33 ("element type of array unknown");
       else
  return FUNC_26 (FUNC_8 (VAR_27));
     }
   return
     FUNC_42 (FUNC_24
     (FUNC_12 (VAR_29[0]),
      VAR_28, VAR_29 + 1));
 case 134:
   VAR_27 = FUNC_39 (FUNC_3 (VAR_27), ((void*)0), 1);
   if (VAR_17 == VAR_2)
     {
       VAR_27 = FUNC_10 (VAR_27, VAR_28);
       if (VAR_27 == ((void*)0))
  FUNC_33 ("element type of array unknown");
       else
  return FUNC_26 (FUNC_8 (VAR_27));
     }
   return
     FUNC_42 (FUNC_22 (VAR_29[0], VAR_27,
         VAR_28, VAR_29 + 1));

 default:
   FUNC_33 ("Internal error in evaluate_subexp");
 }

    case 137:
      {
 struct value *VAR_31 = FUNC_34 (VAR_5, VAR_15, VAR_16, VAR_17);
 int VAR_32
   = FUNC_46 (FUNC_34 (VAR_5, VAR_15, VAR_16, VAR_17));
 int VAR_33
   = FUNC_46 (FUNC_34 (VAR_5, VAR_15, VAR_16, VAR_17));
 if (VAR_17 == VAR_4)
   goto nosideret;


 if (FUNC_2 (FUNC_7 (VAR_31)) == VAR_8
     && FUNC_3 (FUNC_7 (VAR_31)) != ((void*)0)
     && FUNC_2 (FUNC_3 (FUNC_7 (VAR_31))) ==
     136
     && !FUNC_13 (FUNC_31 (FUNC_7 (VAR_31))))
   {
     VAR_31 = FUNC_11 (VAR_31);
   }

 if (VAR_17 == VAR_2 &&
     FUNC_13 (FUNC_31 (FUNC_7 (VAR_31))))
   {

     struct type *VAR_34 = FUNC_19 (VAR_31, 0);
     if (VAR_34 != ((void*)0))
       VAR_31 = FUNC_47 (VAR_34, 0, ((void*)0));
   }
 if (FUNC_13 (FUNC_7 (VAR_31)))
   VAR_31 = FUNC_12 (VAR_31);




 if (FUNC_2 (FUNC_7 (VAR_31)) == 134
     && FUNC_3 (FUNC_7 (VAR_31)) != ((void*)0)
     && FUNC_2 (FUNC_3 (FUNC_7 (VAR_31))) ==
     136)
   {
     VAR_31 = FUNC_21 (VAR_31);
   }

 if (VAR_17 == VAR_2)


   return VAR_31;
 else
   return FUNC_53 (VAR_31, VAR_32, VAR_33 - VAR_32 + 1);
      }
    case 146:
      VAR_24 = FUNC_34 (VAR_5, VAR_15, VAR_16, VAR_17);
      VAR_25 = FUNC_34 (VAR_5, VAR_15, VAR_16, VAR_17);
      if (VAR_17 == VAR_4)
 goto nosideret;
      if (FUNC_27 (VAR_18, VAR_24, VAR_25))
 return FUNC_42 (FUNC_55 (VAR_24, VAR_25, VAR_18, VAR_6,
         VAR_3));
      else if (VAR_17 == VAR_2)
 return FUNC_57 (FUNC_7 (VAR_24), VAR_13);
      else
 return FUNC_48 (VAR_24, VAR_25, VAR_18);

    case 128:
      VAR_24 = FUNC_34 (VAR_5, VAR_15, VAR_16, VAR_17);
      if (VAR_17 == VAR_4)
 goto nosideret;
      if (FUNC_41 (VAR_18, VAR_24))
 return FUNC_42 (FUNC_56 (VAR_24, VAR_18, VAR_3));
      else
 return VAR_24;

    case 132:
      VAR_24 = FUNC_34 (VAR_5, VAR_15, VAR_16, VAR_17);
      if (VAR_17 == VAR_4)
 goto nosideret;
      if (FUNC_51 (VAR_24, FUNC_57 (FUNC_7 (VAR_24), VAR_13)))
 return FUNC_52 (VAR_24);
      else
 return VAR_24;

    case 130:
      if (VAR_14 && FUNC_2 (VAR_14) == 134)
 VAR_14 = FUNC_3 (FUNC_31 (VAR_14));
      VAR_24 = FUNC_34 (VAR_14, VAR_15, VAR_16, VAR_17);
      if (VAR_17 == VAR_4)
 goto nosideret;
      VAR_27 = FUNC_31 (FUNC_7 (VAR_24));
      if (VAR_17 == VAR_2)
 {
   if (FUNC_13 (VAR_27))

     {
       struct type *VAR_35 = FUNC_19 (VAR_24, 0);
       if (VAR_35 == ((void*)0))
  FUNC_33 ("Attempt to dereference null array pointer.");
       return FUNC_47 (VAR_35, 0, ((void*)0));
     }
   else if (FUNC_2 (VAR_27) == 134
     || FUNC_2 (VAR_27) == VAR_8

     || FUNC_2 (VAR_27) == 136)
     return
       FUNC_57
       (FUNC_40
        (FUNC_8 (FUNC_31 (FUNC_3 (VAR_27)))),
        VAR_12);
   else if (FUNC_2 (VAR_27) == VAR_7)

     return FUNC_57 (VAR_9, VAR_12);
   else
     FUNC_33 ("Attempt to take contents of a non-pointer value.");
 }
      VAR_24 = FUNC_11 (VAR_24);
      VAR_27 = FUNC_31 (FUNC_7 (VAR_24));

      if (FUNC_13 (VAR_27))

 return FUNC_12 (VAR_24);
      else
 return FUNC_21 (VAR_24);

    case 138:
      VAR_20 = FUNC_37 (VAR_15->elts[VAR_23 + 1].longconst);
      (*VAR_16) += 3 + FUNC_0 (VAR_20 + 1);
      VAR_24 = FUNC_34 (VAR_5, VAR_15, VAR_16, VAR_17);
      if (VAR_17 == VAR_4)
 goto nosideret;
      if (VAR_17 == VAR_2)
 return FUNC_57 (FUNC_8
      (FUNC_16 (FUNC_7 (VAR_24),
       &VAR_15->elts[VAR_23 +
           2].string,
       0, ((void*)0))),
      VAR_12);
      else
 return FUNC_42 (FUNC_23 (VAR_24,
         &VAR_15->elts[VAR_23 + 2].string,
         "record"));
    case 141:


      (*VAR_16) += 2;
      if (VAR_17 == VAR_4)
 goto nosideret;
      else if (VAR_17 == VAR_2)
 return FUNC_26 (VAR_11);
      else
 FUNC_33 ("Attempt to use a type name as an expression");

    case 139:
      VAR_20 = FUNC_37 (VAR_15->elts[VAR_23 + 1].longconst);
      (*VAR_16) += 3 + FUNC_0 (VAR_20 + 1);
      VAR_24 = FUNC_34 (VAR_5, VAR_15, VAR_16, VAR_17);
      if (VAR_17 == VAR_4)
 goto nosideret;
      if (VAR_17 == VAR_2)
 return FUNC_57 (FUNC_8
      (FUNC_16 (FUNC_7 (VAR_24),
       &VAR_15->elts[VAR_23 +
           2].string,
       0, ((void*)0))),
      VAR_12);
      else
 return FUNC_42 (FUNC_23 (VAR_24,
         &VAR_15->elts[VAR_23 + 2].string,
         "record access"));
    }

nosideret:
  return FUNC_50 (VAR_10, (LONGEST) 1);
}
