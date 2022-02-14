
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef void* tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_14__ {scalar_t__ type; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_15__ {void* object_scope; void* qualifying_scope; void* scope; int lexer; } ;
typedef TYPE_2__ cp_parser ;
typedef int cp_cv_quals ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int,int,int,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,scalar_t__,char*) ;
 int FUNC_12 (char*,void*) ;

__attribute__((used)) static enum tree_code
FUNC_13 (cp_parser* VAR_8,
   tree* VAR_9,
   cp_cv_quals *VAR_10)
{
  enum tree_code VAR_11 = VAR_3;
  cp_token *VAR_12;


  *VAR_9 = VAR_6;

  *VAR_10 = VAR_7;


  VAR_12 = FUNC_2 (VAR_8->lexer);

  if (VAR_12->type == VAR_2 || VAR_12->type == VAR_1)
    {

      VAR_11 = (VAR_12->type == VAR_1 ? VAR_0 : VAR_4);


      FUNC_1 (VAR_8->lexer);





      if (VAR_11 == VAR_4
   || FUNC_3 (VAR_8))
 *VAR_10 = FUNC_4 (VAR_8);
    }
  else
    {

      FUNC_10 (VAR_8);

      FUNC_7 (VAR_8,
                                0);

      FUNC_8 (VAR_8,
                                  0,
                                  1,
                      0,
                              0);


      if (!FUNC_6 (VAR_8)
   && FUNC_11 (VAR_8, VAR_2, "`*'"))
 {

   VAR_11 = VAR_4;

   if (FUNC_0 (VAR_8->scope) == VAR_5)
     FUNC_12 ("%qD is a namespace", VAR_8->scope);
   else
     {


       *VAR_9 = VAR_8->scope;

       VAR_8->scope = VAR_6;
       VAR_8->qualifying_scope = VAR_6;
       VAR_8->object_scope = VAR_6;

       *VAR_10 = FUNC_4 (VAR_8);
     }
 }

      if (!FUNC_9 (VAR_8))
 FUNC_5 (VAR_8, "expected ptr-operator");
    }

  return VAR_11;
}
