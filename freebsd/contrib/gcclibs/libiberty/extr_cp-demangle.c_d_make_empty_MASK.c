
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {size_t next_comp; size_t num_comps; struct demangle_component* comps; } ;



__attribute__((used)) static struct demangle_component *
FUNC_0 (struct d_info *VAR_0)
{
  struct demangle_component *VAR_1;

  if (VAR_0->next_comp >= VAR_0->num_comps)
    return ((void*)0);
  VAR_1 = &VAR_0->comps[VAR_0->next_comp];
  ++VAR_0->next_comp;
  return VAR_1;
}
