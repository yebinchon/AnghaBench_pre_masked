
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * mm_node; } ;
struct ttm_buffer_object {size_t acc_size; int (* destroy ) (struct ttm_buffer_object*) ;TYPE_2__* glob; scalar_t__ ttm; int ddestroy; int lru; TYPE_1__ mem; int * sync_obj; int cpu_writers; int kref; int list_kref; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {TYPE_3__* glob; } ;
struct TYPE_6__ {int mem_glob; } ;
struct TYPE_5__ {int bo_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct ttm_buffer_object*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ttm_buffer_object*) ;
 int FUNC_6 (int ,size_t) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct ttm_buffer_object *VAR_1)
{
 struct ttm_bo_device *VAR_2 = VAR_1->bdev;
 size_t VAR_3 = VAR_1->acc_size;

 FUNC_0(FUNC_2(&VAR_1->list_kref) == 0);
 FUNC_0(FUNC_2(&VAR_1->kref) == 0);
 FUNC_0(FUNC_2(&VAR_1->cpu_writers) == 0);
 FUNC_0(VAR_1->sync_obj == ((void*)0));
 FUNC_0(VAR_1->mem.mm_node == ((void*)0));
 FUNC_0(FUNC_4(&VAR_1->lru));
 FUNC_0(FUNC_4(&VAR_1->ddestroy));

 if (VAR_1->ttm)
  FUNC_7(VAR_1->ttm);
 FUNC_1(&VAR_1->glob->bo_count);
 if (VAR_1->destroy)
  VAR_1->destroy(VAR_1);
 else {
  FUNC_3(VAR_1, VAR_0);
 }
 FUNC_6(VAR_2->glob->mem_glob, VAR_3);
}
