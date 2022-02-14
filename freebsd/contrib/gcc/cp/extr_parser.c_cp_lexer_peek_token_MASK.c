
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cp_token ;
struct TYPE_4__ {int * next_token; } ;
typedef TYPE_1__ cp_lexer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char,int ) ;

__attribute__((used)) static inline cp_token *
FUNC_4 (cp_lexer *VAR_1)
{
  if (FUNC_0 (VAR_1))
    {
      FUNC_2 ("cp_lexer: peeking at token: ", VAR_0);
      FUNC_1 (VAR_0, VAR_1->next_token);
      FUNC_3 ('\n', VAR_0);
    }
  return VAR_1->next_token;
}
