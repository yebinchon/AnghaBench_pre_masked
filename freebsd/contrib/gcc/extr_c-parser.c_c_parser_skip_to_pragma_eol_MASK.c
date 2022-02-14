
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; } ;
typedef TYPE_1__ c_token ;
struct TYPE_9__ {int in_pragma; int error; } ;
typedef TYPE_2__ c_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (c_parser *VAR_2)
{
  FUNC_3 (VAR_2->in_pragma);
  VAR_2->in_pragma = 0;

  if (!FUNC_2 (VAR_2, VAR_1, "expected end of line"))
    while (1)
      {
 c_token *VAR_3 = FUNC_1 (VAR_2);
 if (VAR_3->type == VAR_0)
   break;
 if (VAR_3->type == VAR_1)
   {
     FUNC_0 (VAR_2);
     break;
   }
 FUNC_0 (VAR_2);
      }

  VAR_2->error = 0;
}
