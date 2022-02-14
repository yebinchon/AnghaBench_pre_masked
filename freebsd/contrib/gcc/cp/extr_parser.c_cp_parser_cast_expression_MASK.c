
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int tree ;
struct TYPE_12__ {char* type_definition_forbidden_message; int in_type_id_in_expr_p; int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ,char*) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*,int,int,int) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_16 (int ,char*) ;

__attribute__((used)) static tree
FUNC_17 (cp_parser *VAR_10, bool VAR_11, bool VAR_12)
{

  if (FUNC_4 (VAR_10->lexer, VAR_2))
    {
      tree VAR_13 = VAR_3;
      tree VAR_14 = VAR_3;
      bool VAR_15;
      const char *VAR_16;




      FUNC_10 (VAR_10);

      VAR_16 = VAR_10->type_definition_forbidden_message;
      VAR_10->type_definition_forbidden_message
 = "types may not be defined in casts";

      FUNC_3 (VAR_10->lexer);
      FUNC_6 (VAR_10->lexer);



      VAR_15
 = (FUNC_13 (VAR_10, 0, 0,
                          1)
    && FUNC_4 (VAR_10->lexer, VAR_1));

      FUNC_5 (VAR_10->lexer);



      if (VAR_15)
 FUNC_12 (VAR_10);
      else
 {
   bool VAR_17 = VAR_10->in_type_id_in_expr_p;
   VAR_10->in_type_id_in_expr_p = 1;

   VAR_13 = FUNC_14 (VAR_10);

   FUNC_11 (VAR_10, VAR_0, "`)'");
   VAR_10->in_type_id_in_expr_p = VAR_17;
 }


      VAR_10->type_definition_forbidden_message = VAR_16;





      if (!FUNC_7 (VAR_10))
 VAR_14 = FUNC_17 (VAR_10,
                     0,
                  1);

      if (FUNC_9 (VAR_10))
 {

   if (VAR_9
       && !VAR_7
       && !FUNC_0 (VAR_13)
       && VAR_5 != VAR_8)
     FUNC_16 (VAR_4, "use of old-style cast");



   if (!FUNC_2 (VAR_13)
       && (FUNC_8
    (VAR_10,
     "a cast to a type other than an integral or "
     "enumeration type")))
     return VAR_6;


   VAR_14 = FUNC_1 (VAR_13, VAR_14);
   return VAR_14;
 }
    }



  return FUNC_15 (VAR_10, VAR_11, VAR_12);
}
