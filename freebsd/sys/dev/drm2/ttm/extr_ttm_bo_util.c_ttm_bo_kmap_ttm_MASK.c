
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int vm_memattr_t ;
struct ttm_tt {scalar_t__ state; int * pages; TYPE_2__* bdev; } ;
struct ttm_mem_reg {int placement; } ;
struct ttm_buffer_object {struct ttm_tt* ttm; struct ttm_mem_reg mem; } ;
struct ttm_bo_kmap_obj {unsigned long num_pages; int * virtual; int bo_kmap_type; int sf; int page; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* ttm_tt_populate ) (struct ttm_tt*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *,unsigned long) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ttm_tt*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct ttm_buffer_object *VAR_7,
      unsigned long VAR_8,
      unsigned long VAR_9,
      struct ttm_bo_kmap_obj *VAR_10)
{
 struct ttm_mem_reg *VAR_11 = &VAR_7->mem;
 vm_memattr_t VAR_12;
 struct ttm_tt *VAR_13 = VAR_7->ttm;
 int VAR_14, VAR_15;

 FUNC_0(VAR_13 != ((void*)0));

 if (VAR_13->state == VAR_4) {
  VAR_15 = VAR_13->bdev->driver->ttm_tt_populate(VAR_13);
  if (VAR_15)
   return VAR_15;
 }

 if (VAR_9 == 1 && (VAR_11->placement & VAR_2)) {





  VAR_10->bo_kmap_type = VAR_5;
  VAR_10->page = VAR_13->pages[VAR_8];
  VAR_10->sf = FUNC_4(VAR_10->page, 0);
  VAR_10->virtual = (void *)FUNC_5(VAR_10->sf);
 } else {




  VAR_12 = (VAR_11->placement & VAR_2) ?
   VAR_3 : FUNC_7(VAR_11->placement);
  VAR_10->bo_kmap_type = VAR_6;
  VAR_10->num_pages = VAR_9;
  VAR_10->virtual = (void *)FUNC_1(VAR_9 * VAR_1);
  if (VAR_10->virtual != ((void*)0)) {
   for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {

    FUNC_2(VAR_13->pages[VAR_8 +
        VAR_14], VAR_12);
   }
   FUNC_3((vm_offset_t)VAR_10->virtual,
       &VAR_13->pages[VAR_8], VAR_9);
  }
 }
 return (!VAR_10->virtual) ? -VAR_0 : 0;
}
