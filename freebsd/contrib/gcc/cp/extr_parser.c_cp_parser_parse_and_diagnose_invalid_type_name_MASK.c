
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int tree ;
struct TYPE_9__ {scalar_t__ scope; int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_5 (TYPE_1__*,int,int,int *,int,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_10 (cp_parser *VAR_2)
{
  tree VAR_3;

  FUNC_7 (VAR_2);
  VAR_3 = FUNC_5 (VAR_2,
                           0,
                           1,
                   ((void*)0),
                     1,
                   0);



  if (!FUNC_2 (VAR_2->lexer, VAR_0)
      || (VAR_2->scope && FUNC_1 (VAR_2->scope)
   && FUNC_9 (VAR_2->scope))
      || FUNC_0 (VAR_3) == VAR_1)
    {
      FUNC_3 (VAR_2);
      return 0;
    }
  if (!FUNC_6 (VAR_2))
    return 0;


  FUNC_4 (VAR_2, VAR_2->scope, VAR_3);


  FUNC_8 (VAR_2);
  return 1;
}
