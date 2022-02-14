
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cp_token ;
struct TYPE_7__ {TYPE_1__* lexer; } ;
typedef TYPE_2__ cp_parser ;
struct TYPE_6__ {int in_pragma; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_2 (cp_parser *VAR_1, cp_token *VAR_2)
{
  VAR_1->lexer->in_pragma = 0;
  if (!FUNC_0 (VAR_1, VAR_0, "end of line"))
    FUNC_1 (VAR_1, VAR_2);
}
