
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type_definition_forbidden_message; } ;
typedef TYPE_1__ cp_parser ;


 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static bool
FUNC_1 (cp_parser* VAR_0)
{

  if (VAR_0->type_definition_forbidden_message)
    {


      FUNC_0 ("%s", VAR_0->type_definition_forbidden_message);
      return 0;
    }
  return 1;
}
