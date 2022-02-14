
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* string; int len; } ;
struct TYPE_4__ {TYPE_1__ s_string; } ;
struct demangle_component {TYPE_2__ u; int type; } ;
struct d_info {int dummy; } ;


 int VAR_0 ;
 struct demangle_component* FUNC_0 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_1 (struct d_info *VAR_1, const char *VAR_2, int VAR_3)
{
  struct demangle_component *VAR_4;

  VAR_4 = FUNC_0 (VAR_1);
  if (VAR_4 != ((void*)0))
    {
      VAR_4->type = VAR_0;
      VAR_4->u.s_string.string = VAR_2;
      VAR_4->u.s_string.len = VAR_3;
    }
  return VAR_4;
}
