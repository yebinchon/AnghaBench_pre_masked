
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_object_t ;
struct vm {struct mem_seg* mem_segs; } ;
struct mem_seg {size_t len; int sysmem; int object; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct vm *VAR_2, int VAR_3, size_t *VAR_4, bool *VAR_5,
    vm_object_t *VAR_6)
{
 struct mem_seg *VAR_7;

 if (VAR_3 < 0 || VAR_3 >= VAR_1)
  return (VAR_0);

 VAR_7 = &VAR_2->mem_segs[VAR_3];
 if (VAR_4)
  *VAR_4 = VAR_7->len;
 if (VAR_5)
  *VAR_5 = VAR_7->sysmem;
 if (VAR_6)
  *VAR_6 = VAR_7->object;
 return (0);
}
