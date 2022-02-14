
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int tag_scope ;
typedef enum tag_types { ____Placeholder_tag_types } tag_types ;
struct TYPE_20__ {scalar_t__ scope; int lexer; scalar_t__ num_template_parameter_lists; } ;
typedef TYPE_1__ cp_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (int,scalar_t__,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (TYPE_1__*,scalar_t__) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_15 (TYPE_1__*,int) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*,scalar_t__,int,int,int,int,scalar_t__*) ;
 scalar_t__ FUNC_18 (TYPE_1__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__,int) ;
 int FUNC_20 (TYPE_1__*,int,int,int,int) ;
 int FUNC_21 (TYPE_1__*,int,int,int,int) ;
 scalar_t__ FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (TYPE_1__*) ;
 scalar_t__ FUNC_26 (TYPE_1__*,int,int,int) ;
 int FUNC_27 (scalar_t__*,scalar_t__,int) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_28 (scalar_t__,scalar_t__,int,int ) ;
 int VAR_12 ;
 int FUNC_29 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_30 (int ,char*) ;
 scalar_t__ FUNC_31 (int,scalar_t__,int ,int) ;

__attribute__((used)) static tree
FUNC_32 (cp_parser* VAR_20,
         bool VAR_21,
         bool VAR_22)
{
  enum tag_types VAR_23;
  tree VAR_24;
  tree VAR_25 = VAR_3;
  tree VAR_26 = VAR_3;


  if (FUNC_7 (VAR_20->lexer, VAR_5))
    {

      FUNC_5 (VAR_20->lexer);

      VAR_23 = VAR_10;

      VAR_26 = FUNC_8 (VAR_20);
    }

  else if (FUNC_7 (VAR_20->lexer,
        VAR_6))
    {

      FUNC_5 (VAR_20->lexer);

      VAR_23 = VAR_19;

      if (!VAR_14)
 FUNC_29 ("using %<typename%> outside of template");
    }

  else
    {
      VAR_23 = FUNC_12 (VAR_20);
      if (VAR_23 == VAR_12)
 return VAR_11;

      VAR_26 = FUNC_8 (VAR_20);
    }


  FUNC_15 (VAR_20,
                                   0);

  if (VAR_23 == VAR_19)
    {
      if (!FUNC_20 (VAR_20,
                               1,
                               1,
                   1,
         VAR_22))
 return VAR_11;
    }
  else



    FUNC_21 (VAR_20,
                             1,
                             1,
                 1,
      VAR_22);


  if (VAR_23 != VAR_10)
    {
      bool VAR_27 = 0;
      tree VAR_28;


      VAR_27 = FUNC_23 (VAR_20);


      if (!VAR_27)
 FUNC_25 (VAR_20);

      VAR_28 = FUNC_26 (VAR_20, VAR_27,
                               1,
        VAR_22);


      if (!VAR_27 && !FUNC_24 (VAR_20))
 ;



      else if (FUNC_2 (VAR_28) == VAR_7
        && VAR_23 == VAR_19)
 VAR_25 = FUNC_28 (VAR_20->scope, VAR_28,
       VAR_19,
                    VAR_15);
      else
 VAR_25 = FUNC_3 (VAR_28);
    }

  if (!VAR_25)
    {
      VAR_24 = FUNC_16 (VAR_20);

      if (VAR_24 == VAR_11)
 {
   VAR_20->scope = VAR_3;
   return VAR_11;
 }


      if (VAR_23 == VAR_19
   && FUNC_2 (VAR_20->scope) != VAR_2)
 return FUNC_18 (VAR_20, VAR_20->scope,
          VAR_24);

      if (VAR_20->scope)
 {
   tree VAR_29;
   tree VAR_30;

   VAR_29 = FUNC_17 (VAR_20, VAR_24,
     VAR_23,
                     0,
                      0,
                          1,
     &VAR_30);



   if (VAR_30)
     return VAR_11;
   VAR_29 = (FUNC_19
    (VAR_29, VAR_21
    && VAR_20->num_template_parameter_lists));

   if (FUNC_2 (VAR_29) != VAR_9)
     {
       FUNC_14 (VAR_20,
          VAR_20->scope,
          VAR_24);
       return VAR_11;
     }

   if (FUNC_2 (FUNC_3 (VAR_29)) != VAR_8)
            {
              bool VAR_31 = (VAR_20->num_template_parameter_lists
                        || FUNC_1 (VAR_29));
              VAR_25 = FUNC_4 (VAR_23, VAR_29,
                                                      VAR_31);

              if (VAR_25 == VAR_11)
                return VAR_11;
            }

   VAR_25 = FUNC_3 (VAR_29);
 }
      else
 {
   tag_scope VAR_32;
   bool VAR_33;

   if (VAR_21)

     VAR_32 = VAR_18;
   else if (VAR_22
     && FUNC_6 (VAR_20->lexer,
           VAR_1))

     VAR_32 = VAR_16;
   else
     VAR_32 = VAR_17;

   VAR_33 =
     (VAR_20->num_template_parameter_lists
      && (FUNC_22 (VAR_20)
   || FUNC_6 (VAR_20->lexer, VAR_1)));


   if (!FUNC_11 (VAR_20,
                            0))
     return VAR_11;
   VAR_25 = FUNC_31 (VAR_23, VAR_24, VAR_32, VAR_33);
 }
    }

  if (VAR_25 == VAR_11)
    return VAR_11;


  if (VAR_26)
    {
      if (FUNC_2 (VAR_25) == VAR_8)
 FUNC_30 (VAR_4,
   "attributes ignored on uninstantiated type");
      else if (VAR_23 != VAR_10 && FUNC_0 (VAR_25)
        && ! VAR_13)
 FUNC_30 (VAR_4,
   "attributes ignored on template instantiation");
      else if (VAR_22 && FUNC_13 (VAR_20))
 FUNC_27 (&VAR_25, VAR_26, (int) VAR_0);
      else
 FUNC_30 (VAR_4,
   "attributes ignored on elaborated-type-specifier that is not a forward declaration");
    }

  if (VAR_23 != VAR_10)
    FUNC_9 (VAR_23, VAR_25);



  FUNC_10 (VAR_20, VAR_25);

  return VAR_25;
}
