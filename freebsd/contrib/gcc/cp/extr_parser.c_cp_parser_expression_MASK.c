
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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char*) ;
 int VAR_2 ;

__attribute__((used)) static tree
FUNC_5 (cp_parser* VAR_3, bool VAR_4)
{
  tree VAR_5 = VAR_1;

  while (1)
    {
      tree VAR_6;


      VAR_6
 = FUNC_3 (VAR_3, VAR_4);


      if (!VAR_5)
 VAR_5 = VAR_6;
      else
 VAR_5 = FUNC_0 (VAR_5,
         VAR_6);


      if (FUNC_2 (VAR_3->lexer, VAR_0))
 break;

      FUNC_1 (VAR_3->lexer);

      if (FUNC_4 (VAR_3,
            "a comma operator"))
 VAR_5 = VAR_2;
    }

  return VAR_5;
}
