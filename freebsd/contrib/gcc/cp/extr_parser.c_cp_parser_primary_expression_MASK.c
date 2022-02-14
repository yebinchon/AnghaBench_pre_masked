
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int tree ;
struct TYPE_24__ {int value; } ;
struct TYPE_25__ {int type; TYPE_1__ u; int keyword; } ;
typedef TYPE_2__ cp_token ;
struct TYPE_26__ {int greater_than_is_operator_p; int non_integral_constant_expression_p; int allow_non_integral_constant_expression_p; int integral_constant_expression_p; int scope; int local_variables_forbidden_p; int lexer; int in_function_body; int translate_strings_p; } ;
typedef TYPE_3__ cp_parser ;
typedef int cp_id_kind ;



 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;

 int const VAR_7 ;



 int const VAR_8 ;
 int VAR_9 ;

 int const VAR_10 ;
 int const VAR_11 ;

 int const VAR_12 ;





 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_17 ;
 int FUNC_2 () ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 TYPE_2__* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,int) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int ,int,int) ;
 int FUNC_15 (TYPE_3__*,char const*) ;
 int FUNC_16 (TYPE_3__*,int) ;
 int FUNC_17 (TYPE_3__*,int,int,int*,int,int) ;
 int FUNC_18 (TYPE_3__*,int ,int ,int,int,int,int *) ;
 int FUNC_19 (TYPE_3__*,char*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*,int ) ;
 int FUNC_22 (TYPE_3__*,int const,char*) ;
 int FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (TYPE_3__*,int ,int) ;
 int FUNC_25 (TYPE_3__*) ;
 int FUNC_26 (char*,...) ;
 int VAR_20 ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ,int ,int ,int *,int ,int ,int *,int,int,int,int,char const**) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ,int) ;
 int FUNC_31 () ;
 int VAR_21 ;
 int FUNC_32 (int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_33 (int ,int ) ;
 int VAR_24 ;
 int FUNC_34 (char*) ;

__attribute__((used)) static tree
FUNC_35 (cp_parser *VAR_25,
         bool VAR_26,
         bool VAR_27,
         bool VAR_28,
         cp_id_kind *VAR_29)
{
  cp_token *VAR_30;


  *VAR_29 = VAR_13;


  VAR_30 = FUNC_8 (VAR_25->lexer);
  switch (VAR_30->type)
    {

    case 141:
      if (VAR_21)
 {
   tree VAR_31 = FUNC_12 (VAR_25);
   return VAR_31;
 }
      FUNC_15 (VAR_25, "expected primary-expression");
      return VAR_20;







    case 152:
    case 143:
    case 148:
      VAR_30 = FUNC_6 (VAR_25->lexer);



      if (FUNC_0 (VAR_30->u.value) == VAR_14
   && VAR_25->integral_constant_expression_p
   && VAR_24)
 {



   if (VAR_27)
     {
       cp_token *VAR_32;

       VAR_32 = FUNC_8 (VAR_25->lexer);
       if (

    VAR_32->type != VAR_3

    && VAR_32->type != VAR_0

    && VAR_32->type != VAR_12

    && VAR_32->type != VAR_1

    && VAR_32->type != VAR_2

    && (VAR_32->type != VAR_6
        || VAR_25->greater_than_is_operator_p))
  VAR_27 = 0;
     }





   if (!VAR_27)
     FUNC_19
       (VAR_25, "floating-point literal");
 }
      return VAR_30->u.value;

    case 145:
    case 142:



      return FUNC_24 (VAR_25,
           VAR_25->translate_strings_p,
           1);

    case 147:
      {
 tree VAR_33;
 bool VAR_34;


 FUNC_6 (VAR_25->lexer);


 VAR_34
   = VAR_25->greater_than_is_operator_p;
 VAR_25->greater_than_is_operator_p = 1;


 if (FUNC_10 (VAR_25)
     && FUNC_7 (VAR_25->lexer, VAR_9))
   {

     if (VAR_24)
       FUNC_34 ("ISO C++ forbids braced-groups within expressions");







     if (!VAR_25->in_function_body)
       FUNC_26 ("statement-expressions are allowed only inside functions");

     VAR_33 = FUNC_2 ();


     FUNC_14 (VAR_25, VAR_33, 0, 0);

     VAR_33 = FUNC_30 (VAR_33, 0);
   }
 else
   {

     VAR_33 = FUNC_16 (VAR_25, VAR_27);





     FUNC_29 (VAR_33);
   }


 VAR_25->greater_than_is_operator_p
   = VAR_34;

 if (!FUNC_22 (VAR_25, VAR_1, "`)'"))
   FUNC_23 (VAR_25);

 return VAR_33;
      }

    case 151:
      switch (VAR_30->keyword)
 {

 case 129:
   FUNC_6 (VAR_25->lexer);
   return VAR_19;
 case 136:
   FUNC_6 (VAR_25->lexer);
   return VAR_18;


 case 134:
   FUNC_6 (VAR_25->lexer);
   return VAR_23;


 case 130:
   FUNC_6 (VAR_25->lexer);
   if (VAR_25->local_variables_forbidden_p)
     {
       FUNC_26 ("%<this%> may not be used in this context");
       return VAR_20;
     }

   if (FUNC_19 (VAR_25,
         "`this'"))
     return VAR_20;
   return FUNC_31 ();



 case 132:
   goto id_expression;

 case 135:
 case 131:
 case 137:







   VAR_30 = FUNC_6 (VAR_25->lexer);

   return FUNC_27 (VAR_30->u.value);

 case 128:
   {
     tree VAR_35;
     tree VAR_36;



     FUNC_6 (VAR_25->lexer);

     FUNC_22 (VAR_25, 147, "`('");

     VAR_35 = FUNC_11 (VAR_25,
                    0);

     FUNC_22 (VAR_25, VAR_3, "`,'");

     VAR_36 = FUNC_25 (VAR_25);

     FUNC_22 (VAR_25, VAR_1, "`)'");


     if (FUNC_19 (VAR_25,
           "`va_arg'"))
       return VAR_20;
     return FUNC_3 (VAR_35, VAR_36);
   }

 case 133:
   return FUNC_13 (VAR_25);


 case 140:
 case 139:
 case 138:
   return FUNC_20 (VAR_25);

 default:
   FUNC_15 (VAR_25, "expected primary-expression");
   return VAR_20;
 }




    case 150:
    case 146:
    case 144:
    case 149:
      {
 tree VAR_37;
 tree VAR_38;
 const char *VAR_39;
 bool VAR_40;
 bool VAR_41;

      id_expression:

 VAR_37
   = FUNC_17 (VAR_25,
                                0,
                                1,
         &VAR_40,
                          0,
                        0);
 if (VAR_37 == VAR_20)
   return VAR_20;
 VAR_30 = FUNC_8 (VAR_25->lexer);
 VAR_41 = (VAR_30->type != VAR_10
  && VAR_30->type != 147
  && VAR_30->type != VAR_5
  && VAR_30->type != VAR_4
  && VAR_30->type != VAR_11
  && VAR_30->type != VAR_7);



 if (FUNC_0 (VAR_37) == VAR_16
   || FUNC_0 (VAR_37) == VAR_17)
   VAR_38 = VAR_37;

 else
   {
     tree VAR_42;

     VAR_38 = FUNC_18 (VAR_25, VAR_37,
       VAR_22,
       VAR_40,
                        0,
                            1,
       &VAR_42);


     if (VAR_42)
       return VAR_20;


     if (FUNC_0 (VAR_38) == VAR_17
  && FUNC_9 (VAR_25, FUNC_1 (VAR_38)))
       return FUNC_21 (VAR_25, VAR_38);



     VAR_38 = FUNC_33 (VAR_38, VAR_37);



     if (FUNC_0 (VAR_38) == VAR_15)
       {
  return VAR_38;
       }


     if (VAR_25->local_variables_forbidden_p
  && FUNC_32 (VAR_38))
       {
  VAR_38 = FUNC_5 (VAR_38);
  if (FUNC_32 (VAR_38))
    {
      FUNC_26 ("local variable %qD may not appear in this context",
      VAR_38);
      return VAR_20;
    }
       }
   }

 VAR_38 = (FUNC_28
  (VAR_37, VAR_38, VAR_25->scope,
   VAR_29,
   VAR_25->integral_constant_expression_p,
   VAR_25->allow_non_integral_constant_expression_p,
   &VAR_25->non_integral_constant_expression_p,
   VAR_40, VAR_41, VAR_26,
   VAR_28,
   &VAR_39));
 if (VAR_39)
   FUNC_15 (VAR_25, VAR_39);
 return VAR_38;
      }


    default:

      if (FUNC_4 ()
   && (VAR_30->type == VAR_10 || VAR_30->type == VAR_8))
 return FUNC_20 (VAR_25);

      FUNC_15 (VAR_25, "expected primary-expression");
      return VAR_20;
    }
}
