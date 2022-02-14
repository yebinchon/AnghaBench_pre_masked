
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ vdev_initialize_inflight; int vdev_initialize_lock; int vdev_initialize_cv; int * vdev_initialize_thread; int vdev_initialize_exit_wanted; int * vdev_initialize_tree; int vdev_initialize_io_lock; int vdev_initialize_io_cv; TYPE_1__* vdev_top; int vdev_detached; scalar_t__ vdev_initialize_last_offset; int * vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint64_t ;
typedef int spa_t ;
struct TYPE_16__ {int ms_lock; int ms_allocatable; } ;
typedef TYPE_3__ metaslab_t ;
typedef int abd_t ;
struct TYPE_14__ {size_t vdev_ms_count; TYPE_3__** vdev_ms; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int ,int ,TYPE_2__*) ;
 int FUNC_11 (int *,int ,int ,int ) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int ) ;
 int * FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*,int ) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_23 (TYPE_2__*,int *) ;
 int FUNC_24 (TYPE_2__*) ;
 scalar_t__ FUNC_25 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_26(void *VAR_5)
{
 vdev_t *VAR_6 = VAR_5;
 spa_t *VAR_7 = VAR_6->vdev_spa;
 int VAR_8 = 0;
 uint64_t VAR_9 = 0;

 FUNC_0(FUNC_24(VAR_6));
 FUNC_11(VAR_7, VAR_2, VAR_0, VAR_1);

 VAR_6->vdev_initialize_last_offset = 0;
 FUNC_20(VAR_6);

 abd_t *VAR_10 = FUNC_16();

 VAR_6->vdev_initialize_tree = FUNC_7(((void*)0), ((void*)0));

 for (uint64_t VAR_11 = 0; !VAR_6->vdev_detached &&
     VAR_11 < VAR_6->vdev_top->vdev_ms_count; VAR_11++) {
  metaslab_t *VAR_12 = VAR_6->vdev_top->vdev_ms[VAR_11];





  if (VAR_6->vdev_top->vdev_ms_count != VAR_9) {
   FUNC_18(VAR_6);
   VAR_9 = VAR_6->vdev_top->vdev_ms_count;
  }

  FUNC_21(VAR_12);
  FUNC_5(&VAR_12->ms_lock);
  FUNC_1(FUNC_4(VAR_12));

  FUNC_10(VAR_12->ms_allocatable, VAR_4,
      VAR_6);
  FUNC_6(&VAR_12->ms_lock);

  FUNC_12(VAR_7, VAR_2, VAR_0);
  VAR_8 = FUNC_23(VAR_6, VAR_10);
  FUNC_22(VAR_12);
  FUNC_11(VAR_7, VAR_2, VAR_0, VAR_1);

  FUNC_9(VAR_6->vdev_initialize_tree, ((void*)0), ((void*)0));
  if (VAR_8 != 0)
   break;
 }

 FUNC_12(VAR_7, VAR_2, VAR_0);
 FUNC_5(&VAR_6->vdev_initialize_io_lock);
 while (VAR_6->vdev_initialize_inflight > 0) {
  FUNC_3(&VAR_6->vdev_initialize_io_cv,
      &VAR_6->vdev_initialize_io_lock);
 }
 FUNC_6(&VAR_6->vdev_initialize_io_lock);

 FUNC_8(VAR_6->vdev_initialize_tree);
 FUNC_17(VAR_10);
 VAR_6->vdev_initialize_tree = ((void*)0);

 FUNC_5(&VAR_6->vdev_initialize_lock);
 if (!VAR_6->vdev_initialize_exit_wanted && FUNC_25(VAR_6)) {
  FUNC_19(VAR_6, VAR_3);
 }
 FUNC_0(VAR_6->vdev_initialize_thread != ((void*)0) ||
     VAR_6->vdev_initialize_inflight == 0);
 FUNC_6(&VAR_6->vdev_initialize_lock);
 FUNC_15(FUNC_13(VAR_7), 0);
 FUNC_5(&VAR_6->vdev_initialize_lock);

 VAR_6->vdev_initialize_thread = ((void*)0);
 FUNC_2(&VAR_6->vdev_initialize_cv);
 FUNC_6(&VAR_6->vdev_initialize_lock);
 FUNC_14();
}
