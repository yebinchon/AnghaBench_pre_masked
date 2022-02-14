
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; struct mount* v_mount; struct cdev* v_rdev; } ;
struct TYPE_7__ {int f_syncwrites; int f_asyncwrites; int f_syncreads; int f_asyncreads; } ;
struct mount {TYPE_3__ mnt_stat; } ;
struct g_vfs_softc {scalar_t__ sc_active; int sc_mtx; scalar_t__ sc_orphaned; } ;
struct g_consumer {TYPE_4__* geom; } ;
struct cdev {struct mount* si_mountpt; TYPE_1__* si_devsw; } ;
struct TYPE_6__ {int lk_lock; } ;
struct buf {scalar_t__ b_iocmd; scalar_t__ b_bcount; scalar_t__ b_resid; int b_ioflags; scalar_t__ b_error; TYPE_2__ b_lock; struct vnode* b_vp; } ;
struct bio {scalar_t__ bio_completed; scalar_t__ bio_error; int bio_flags; struct g_consumer* bio_from; struct buf* bio_caller2; } ;
struct TYPE_8__ {struct g_vfs_softc* softc; } ;
struct TYPE_5__ {int d_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (int ,struct g_consumer*,int ,int *) ;
 int FUNC_6 (char*,struct bio*,char*,scalar_t__) ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct bio *VAR_8)
{
 struct g_consumer *VAR_9;
 struct g_vfs_softc *VAR_10;
 struct buf *VAR_11;
 int VAR_12;
 struct mount *VAR_13;
 struct vnode *VAR_14;
 struct cdev *VAR_15;





 VAR_11 = VAR_8->bio_caller2;
 VAR_14 = VAR_11->b_vp;
 if (VAR_14 != ((void*)0)) {




  FUNC_1(VAR_14);
  if (VAR_14->v_type != VAR_6 ||
      (VAR_15 = VAR_14->v_rdev) == ((void*)0) ||
      VAR_15->si_devsw == ((void*)0) ||
      (VAR_15->si_devsw->d_flags & VAR_3) == 0)
   VAR_13 = VAR_14->v_mount;
  else
   VAR_13 = VAR_15->si_mountpt;
  if (VAR_13 != ((void*)0)) {
   if (VAR_11->b_iocmd == VAR_1) {
    if (FUNC_0(VAR_11->b_lock.lk_lock) == VAR_4)
     VAR_13->mnt_stat.f_asyncreads++;
    else
     VAR_13->mnt_stat.f_syncreads++;
   } else if (VAR_11->b_iocmd == VAR_2) {
    if (FUNC_0(VAR_11->b_lock.lk_lock) == VAR_4)
     VAR_13->mnt_stat.f_asyncwrites++;
    else
     VAR_13->mnt_stat.f_syncwrites++;
   }
  }
  FUNC_2(VAR_14);
 }

 VAR_9 = VAR_8->bio_from;
 VAR_10 = VAR_9->geom->softc;
 if (VAR_8->bio_error)
  FUNC_6("g_vfs_done():", VAR_8, "error = %d",
      VAR_8->bio_error);
 VAR_11->b_error = VAR_8->bio_error;
 VAR_11->b_ioflags = VAR_8->bio_flags;
 if (VAR_8->bio_error)
  VAR_11->b_ioflags |= VAR_0;
 VAR_11->b_resid = VAR_11->b_bcount - VAR_8->bio_completed;
 FUNC_4(VAR_8);

 FUNC_7(&VAR_10->sc_mtx);
 VAR_12 = ((--VAR_10->sc_active) == 0 && VAR_10->sc_orphaned);
 FUNC_8(&VAR_10->sc_mtx);
 if (VAR_12)
  FUNC_5(VAR_7, VAR_9, VAR_5, ((void*)0));

 FUNC_3(VAR_11);
}
