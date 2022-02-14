
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct demangle_builtin_type_info const* type; } ;
struct TYPE_4__ {TYPE_1__ s_builtin; } ;
struct demangle_component {TYPE_2__ u; int type; } ;
struct demangle_builtin_type_info {int dummy; } ;
struct d_info {int dummy; } ;


 int VAR_0 ;
 struct demangle_component* FUNC_0 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_1 (struct d_info *VAR_1,
                     const struct demangle_builtin_type_info *VAR_2)
{
  struct demangle_component *VAR_3;

  if (VAR_2 == ((void*)0))
    return ((void*)0);
  VAR_3 = FUNC_0 (VAR_1);
  if (VAR_3 != ((void*)0))
    {
      VAR_3->type = VAR_0;
      VAR_3->u.s_builtin.type = VAR_2;
    }
  return VAR_3;
}
