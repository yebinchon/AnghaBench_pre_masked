
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_5__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static tree
FUNC_7 (cp_parser* VAR_3, tree VAR_4)
{
  tree VAR_5 = VAR_2;



  if (FUNC_1 (VAR_3->lexer, VAR_1))
    VAR_5 = FUNC_3 (VAR_3, 0);


  FUNC_2 (VAR_3);

  if (VAR_4
      && FUNC_0 (VAR_3->lexer, VAR_0))


    VAR_5 = FUNC_6 (VAR_5, VAR_4);
  else if (VAR_5)
    VAR_5 = FUNC_4 (VAR_5);
  else
    FUNC_5 ();

  return VAR_5;
}
