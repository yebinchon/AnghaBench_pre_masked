
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
typedef scalar_t__ cp_token_position ;
struct TYPE_5__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static void
FUNC_9 (cp_parser* VAR_2,
      tree VAR_3)
{
  cp_token_position VAR_4 = 0;

  if (FUNC_3 (VAR_2->lexer, VAR_0))
    {
      if (FUNC_1 (VAR_3))
 FUNC_8 ("%qT is not a template", VAR_3);
      else if (FUNC_0 (VAR_3) == VAR_1)
 FUNC_8 ("%qE is not a template", VAR_3);
      else
 FUNC_8 ("invalid template-id");

      if (FUNC_7 (VAR_2))
 VAR_4 = FUNC_5 (VAR_2->lexer, 1);

      FUNC_2 (VAR_2->lexer);

      FUNC_6 (VAR_2);


      if (VAR_4)
 FUNC_4 (VAR_2->lexer, VAR_4);
    }
}
