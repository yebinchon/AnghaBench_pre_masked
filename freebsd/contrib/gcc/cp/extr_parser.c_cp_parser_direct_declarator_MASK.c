
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef scalar_t__ special_function_kind ;
struct TYPE_25__ {scalar_t__ type; int location; } ;
typedef TYPE_1__ cp_token ;
typedef scalar_t__ cp_parser_declarator_kind ;
struct TYPE_26__ {int default_arg_ok_p; int in_declarator_p; unsigned int num_template_parameter_lists; int in_type_id_in_expr_p; scalar_t__ scope; int in_function_body; int lexer; } ;
typedef TYPE_2__ cp_parser ;
typedef int cp_parameter_declarator ;
struct TYPE_27__ {scalar_t__ kind; int id_loc; } ;
typedef TYPE_3__ cp_declarator ;
typedef int cp_cv_quals ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 char* FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_13 ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 TYPE_3__* VAR_15 ;
 int FUNC_13 (int ) ;
 TYPE_1__* FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (TYPE_2__*,int,int*) ;
 int FUNC_16 (TYPE_2__*) ;
 TYPE_3__* FUNC_17 (TYPE_2__*,scalar_t__,int*,int *,int) ;
 scalar_t__ FUNC_18 (TYPE_2__*,int) ;
 int FUNC_19 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_20 (TYPE_2__*) ;
 int * FUNC_21 (TYPE_2__*) ;
 scalar_t__ FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*,scalar_t__,char*) ;
 scalar_t__ VAR_16 ;
 int FUNC_25 (char*,...) ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_26 (scalar_t__) ;
 scalar_t__ FUNC_27 (TYPE_3__*) ;
 int FUNC_28 (char*,scalar_t__,int ,scalar_t__,scalar_t__) ;
 TYPE_3__* FUNC_29 (TYPE_3__*,scalar_t__) ;
 TYPE_3__* FUNC_30 (TYPE_3__*,int *,int ,scalar_t__) ;
 TYPE_3__* FUNC_31 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_32 (scalar_t__) ;
 scalar_t__ FUNC_33 (scalar_t__) ;
 scalar_t__ FUNC_34 (scalar_t__,int) ;
 scalar_t__ FUNC_35 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;

__attribute__((used)) static cp_declarator *
FUNC_36 (cp_parser* VAR_22,
        cp_parser_declarator_kind VAR_23,
        int* VAR_24,
        bool VAR_25)
{
  cp_token *VAR_26;
  cp_declarator *VAR_27 = ((void*)0);
  tree VAR_28 = VAR_10;
  bool VAR_29 = VAR_22->default_arg_ok_p;
  bool VAR_30 = VAR_22->in_declarator_p;
  bool VAR_31 = 1;
  tree VAR_32 = VAR_10;

  while (1)
    {

      VAR_26 = FUNC_14 (VAR_22->lexer);
      if (VAR_26->type == VAR_4)
 {
   if (!VAR_31 || VAR_23 != VAR_8)
     {
       cp_parameter_declarator *VAR_33;
       unsigned VAR_34;







       if (!VAR_25)
  FUNC_23 (VAR_22);


       FUNC_13 (VAR_22->lexer);
       if (VAR_31)
  {


    VAR_22->default_arg_ok_p = 0;
    VAR_22->in_declarator_p = 1;
  }



       VAR_34
  = VAR_22->num_template_parameter_lists;
       VAR_22->num_template_parameter_lists = 0;


       VAR_33 = FUNC_21 (VAR_22);

       VAR_22->num_template_parameter_lists
  = VAR_34;



       if (VAR_25 || FUNC_22 (VAR_22))
  {
    cp_cv_quals VAR_35;
    tree VAR_36;

    if (VAR_24)
      *VAR_24 = *VAR_24 < 0;
    VAR_31 = 0;

    FUNC_24 (VAR_22, VAR_2, "`)'");


    if (VAR_23 != VAR_1)
      {

        VAR_35 = FUNC_16 (VAR_22);
      }
    else
      VAR_35 = VAR_13;



    VAR_36
      = FUNC_20 (VAR_22);


    VAR_27 = FUNC_30 (VAR_27,
           VAR_33,
           VAR_35,
           VAR_36);



    VAR_22->default_arg_ok_p = 0;


    continue;
  }
     }



   if (VAR_31)
     {
       bool VAR_37;

       VAR_22->default_arg_ok_p = VAR_29;
       VAR_22->in_declarator_p = VAR_30;


       FUNC_13 (VAR_22->lexer);

       VAR_37 = VAR_22->in_type_id_in_expr_p;
       VAR_22->in_type_id_in_expr_p = 1;
       VAR_27
  = FUNC_17 (VAR_22, VAR_23, VAR_24,
                         ((void*)0),
     VAR_25);
       VAR_22->in_type_id_in_expr_p = VAR_37;
       VAR_31 = 0;

       if (!FUNC_24 (VAR_22, VAR_2, "`)'"))
  VAR_27 = VAR_15;
       if (VAR_27 == VAR_15)
  break;

       goto handle_declarator;
     }

   else
     break;
 }
      else if ((!VAR_31 || VAR_23 != VAR_8)
        && VAR_26->type == VAR_5)
 {

   tree VAR_38;

   if (VAR_24)
     *VAR_24 = 0;

   VAR_31 = 0;
   VAR_22->default_arg_ok_p = 0;
   VAR_22->in_declarator_p = 1;

   FUNC_13 (VAR_22->lexer);

   VAR_26 = FUNC_14 (VAR_22->lexer);


   if (VAR_26->type != VAR_3)
     {
       bool VAR_39;

       VAR_38
  = FUNC_15 (VAR_22,
                              1,
       &VAR_39);
       if (!VAR_39)
  VAR_38 = FUNC_26 (VAR_38);



       else if (!VAR_22->in_function_body)
  {
    FUNC_25 ("array bound is not an integer constant");
    VAR_38 = VAR_17;
  }
     }
   else
     VAR_38 = VAR_10;

   if (!FUNC_24 (VAR_22, VAR_3, "`]'"))
     {
       VAR_27 = VAR_15;
       break;
     }

   VAR_27 = FUNC_29 (VAR_27, VAR_38);
 }

      else if (VAR_31 && (VAR_23 == VAR_8
    || VAR_23 == VAR_7))

 {
   tree VAR_40;
   tree VAR_41;
   special_function_kind VAR_42;
   bool VAR_43;


   VAR_43 = (VAR_23 == VAR_7);
   if (VAR_43)
     FUNC_23 (VAR_22);
   VAR_41
     = FUNC_18 (VAR_22, VAR_43);
   VAR_40 = VAR_22->scope;
   if (VAR_43)
     {
       if (!FUNC_22 (VAR_22))
  VAR_41 = VAR_17;
       else if (VAR_41
         && (VAR_40
      || (FUNC_4 (VAR_41)
          != VAR_9)))
  {
    FUNC_19 (VAR_22, "expected unqualified-id");
    VAR_41 = VAR_17;
  }
     }

   if (!VAR_41)
     return ((void*)0);
   if (VAR_41 == VAR_17)
     {
       VAR_27 = VAR_15;
       break;
     }

   if (VAR_40 && FUNC_10 ()
       && FUNC_4 (VAR_40) == VAR_11)
     {
       tree VAR_44;


       VAR_44 = FUNC_34 (VAR_40,
                            0);

       if (VAR_44 == VAR_17)
  FUNC_25 ("%<%T::%D%> is not a type",
         FUNC_6 (VAR_40),
         FUNC_7 (VAR_40));
       VAR_40 = VAR_44;
     }

   VAR_42 = VAR_21;
   if (VAR_41)
     {
       tree VAR_45;

       if (VAR_40
    && FUNC_1 (VAR_40))
  VAR_45 = VAR_40;
       else
  VAR_45 = VAR_16;

       if (FUNC_4 (VAR_41) == VAR_12)
  {
    tree VAR_46 = FUNC_5 (VAR_41);
    if (VAR_45 && FUNC_35 (VAR_46, VAR_45))
      {
        if (VAR_40
     && FUNC_0 (VAR_46))
   {
     FUNC_25 ("invalid use of constructor as a template");
     FUNC_28 ("use %<%T::%D%> instead of %<%T::%D%> to "
      "name the constructor in a qualified name",
      VAR_45,
      FUNC_2 (FUNC_8 (VAR_45)),
      VAR_45, VAR_46);
     VAR_27 = VAR_15;
     break;
   }
        else
   VAR_41 = FUNC_11 (VAR_45);
      }
    else
      {




        FUNC_19 (VAR_22, "invalid declarator");
        VAR_27 = VAR_15;
        break;
      }
  }

       if (VAR_45)
  {
    if (FUNC_4 (VAR_41) == VAR_0)
      VAR_42 = VAR_20;
    else if (FUNC_3 (VAR_41))
      VAR_42 = VAR_19;
    else if (


      !FUNC_9 (VAR_45)
      && FUNC_12 (VAR_41,
        VAR_45))
      {
        VAR_41 = FUNC_11 (VAR_45);
        VAR_42 = VAR_18;
      }

    if (VAR_24 && VAR_42 != VAR_21)
      *VAR_24 = -1;
  }
     }
   VAR_27 = FUNC_31 (VAR_40,
        VAR_41,
        VAR_42);
   VAR_27->id_loc = VAR_26->location;

 handle_declarator:;
   VAR_28 = FUNC_27 (VAR_27);
   if (VAR_28)


     VAR_32 = FUNC_33 (VAR_28);
   VAR_22->in_declarator_p = 1;
   if ((VAR_24 && *VAR_24)
       || (VAR_27 && VAR_27->kind == VAR_14))


     VAR_22->default_arg_ok_p = VAR_29;
   else
     VAR_22->default_arg_ok_p = 0;

   VAR_31 = 0;
 }

      else
 break;
    }




  if (!VAR_27 && VAR_23 != VAR_6)
    FUNC_19 (VAR_22, "expected declarator");


  if (VAR_32)
    FUNC_32 (VAR_32);

  VAR_22->default_arg_ok_p = VAR_29;
  VAR_22->in_declarator_p = VAR_30;

  return VAR_27;
}
