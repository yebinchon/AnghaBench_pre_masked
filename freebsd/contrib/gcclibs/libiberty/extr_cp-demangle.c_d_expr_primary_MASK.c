
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* type; } ;
struct TYPE_6__ {TYPE_2__ s_builtin; } ;
struct demangle_component {scalar_t__ type; TYPE_3__ u; } ;
struct d_info {int expansion; } ;
typedef enum demangle_component_type { ____Placeholder_demangle_component_type } demangle_component_type ;
struct TYPE_4__ {scalar_t__ print; scalar_t__ len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct demangle_component* FUNC_0 (struct d_info*,int ) ;
 struct demangle_component* FUNC_1 (struct d_info*) ;
 int FUNC_2 (struct d_info*,int) ;
 int FUNC_3 (struct d_info*,char) ;
 struct demangle_component* FUNC_4 (struct d_info*,int,struct demangle_component*,int ) ;
 int FUNC_5 (struct d_info*,char const*,int) ;
 char FUNC_6 (struct d_info*) ;
 char const* FUNC_7 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_8 (struct d_info *VAR_4)
{
  struct demangle_component *VAR_5;

  if (! FUNC_3 (VAR_4, 'L'))
    return ((void*)0);
  if (FUNC_6 (VAR_4) == '_')
    VAR_5 = FUNC_0 (VAR_4, 0);
  else
    {
      struct demangle_component *VAR_6;
      enum demangle_component_type VAR_7;
      const char *VAR_8;

      VAR_6 = FUNC_1 (VAR_4);
      if (VAR_6 == ((void*)0))
 return ((void*)0);



      if (VAR_6->type == VAR_0
   && VAR_6->u.s_builtin.type->print != VAR_3)
 VAR_4->expansion -= VAR_6->u.s_builtin.type->len;
      VAR_7 = VAR_1;
      if (FUNC_6 (VAR_4) == 'n')
 {
   VAR_7 = VAR_2;
   FUNC_2 (VAR_4, 1);
 }
      VAR_8 = FUNC_7 (VAR_4);
      while (FUNC_6 (VAR_4) != 'E')
 {
   if (FUNC_6 (VAR_4) == '\0')
     return ((void*)0);
   FUNC_2 (VAR_4, 1);
 }
      VAR_5 = FUNC_4 (VAR_4, VAR_7, VAR_6, FUNC_5 (VAR_4, VAR_8, FUNC_7 (VAR_4) - VAR_8));
    }
  if (! FUNC_3 (VAR_4, 'E'))
    return ((void*)0);
  return VAR_5;
}
