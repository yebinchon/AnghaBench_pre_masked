
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devmap_entry {scalar_t__ pd_size; scalar_t__ pd_pa; int pd_va; } ;


 struct devmap_entry* VAR_0 ;

__attribute__((used)) static void
FUNC_0(int (*VAR_1)(const char *, ...))
{
 const struct devmap_entry *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_0[0].pd_size == 0) {
  VAR_1("No static device mappings.\n");
  return;
 }

 VAR_1("Static device mappings:\n");
 for (VAR_2 = VAR_0; VAR_2->pd_size != 0; ++VAR_2) {
  VAR_1("  0x%08x - 0x%08x mapped at VA 0x%08x\n",
      VAR_2->pd_pa, VAR_2->pd_pa + VAR_2->pd_size - 1, VAR_2->pd_va);
 }
}
