
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct TYPE_5__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,int *,int,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static tree
FUNC_8 (cp_parser* VAR_3, bool *VAR_4)
{
  tree VAR_5;

  if (VAR_4 != ((void*)0))
    *VAR_4 = 0;


  if (FUNC_4 (VAR_3->lexer, VAR_1))
    {
      FUNC_3 (VAR_3->lexer);
      VAR_5 = FUNC_0 (FUNC_2 ());
    }

  else if (FUNC_4 (VAR_3->lexer, VAR_0))

    VAR_5 = FUNC_5 (VAR_3, ((void*)0), 0, 0);

  else
    {

      VAR_5 = FUNC_1 (0);

      FUNC_6 (VAR_3, VAR_2, 0, VAR_4);

      FUNC_7 (VAR_5);
    }


  return VAR_5;
}
