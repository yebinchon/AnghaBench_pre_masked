
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int value; } ;
struct TYPE_7__ {scalar_t__ type; int keyword; TYPE_1__ u; int location; } ;
typedef TYPE_2__ cp_token ;
struct TYPE_8__ {TYPE_2__* next_token; TYPE_2__* last_token; } ;
typedef TYPE_3__ cp_lexer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (cp_lexer *VAR_5)
{
  cp_token *VAR_6 = VAR_5->next_token;

  FUNC_0 (VAR_6 != &VAR_4);
  VAR_6->type = VAR_0;
  VAR_6->location = VAR_3;
  VAR_6->u.value = VAR_1;
  VAR_6->keyword = VAR_2;

  do
    {
      VAR_6++;
      if (VAR_6 == VAR_5->last_token)
 {
   VAR_6 = (cp_token *)&VAR_4;
   break;
 }
    }
  while (VAR_6->type == VAR_0);
  VAR_5->next_token = VAR_6;
}
