
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * cp_token_position ;
struct TYPE_3__ {int * next_token; } ;
typedef TYPE_1__ cp_lexer ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline cp_token_position
FUNC_1 (cp_lexer *VAR_1, bool VAR_2)
{
  FUNC_0 (!VAR_2 || VAR_1->next_token != &VAR_0);

  return VAR_1->next_token - VAR_2;
}
