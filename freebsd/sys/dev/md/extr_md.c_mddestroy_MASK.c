
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct thread {int dummy; } ;
struct md_s {int flags; int* procp; int unit; scalar_t__ uma; scalar_t__ indir; int * object; int * cred; TYPE_1__* vnode; int queue_mtx; int stat_mtx; int * devstat; scalar_t__ gp; } ;
struct TYPE_4__ {int v_vflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct md_s*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_11 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct md_s*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct md_s*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (int*,int *,int ,char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_1__*,int,int *,struct thread*) ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (struct md_s*) ;

__attribute__((used)) static int
FUNC_19(struct md_s *VAR_15, struct thread *VAR_16)
{

 if (VAR_15->gp) {
  FUNC_7();
  FUNC_9(VAR_15->gp, VAR_0);
  FUNC_8();

  FUNC_12(&VAR_15->queue_mtx);
  while (!(VAR_15->flags & VAR_6))
   FUNC_10(&VAR_15->flags, &VAR_15->queue_mtx, VAR_10, "mddestroy", 0);
  FUNC_13(&VAR_15->queue_mtx);
 }
 if (VAR_15->devstat) {
  FUNC_4(VAR_15->devstat);
  VAR_15->devstat = ((void*)0);
 }
 FUNC_12(&VAR_15->queue_mtx);
 VAR_15->flags |= VAR_8;
 FUNC_18(VAR_15);
 while (!(VAR_15->flags & VAR_5))
  FUNC_10(VAR_15->procp, &VAR_15->queue_mtx, VAR_10, "mddestroy", VAR_12 / 10);
 FUNC_13(&VAR_15->queue_mtx);
 FUNC_11(&VAR_15->stat_mtx);
 FUNC_11(&VAR_15->queue_mtx);
 if (VAR_15->vnode != ((void*)0)) {
  FUNC_17(VAR_15->vnode, VAR_3 | VAR_4);
  VAR_15->vnode->v_vflag &= ~VAR_11;
  FUNC_1(VAR_15->vnode, 0);
  (void)FUNC_16(VAR_15->vnode, VAR_15->flags & VAR_7 ?
      VAR_1 : (VAR_1|VAR_2), VAR_15->cred, VAR_16);
 }
 if (VAR_15->cred != ((void*)0))
  FUNC_2(VAR_15->cred);
 if (VAR_15->object != ((void*)0))
  FUNC_15(VAR_15->object);
 if (VAR_15->indir)
  FUNC_3(VAR_15, VAR_15->indir);
 if (VAR_15->uma)
  FUNC_14(VAR_15->uma);

 FUNC_0(VAR_15, VAR_13);
 FUNC_6(VAR_14, VAR_15->unit);
 FUNC_5(VAR_15, VAR_9);
 return (0);
}
