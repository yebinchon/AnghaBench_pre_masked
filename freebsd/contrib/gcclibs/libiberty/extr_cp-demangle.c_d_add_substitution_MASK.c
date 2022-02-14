
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {size_t next_sub; size_t num_subs; struct demangle_component** subs; } ;



__attribute__((used)) static int
FUNC_0 (struct d_info *VAR_0, struct demangle_component *VAR_1)
{
  if (VAR_1 == ((void*)0))
    return 0;
  if (VAR_0->next_sub >= VAR_0->num_subs)
    return 0;
  VAR_0->subs[VAR_0->next_sub] = VAR_1;
  ++VAR_0->next_sub;
  return 1;
}
