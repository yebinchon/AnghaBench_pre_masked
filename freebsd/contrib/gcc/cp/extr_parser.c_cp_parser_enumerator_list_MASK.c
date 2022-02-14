
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct TYPE_4__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (cp_parser* VAR_4, tree VAR_5)
{
  while (1)
    {

      FUNC_3 (VAR_4, VAR_5);



      if (FUNC_2 (VAR_4->lexer, VAR_1))
 break;

      FUNC_0 (VAR_4->lexer);

      if (FUNC_1 (VAR_4->lexer, VAR_0))
 {
   if (VAR_3 && !VAR_2)
     FUNC_4 ("comma at end of enumerator list");
   break;
 }
    }
}
