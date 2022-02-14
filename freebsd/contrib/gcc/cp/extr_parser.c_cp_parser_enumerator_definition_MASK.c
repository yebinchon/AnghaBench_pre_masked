
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_5__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_5 (cp_parser* VAR_3, tree VAR_4)
{
  tree VAR_5;
  tree VAR_6;


  VAR_5 = FUNC_4 (VAR_3);
  if (VAR_5 == VAR_2)
    return;


  if (FUNC_2 (VAR_3->lexer, VAR_0))
    {

      FUNC_1 (VAR_3->lexer);

      VAR_6 = FUNC_3 (VAR_3,
                                   0,
          ((void*)0));
    }
  else
    VAR_6 = VAR_1;


  FUNC_0 (VAR_5, VAR_6, VAR_4);
}
