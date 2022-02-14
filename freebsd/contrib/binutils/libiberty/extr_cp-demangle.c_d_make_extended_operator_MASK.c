
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int dummy; } ;


 int FUNC_0 (struct demangle_component*,int,struct demangle_component*) ;
 struct demangle_component* FUNC_1 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_2 (struct d_info *VAR_0, int VAR_1,
                          struct demangle_component *VAR_2)
{
  struct demangle_component *VAR_3;

  VAR_3 = FUNC_1 (VAR_0);
  if (! FUNC_0 (VAR_3, VAR_1, VAR_2))
    return ((void*)0);
  return VAR_3;
}
