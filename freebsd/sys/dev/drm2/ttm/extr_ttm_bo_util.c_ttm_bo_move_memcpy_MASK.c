
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_memattr_t ;
struct ttm_tt {scalar_t__ state; TYPE_2__* bdev; } ;
struct ttm_mem_type_manager {int flags; } ;
struct ttm_mem_reg {size_t mem_type; scalar_t__ start; scalar_t__ size; int num_pages; int * mm_node; int placement; } ;
struct ttm_buffer_object {struct ttm_tt* ttm; struct ttm_mem_reg mem; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* ttm_tt_populate ) (struct ttm_tt*) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ttm_tt*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct ttm_buffer_object*,struct ttm_mem_reg*) ;
 int FUNC_3 (void*,void*,unsigned long) ;
 int FUNC_4 (struct ttm_tt*,void*,unsigned long,int ) ;
 int FUNC_5 (struct ttm_tt*,void*,unsigned long,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ttm_bo_device*,struct ttm_mem_reg*,void**) ;
 int FUNC_8 (struct ttm_bo_device*,struct ttm_mem_reg*,void*) ;
 int FUNC_9 (struct ttm_tt*) ;
 int FUNC_10 (struct ttm_tt*) ;

int FUNC_11(struct ttm_buffer_object *VAR_2,
         bool VAR_3, bool VAR_4,
         struct ttm_mem_reg *VAR_5)
{
 struct ttm_bo_device *VAR_6 = VAR_2->bdev;
 struct ttm_mem_type_manager *VAR_7 = &VAR_6->man[VAR_5->mem_type];
 struct ttm_tt *VAR_8 = VAR_2->ttm;
 struct ttm_mem_reg *VAR_9 = &VAR_2->mem;
 struct ttm_mem_reg VAR_10 = *VAR_9;
 void *VAR_11;
 void *VAR_12;
 int VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15;
 unsigned long VAR_16 = 0;
 int VAR_17;

 VAR_13 = FUNC_7(VAR_6, VAR_9, &VAR_11);
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_7(VAR_6, VAR_5, &VAR_12);
 if (VAR_13)
  goto out;

 if (VAR_11 == ((void*)0) && VAR_12 == ((void*)0))
  goto out2;
 if (VAR_11 == ((void*)0) && VAR_8 == ((void*)0))
  goto out2;

 if (VAR_8->state == VAR_1) {
  VAR_13 = VAR_8->bdev->driver->ttm_tt_populate(VAR_8);
  if (VAR_13) {


   VAR_10.mm_node = ((void*)0);
   goto out1;
  }
 }

 VAR_16 = 0;
 VAR_17 = 1;

 if ((VAR_9->mem_type == VAR_5->mem_type) &&
     (VAR_5->start < VAR_9->start + VAR_9->size)) {
  VAR_17 = -1;
  VAR_16 = VAR_5->num_pages - 1;
 }

 for (VAR_14 = 0; VAR_14 < VAR_5->num_pages; ++VAR_14) {
  VAR_15 = VAR_14 * VAR_17 + VAR_16;
  if (VAR_11 == ((void*)0)) {
   vm_memattr_t VAR_18 = FUNC_6(VAR_9->placement);
   VAR_13 = FUNC_5(VAR_8, VAR_12, VAR_15,
         VAR_18);
  } else if (VAR_12 == ((void*)0)) {
   vm_memattr_t VAR_19 = FUNC_6(VAR_5->placement);
   VAR_13 = FUNC_4(VAR_8, VAR_11, VAR_15,
         VAR_19);
  } else
   VAR_13 = FUNC_3(VAR_12, VAR_11, VAR_15);
  if (VAR_13) {

   VAR_10.mm_node = ((void*)0);
   goto out1;
  }
 }
 FUNC_0();
out2:
 VAR_10 = *VAR_9;
 *VAR_9 = *VAR_5;
 VAR_5->mm_node = ((void*)0);

 if ((VAR_7->flags & VAR_0) && (VAR_8 != ((void*)0))) {
  FUNC_10(VAR_8);
  FUNC_9(VAR_8);
  VAR_2->ttm = ((void*)0);
 }

out1:
 FUNC_8(VAR_6, VAR_9, VAR_12);
out:
 FUNC_8(VAR_6, &VAR_10, VAR_11);
 FUNC_2(VAR_2, &VAR_10);
 return VAR_13;
}
