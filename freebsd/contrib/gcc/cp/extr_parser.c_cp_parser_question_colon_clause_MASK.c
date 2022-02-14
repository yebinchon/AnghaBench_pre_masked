
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int tree ;
struct TYPE_7__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int ,char*) ;

__attribute__((used)) static tree
FUNC_7 (cp_parser* VAR_2, tree VAR_3)
{
  tree VAR_4;
  tree VAR_5;


  FUNC_1 (VAR_2->lexer);
  if (FUNC_3 (VAR_2)
      && FUNC_2 (VAR_2->lexer, VAR_0))

    VAR_4 = VAR_1;
  else

    VAR_4 = FUNC_5 (VAR_2, 0);


  FUNC_6 (VAR_2, VAR_0, "`:'");

  VAR_5 = FUNC_4 (VAR_2, 0);


  return FUNC_0 (VAR_3,
       VAR_4,
       VAR_5);
}
