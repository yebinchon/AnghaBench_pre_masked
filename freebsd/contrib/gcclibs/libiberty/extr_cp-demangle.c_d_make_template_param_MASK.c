
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long number; } ;
struct TYPE_4__ {TYPE_1__ s_number; } ;
struct demangle_component {TYPE_2__ u; int type; } ;
struct d_info {int dummy; } ;


 int VAR_0 ;
 struct demangle_component* FUNC_0 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_1 (struct d_info *VAR_1, long VAR_2)
{
  struct demangle_component *VAR_3;

  VAR_3 = FUNC_0 (VAR_1);
  if (VAR_3 != ((void*)0))
    {
      VAR_3->type = VAR_0;
      VAR_3->u.s_number.number = VAR_2;
    }
  return VAR_3;
}
