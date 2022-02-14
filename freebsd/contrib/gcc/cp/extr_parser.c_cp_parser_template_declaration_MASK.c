
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4 (cp_parser* VAR_1, bool VAR_2)
{

  if (FUNC_1 (VAR_1->lexer, VAR_0))
    {

      FUNC_0 (VAR_1->lexer);

      FUNC_3 (0, "keyword %<export%> not implemented, and will be ignored");
    }

  FUNC_2 (VAR_1, VAR_2);
}
