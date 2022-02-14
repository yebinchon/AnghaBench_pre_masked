
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_buffer_object {unsigned long num_pages; TYPE_1__* vm_node; } ;
struct ttm_bo_device {int addr_space_rb; } ;
struct TYPE_2__ {unsigned long start; } ;


 struct ttm_buffer_object* FUNC_0 (struct ttm_buffer_object*,int ) ;
 struct ttm_buffer_object* FUNC_1 (struct ttm_buffer_object*,int ) ;
 struct ttm_buffer_object* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;

__attribute__((used)) static struct ttm_buffer_object *FUNC_4(struct ttm_bo_device *VAR_1,
           unsigned long VAR_2,
           unsigned long VAR_3)
{
 unsigned long VAR_4;
 struct ttm_buffer_object *VAR_5;
 struct ttm_buffer_object *VAR_6 = ((void*)0);

 VAR_5 = FUNC_2(&VAR_1->addr_space_rb);
 while (VAR_5 != ((void*)0)) {
  VAR_4 = VAR_5->vm_node->start;
  if (VAR_2 >= VAR_4) {
   VAR_6 = VAR_5;
   if (VAR_2 == VAR_4)
    break;
   VAR_5 = FUNC_1(VAR_5, VAR_0);
  } else
   VAR_5 = FUNC_0(VAR_5, VAR_0);
 }

 if (FUNC_3(VAR_6 == ((void*)0)))
  return ((void*)0);

 if (FUNC_3((VAR_6->vm_node->start + VAR_6->num_pages) <
       (VAR_2 + VAR_3)))
  return ((void*)0);

 return VAR_6;
}
