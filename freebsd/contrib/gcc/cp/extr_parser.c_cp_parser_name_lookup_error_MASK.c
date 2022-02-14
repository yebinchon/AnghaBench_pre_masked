
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_3__ {scalar_t__ scope; char const* object_scope; } ;
typedef TYPE_1__ cp_parser ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,scalar_t__,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2 (cp_parser* VAR_2,
        tree VAR_3,
        tree VAR_4,
        const char* VAR_5)
{


  if (VAR_4 == VAR_0)
    {
      if (VAR_2->scope && VAR_2->scope != VAR_1)
 FUNC_1 ("%<%D::%D%> has not been declared",
        VAR_2->scope, VAR_3);
      else if (VAR_2->scope == VAR_1)
 FUNC_1 ("%<::%D%> has not been declared", VAR_3);
      else if (VAR_2->object_scope
        && !FUNC_0 (VAR_2->object_scope))
 FUNC_1 ("request for member %qD in non-class type %qT",
        VAR_3, VAR_2->object_scope);
      else if (VAR_2->object_scope)
 FUNC_1 ("%<%T::%D%> has not been declared",
        VAR_2->object_scope, VAR_3);
      else
 FUNC_1 ("%qD has not been declared", VAR_3);
    }
  else if (VAR_2->scope && VAR_2->scope != VAR_1)
    FUNC_1 ("%<%D::%D%> %s", VAR_2->scope, VAR_3, VAR_5);
  else if (VAR_2->scope == VAR_1)
    FUNC_1 ("%<::%D%> %s", VAR_3, VAR_5);
  else
    FUNC_1 ("%qD %s", VAR_3, VAR_5);
}
