
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tree ;
struct TYPE_6__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;
typedef int CONSTRUCTOR_ELTS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int,int*) ;
 int FUNC_4 (TYPE_1__*,int*) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static tree
FUNC_8 (cp_parser* VAR_4, bool* VAR_5)
{
  tree VAR_6;


  *VAR_5 = 0;



  if (FUNC_2 (VAR_4->lexer, VAR_3))
    {
      VAR_6
 = FUNC_3 (VAR_4,
                              1,
     VAR_5);
      if (!*VAR_5)
 VAR_6 = FUNC_6 (VAR_6);
    }
  else
    {

      FUNC_0 (VAR_4->lexer);

      VAR_6 = FUNC_7 (VAR_0);

      if (FUNC_2 (VAR_4->lexer, VAR_1))
 {

   CONSTRUCTOR_ELTS (VAR_7)
     = FUNC_4 (VAR_4, VAR_5);

   if (FUNC_1 (VAR_4->lexer, VAR_2))
     FUNC_0 (VAR_4->lexer);
 }

      FUNC_5 (VAR_4, VAR_1, "`}'");
    }

  return VAR_6;
}
