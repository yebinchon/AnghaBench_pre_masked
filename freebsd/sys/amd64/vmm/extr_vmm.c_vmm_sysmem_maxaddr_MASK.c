
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
struct vm {struct mem_map* mem_maps; } ;
struct mem_map {scalar_t__ gpa; scalar_t__ len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vm*,struct mem_map*) ;

vm_paddr_t
FUNC_1(struct vm *VAR_1)
{
 struct mem_map *VAR_2;
 vm_paddr_t VAR_3;
 int VAR_4;

 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2 = &VAR_1->mem_maps[VAR_4];
  if (FUNC_0(VAR_1, VAR_2)) {
   if (VAR_3 < VAR_2->gpa + VAR_2->len)
    VAR_3 = VAR_2->gpa + VAR_2->len;
  }
 }
 return (VAR_3);
}
