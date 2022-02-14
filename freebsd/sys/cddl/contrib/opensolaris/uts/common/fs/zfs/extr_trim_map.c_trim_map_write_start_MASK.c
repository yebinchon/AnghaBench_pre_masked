
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int io_size; TYPE_2__* io_vd; void* io_offset; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_14__ {scalar_t__ vdev_notrim; TYPE_4__* vdev_trimmap; } ;
typedef TYPE_2__ vdev_t ;
typedef void* uint64_t ;
struct TYPE_15__ {void* ts_end; void* ts_start; } ;
typedef TYPE_3__ trim_seg_t ;
struct TYPE_16__ {int tm_lock; int tm_inflight_writes; int tm_queued_frees; int tm_pending_writes; int tm_inflight_frees; } ;
typedef TYPE_4__ trim_map_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_2__*,void*,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_3__* FUNC_2 (int *,TYPE_3__*,int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*,void*,void*) ;
 int VAR_2 ;

boolean_t
FUNC_7(zio_t *VAR_3)
{
 vdev_t *VAR_4 = VAR_3->io_vd;
 trim_map_t *VAR_5 = VAR_4->vdev_trimmap;
 trim_seg_t VAR_6, *VAR_7;
 boolean_t VAR_8, VAR_9;
 uint64_t VAR_10, VAR_11;

 if (!VAR_2 || VAR_4->vdev_notrim || VAR_5 == ((void*)0))
  return (VAR_1);

 VAR_10 = VAR_3->io_offset;
 VAR_11 = FUNC_0(VAR_3->io_vd, VAR_10, VAR_3->io_size);
 VAR_6.ts_start = VAR_10;
 VAR_6.ts_end = VAR_11;

 FUNC_4(&VAR_5->tm_lock);




 VAR_7 = FUNC_2(&VAR_5->tm_inflight_frees, &VAR_6, ((void*)0));
 if (VAR_7 != ((void*)0)) {
  FUNC_3(&VAR_5->tm_pending_writes, VAR_3);
  FUNC_5(&VAR_5->tm_lock);
  return (VAR_0);
 }




 while ((VAR_7 = FUNC_2(&VAR_5->tm_queued_frees, &VAR_6, ((void*)0))) != ((void*)0)) {
  FUNC_6(VAR_5, VAR_7, VAR_10, VAR_11);
 }

 FUNC_1(&VAR_5->tm_inflight_writes, VAR_3);

 FUNC_5(&VAR_5->tm_lock);

 return (VAR_1);
}
