
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_4__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;
typedef scalar_t__ TREE_CHAIN ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6 (cp_parser* VAR_4)
{
  tree VAR_5 = VAR_1;



  if (!FUNC_0 (VAR_2))
    FUNC_4 ("only constructors take base initializers");


  while (1)
    {
      tree VAR_6;


      VAR_6 = FUNC_3 (VAR_4);

      if (VAR_6 != VAR_3)
 {
   TREE_CHAIN (VAR_7) = VAR_5;
   VAR_5 = VAR_7;
 }

      if (FUNC_2 (VAR_4->lexer, VAR_0))
 break;

      FUNC_1 (VAR_4->lexer);
    }


  if (FUNC_0 (VAR_2))
    FUNC_5 (VAR_5);
}
