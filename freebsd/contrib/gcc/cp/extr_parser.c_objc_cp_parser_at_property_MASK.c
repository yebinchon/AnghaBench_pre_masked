
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_9__ {scalar_t__ type; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_10__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 TYPE_1__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int,scalar_t__) ;
 scalar_t__* VAR_11 ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static void
FUNC_10 (cp_parser *VAR_12)
{
  cp_token *VAR_13;

  FUNC_8 (0, VAR_6);

  FUNC_0 (VAR_12->lexer);
  VAR_13 = FUNC_3 (VAR_12->lexer);
  if (VAR_13->type == VAR_5)
    {
      FUNC_0 (VAR_12->lexer);
      while (VAR_13->type != VAR_0 && VAR_13->type != VAR_3)
 {
    tree VAR_14;


    VAR_14 = FUNC_4 (VAR_12);
    if (VAR_14 == VAR_11 [(int) VAR_9])
     {

       FUNC_8 (1, VAR_6);
     }
   else if (VAR_14 == VAR_11 [(int) VAR_7]
     || VAR_14 == VAR_11 [(int) VAR_10])
     {

       VAR_13 = FUNC_0 (VAR_12->lexer);
       if (VAR_13->type == VAR_4)
  {

    tree VAR_15 = FUNC_5 (VAR_12);
    int VAR_16;
    if (VAR_14 == VAR_11 [(int) VAR_7])
      VAR_16 = 2;
    else
      {
        VAR_16 = 3;

        if (FUNC_1 (VAR_12->lexer, VAR_1))
     FUNC_0 (VAR_12->lexer);
      }
    FUNC_8 (VAR_16, VAR_15);
  }
       else
  {
    FUNC_6 ("getter/setter attribute must be followed by '='");
    break;
  }
     }

   else if (VAR_14 == VAR_11 [(int) VAR_8])
     {
       FUNC_8 (13, VAR_6);
     }

   else
     {
       FUNC_6 ("unknown property attribute");
       break;
     }

   if (FUNC_2 (VAR_12->lexer, VAR_2)
       && FUNC_2 (VAR_12->lexer, VAR_0)
       && FUNC_2 (VAR_12->lexer, VAR_3))
     FUNC_9 (0, "property attributes must be separated by a comma");

   if (FUNC_1 (VAR_12->lexer, VAR_2))
     FUNC_0 (VAR_12->lexer);
   VAR_13 = FUNC_3 (VAR_12->lexer);
 }
 if (VAR_13->type != VAR_0)
   {
     FUNC_6 ("syntax error in @property's attribute declaration");
   }

 FUNC_0 (VAR_12->lexer);
    }
    FUNC_7 (VAR_12);
}
