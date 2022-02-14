
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_10__ {TYPE_1__* next_token; TYPE_1__* last_token; int in_pragma; } ;
typedef TYPE_2__ cp_lexer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char,int ) ;

__attribute__((used)) static cp_token *
FUNC_6 (cp_lexer* VAR_4)
{
  cp_token *VAR_5 = VAR_4->next_token;

  FUNC_4 (VAR_5 != &VAR_3);
  FUNC_4 (!VAR_4->in_pragma || VAR_5->type != VAR_0);

  do
    {
      VAR_4->next_token++;
      if (VAR_4->next_token == VAR_4->last_token)
 {
   VAR_4->next_token = (cp_token *)&VAR_3;
   break;
 }

    }
  while (VAR_4->next_token->type == VAR_1);

  FUNC_2 (VAR_5);


  if (FUNC_0 (VAR_4))
    {
      FUNC_3 ("cp_lexer: consuming token: ", VAR_2);
      FUNC_1 (VAR_2, VAR_5);
      FUNC_5 ('\n', VAR_2);
    }

  return VAR_5;
}
