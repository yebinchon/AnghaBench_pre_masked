
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* op; } ;
struct TYPE_6__ {TYPE_2__ s_operator; } ;
struct demangle_component {scalar_t__ type; TYPE_3__ u; } ;
struct d_info {int expansion; } ;
struct TYPE_4__ {int len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (struct d_info*,int) ;
 struct demangle_component* FUNC_3 (struct d_info*) ;
 int FUNC_4 (struct d_info*) ;
 struct demangle_component* FUNC_5 (struct d_info*) ;
 char FUNC_6 (struct d_info*) ;
 struct demangle_component* FUNC_7 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_8 (struct d_info *VAR_1)
{
  char VAR_2;

  VAR_2 = FUNC_6 (VAR_1);
  if (FUNC_0 (VAR_2))
    return FUNC_7 (VAR_1);
  else if (FUNC_1 (VAR_2))
    {
      struct demangle_component *VAR_3;

      VAR_3 = FUNC_5 (VAR_1);
      if (VAR_3 != ((void*)0) && VAR_3->type == VAR_0)
 VAR_1->expansion += sizeof "operator" + VAR_3->u.s_operator.op->len - 2;
      return VAR_3;
    }
  else if (VAR_2 == 'C' || VAR_2 == 'D')
    return FUNC_3 (VAR_1);
  else if (VAR_2 == 'L')
    {
      struct demangle_component * VAR_4;

      FUNC_2 (VAR_1, 1);

      VAR_4 = FUNC_7 (VAR_1);
      if (VAR_4 == ((void*)0))
 return ((void*)0);
      if (! FUNC_4 (VAR_1))
 return ((void*)0);
      return VAR_4;
    }
  else
    return ((void*)0);
}
