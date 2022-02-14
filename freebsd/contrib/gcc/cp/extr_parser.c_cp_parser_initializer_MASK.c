
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tree ;
struct TYPE_8__ {scalar_t__ type; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_9__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,int*) ;
 int FUNC_4 (TYPE_2__*,int,int,int*) ;
 int VAR_2 ;

__attribute__((used)) static tree
FUNC_5 (cp_parser* VAR_3, bool* VAR_4,
         bool* VAR_5)
{
  cp_token *VAR_6;
  tree VAR_7;


  VAR_6 = FUNC_1 (VAR_3->lexer);



  *VAR_4 = (VAR_6->type == VAR_1);

  *VAR_5 = 0;

  if (VAR_6->type == VAR_0)
    {

      FUNC_0 (VAR_3->lexer);

      VAR_7 = FUNC_3 (VAR_3, VAR_5);
    }
  else if (VAR_6->type == VAR_1)
    VAR_7 = FUNC_4 (VAR_3, 0,
                     0,
          VAR_5);
  else
    {

      FUNC_2 (VAR_3, "expected initializer");
      VAR_7 = VAR_2;
    }

  return VAR_7;
}
