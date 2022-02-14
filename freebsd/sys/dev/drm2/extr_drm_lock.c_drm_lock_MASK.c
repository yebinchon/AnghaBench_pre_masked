
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* hw_lock; int spinlock; int user_waiters; int lock_queue; int lock_time; struct drm_file* file_priv; } ;
struct drm_master {TYPE_3__ lock; } ;
struct drm_lock {scalar_t__ context; int flags; } ;
struct drm_file {int is_master; int lock_count; struct drm_master* master; } ;
struct TYPE_8__ {scalar_t__ context; TYPE_1__* lock; } ;
struct drm_device {TYPE_2__* driver; int sigmask; TYPE_4__ sigdata; int * counts; } ;
struct TYPE_6__ {scalar_t__ (* dma_quiescent ) (struct drm_device*) ;} ;
struct TYPE_5__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct drm_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_4__*,int *) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_5 (TYPE_3__*,scalar_t__) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct drm_device*) ;
 int FUNC_12 (int *,int *,int ,char*,int ) ;

int FUNC_13(struct drm_device *VAR_19, void *VAR_20, struct drm_file *VAR_21)
{
 struct drm_lock *VAR_22 = VAR_20;
 struct drm_master *VAR_23 = VAR_21->master;
 int VAR_24 = 0;

 ++VAR_21->lock_count;

 if (VAR_22->context == VAR_1) {
  FUNC_1("Process %d using kernel context %d\n",
     VAR_0, VAR_22->context);
  return -VAR_4;
 }

 FUNC_0("%d (pid %d) requests lock (0x%08x), flags = 0x%08x\n",
    VAR_22->context, VAR_0,
    VAR_23->lock.hw_lock->lock, VAR_22->flags);

 FUNC_6(&VAR_23->lock.spinlock);
 VAR_23->lock.user_waiters++;
 FUNC_7(&VAR_23->lock.spinlock);

 for (;;) {

  if (!VAR_23->lock.hw_lock) {

   FUNC_8(VAR_9, VAR_15, 0);
   VAR_24 = -VAR_3;
   break;
  }

  if (FUNC_5(&VAR_23->lock, VAR_22->context)) {
   VAR_23->lock.file_priv = VAR_21;
   VAR_23->lock.lock_time = VAR_18;
   FUNC_3(&VAR_19->counts[VAR_14]);
   break;
  }


  FUNC_2(VAR_19);
  VAR_24 = -FUNC_12(&VAR_23->lock.lock_queue, &VAR_16,
      VAR_7, "drmlk2", 0);
  if (VAR_24 == -VAR_5)
   VAR_24 = -VAR_6;
  if (VAR_24 != 0)
   break;
 }
 FUNC_6(&VAR_23->lock.spinlock);
 VAR_23->lock.user_waiters--;
 FUNC_7(&VAR_23->lock.spinlock);

 FUNC_0("%d %s\n", VAR_22->context,
    VAR_24 ? "interrupted" : "has lock");
 if (VAR_24) return VAR_24;





 if (!VAR_21->is_master) {
  FUNC_10(&VAR_19->sigmask);
  FUNC_9(&VAR_19->sigmask, VAR_8);
  FUNC_9(&VAR_19->sigmask, VAR_10);
  FUNC_9(&VAR_19->sigmask, VAR_11);
  FUNC_9(&VAR_19->sigmask, VAR_12);
  VAR_19->sigdata.context = VAR_22->context;
  VAR_19->sigdata.lock = VAR_23->lock.hw_lock;
  FUNC_4(VAR_17, &VAR_19->sigdata, &VAR_19->sigmask);
 }


 if (VAR_19->driver->dma_quiescent && (VAR_22->flags & VAR_13))
 {
  if (VAR_19->driver->dma_quiescent(VAR_19)) {
   FUNC_0("%d waiting for DMA quiescent\n",
      VAR_22->context);
   return -VAR_2;
  }
 }

 return 0;
}
