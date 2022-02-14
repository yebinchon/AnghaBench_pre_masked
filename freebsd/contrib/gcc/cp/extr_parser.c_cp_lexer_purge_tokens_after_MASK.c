
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int value; } ;
struct TYPE_8__ {int keyword; TYPE_1__ u; int location; int type; } ;
typedef TYPE_2__ cp_token ;
struct TYPE_9__ {TYPE_2__* last_token; TYPE_2__* next_token; } ;
typedef TYPE_3__ cp_lexer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (cp_lexer *VAR_5, cp_token *VAR_6)
{
  cp_token *VAR_7 = VAR_5->next_token;

  if (VAR_7 == &VAR_4)
    VAR_7 = VAR_5->last_token;

  FUNC_0 (VAR_6 < VAR_7);

  for ( VAR_6 += 1; VAR_6 != VAR_7; VAR_6 += 1)
    {
      VAR_6->type = VAR_0;
      VAR_6->location = VAR_3;
      VAR_6->u.value = VAR_1;
      VAR_6->keyword = VAR_2;
    }
}
