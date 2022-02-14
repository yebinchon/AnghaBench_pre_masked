
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int vm_ooffset_t ;
struct vm {struct mem_map* mem_maps; } ;
struct mem_map {scalar_t__ len; scalar_t__ gpa; int segid; int prot; int flags; int segoff; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct vm *VAR_2, vm_paddr_t *VAR_3, int *VAR_4,
    vm_ooffset_t *VAR_5, size_t *VAR_6, int *VAR_7, int *VAR_8)
{
 struct mem_map *VAR_9, *VAR_10;
 int VAR_11;

 VAR_10 = ((void*)0);
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  VAR_9 = &VAR_2->mem_maps[VAR_11];
  if (VAR_9->len == 0 || VAR_9->gpa < *VAR_3)
   continue;
  if (VAR_10 == ((void*)0) || VAR_9->gpa < VAR_10->gpa)
   VAR_10 = VAR_9;
 }

 if (VAR_10 != ((void*)0)) {
  *VAR_3 = VAR_10->gpa;
  if (VAR_4)
   *VAR_4 = VAR_10->segid;
  if (VAR_5)
   *VAR_5 = VAR_10->segoff;
  if (VAR_6)
   *VAR_6 = VAR_10->len;
  if (VAR_7)
   *VAR_7 = VAR_10->prot;
  if (VAR_8)
   *VAR_8 = VAR_10->flags;
  return (0);
 } else {
  return (VAR_0);
 }
}
