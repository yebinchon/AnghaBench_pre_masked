
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_cu {int * cached_fn; int last_fn; int first_fn; } ;



__attribute__((used)) static void
FUNC_0 (struct dwarf2_cu *VAR_0)
{
  VAR_0->first_fn = VAR_0->last_fn = *(VAR_0->cached_fn = ((void*)0));
}
