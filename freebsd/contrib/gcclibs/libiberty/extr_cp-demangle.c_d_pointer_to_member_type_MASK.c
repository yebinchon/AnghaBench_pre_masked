
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {scalar_t__ type; } ;
struct d_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct demangle_component* FUNC_0 (struct d_info*) ;
 int FUNC_1 (struct d_info*,struct demangle_component*) ;
 int FUNC_2 (struct d_info*,char) ;
 struct demangle_component** FUNC_3 (struct d_info*,struct demangle_component**,int) ;
 struct demangle_component* FUNC_4 (struct d_info*,int ,struct demangle_component*,struct demangle_component*) ;

__attribute__((used)) static struct demangle_component *
FUNC_5 (struct d_info *VAR_2)
{
  struct demangle_component *VAR_3;
  struct demangle_component *VAR_4;
  struct demangle_component **VAR_5;

  if (! FUNC_2 (VAR_2, 'M'))
    return ((void*)0);

  VAR_3 = FUNC_0 (VAR_2);
  VAR_5 = FUNC_3 (VAR_2, &VAR_4, 1);
  if (VAR_5 == ((void*)0))
    return ((void*)0);
  *VAR_5 = FUNC_0 (VAR_2);
  if (*VAR_5 == ((void*)0))
    return ((void*)0);

  if (VAR_5 != &VAR_4 && (*VAR_5)->type != VAR_0)
    {
      if (! FUNC_1 (VAR_2, VAR_4))
 return ((void*)0);
    }

  return FUNC_4 (VAR_2, VAR_1, VAR_3, VAR_4);
}
