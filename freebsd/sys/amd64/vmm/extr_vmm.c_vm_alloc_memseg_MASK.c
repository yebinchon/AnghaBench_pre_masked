
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_object_t ;
struct vm {struct mem_seg* mem_segs; } ;
struct mem_seg {size_t len; int sysmem; int * object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int ,size_t) ;

int
FUNC_1(struct vm *VAR_7, int VAR_8, size_t VAR_9, bool VAR_10)
{
 struct mem_seg *VAR_11;
 vm_object_t VAR_12;

 if (VAR_8 < 0 || VAR_8 >= VAR_6)
  return (VAR_1);

 if (VAR_9 == 0 || (VAR_9 & VAR_4))
  return (VAR_1);

 VAR_11 = &VAR_7->mem_segs[VAR_8];
 if (VAR_11->object != ((void*)0)) {
  if (VAR_11->len == VAR_9 && VAR_11->sysmem == VAR_10)
   return (VAR_0);
  else
   return (VAR_1);
 }

 VAR_12 = FUNC_0(VAR_3, VAR_9 >> VAR_5);
 if (VAR_12 == ((void*)0))
  return (VAR_2);

 VAR_11->len = VAR_9;
 VAR_11->object = VAR_12;
 VAR_11->sysmem = VAR_10;
 return (0);
}
