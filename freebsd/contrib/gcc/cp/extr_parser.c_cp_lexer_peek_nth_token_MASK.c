
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_9__ {TYPE_1__* last_token; TYPE_1__* next_token; } ;
typedef TYPE_2__ cp_lexer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int ,char*,long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char,int ) ;

__attribute__((used)) static cp_token *
FUNC_5 (cp_lexer* VAR_3, size_t VAR_4)
{
  cp_token *VAR_5;


  FUNC_3 (VAR_4 > 0);

  if (FUNC_0 (VAR_3))
    FUNC_2 (VAR_1,
      "cp_lexer: peeking ahead %ld at token: ", (long)VAR_4);

  --VAR_4;
  VAR_5 = VAR_3->next_token;
  FUNC_3 (!VAR_4 || VAR_5 != &VAR_2);
  while (VAR_4 != 0)
    {
      ++VAR_5;
      if (VAR_5 == VAR_3->last_token)
 {
   VAR_5 = (cp_token *)&VAR_2;
   break;
 }

      if (VAR_5->type != VAR_0)
 --VAR_4;
    }

  if (FUNC_0 (VAR_3))
    {
      FUNC_1 (VAR_1, VAR_5);
      FUNC_4 ('\n', VAR_1);
    }

  return VAR_5;
}
