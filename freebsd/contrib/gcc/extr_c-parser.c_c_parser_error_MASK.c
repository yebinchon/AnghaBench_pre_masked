
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; int value; } ;
typedef TYPE_1__ c_token ;
struct TYPE_8__ {int error; } ;
typedef TYPE_2__ c_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,scalar_t__,int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3 (c_parser *VAR_2, const char *VAR_3)
{
  c_token *VAR_4 = FUNC_1 (VAR_2);
  if (VAR_2->error)
    return;
  VAR_2->error = 1;
  if (!VAR_3)
    return;


  FUNC_2 (VAR_4);
  FUNC_0 (VAR_3,



   (VAR_4->type == VAR_0 ? VAR_1 : VAR_4->type),
   VAR_4->value);
}
