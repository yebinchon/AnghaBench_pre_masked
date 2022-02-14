
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * vm_page_t ;
typedef int * vm_object_t ;
struct ttm_tt {scalar_t__ state; scalar_t__ caching_state; int num_pages; int page_flags; int * swap_storage; TYPE_2__* bdev; int ** pages; } ;
struct TYPE_6__ {int td_ucred; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {int (* ttm_tt_unpopulate ) (struct ttm_tt*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct ttm_tt*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int ,int *,int ,int ,int ,int ) ;

int FUNC_15(struct ttm_tt *VAR_10, vm_object_t VAR_11)
{
 vm_object_t VAR_12;
 vm_page_t VAR_13, VAR_14;
 int VAR_15;

 FUNC_1(VAR_10->state == VAR_8 || VAR_10->state == VAR_9);
 FUNC_1(VAR_10->caching_state == VAR_7);

 if (VAR_11 == ((void*)0)) {
  VAR_12 = FUNC_14(VAR_1, ((void*)0),
      FUNC_0(VAR_10->num_pages), VAR_5, 0,
      VAR_6->td_ucred);
  if (VAR_12 == ((void*)0)) {
   FUNC_5("[TTM] Failed allocating swap storage\n");
   return (-VAR_0);
  }
 } else
  VAR_12 = VAR_11;

 FUNC_2(VAR_12);
 FUNC_8(VAR_12, 1);
 for (VAR_15 = 0; VAR_15 < VAR_10->num_pages; ++VAR_15) {
  VAR_13 = VAR_10->pages[VAR_15];
  if (FUNC_7(VAR_13 == ((void*)0)))
   continue;
  VAR_14 = FUNC_11(VAR_12, VAR_15, VAR_4);
  FUNC_4(VAR_13, VAR_14);
  FUNC_12(VAR_14);
  FUNC_10(VAR_14);
  FUNC_13(VAR_14);
 }
 FUNC_9(VAR_12);
 FUNC_3(VAR_12);

 VAR_10->bdev->driver->ttm_tt_unpopulate(VAR_10);
 VAR_10->swap_storage = VAR_12;
 VAR_10->page_flags |= VAR_3;
 if (VAR_11 != ((void*)0))
  VAR_10->page_flags |= VAR_2;
 return (0);
}
