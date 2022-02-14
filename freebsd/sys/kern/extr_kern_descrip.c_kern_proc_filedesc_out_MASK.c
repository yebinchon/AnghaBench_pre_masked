
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct sbuf {int dummy; } ;
struct proc {TYPE_2__* p_pgrp; struct vnode* p_textvp; struct vnode* p_tracevp; } ;
struct filedesc {scalar_t__ fd_refcnt; int fd_lastfile; TYPE_3__* fd_ofiles; struct vnode* fd_jdir; struct vnode* fd_rdir; struct vnode* fd_cdir; } ;
struct file {int dummy; } ;
struct export_fd_buf {scalar_t__ remainder; int flags; struct filedesc* fdp; struct sbuf* sb; } ;
typedef scalar_t__ ssize_t ;
typedef int cap_rights_t ;
struct TYPE_6__ {struct file* fde_file; } ;
struct TYPE_5__ {TYPE_1__* pg_session; } ;
struct TYPE_4__ {struct vnode* s_ttyvp; } ;


 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (struct proc*) ;
 int VAR_11 ;
 int * FUNC_4 (struct filedesc*,int) ;
 int FUNC_5 (struct file*,int,int *,struct export_fd_buf*) ;
 int FUNC_6 (struct vnode*,int ,int,struct export_fd_buf*) ;
 int FUNC_7 (struct filedesc*) ;
 struct filedesc* FUNC_8 (struct proc*) ;
 int FUNC_9 (struct export_fd_buf*,int ) ;
 struct export_fd_buf* FUNC_10 (int,int ,int ) ;
 int FUNC_11 (struct vnode*) ;

int
FUNC_12(struct proc *VAR_12, struct sbuf *VAR_13, ssize_t VAR_14,
    int VAR_15)
{
 struct file *VAR_16;
 struct filedesc *VAR_17;
 struct export_fd_buf *VAR_18;
 struct vnode *VAR_19, *VAR_20, *VAR_21;
 int VAR_22, VAR_23;
 cap_rights_t VAR_24;

 FUNC_2(VAR_12, VAR_8);


 VAR_21 = VAR_12->p_tracevp;
 if (VAR_21 != ((void*)0))
  FUNC_11(VAR_21);

 VAR_20 = VAR_12->p_textvp;
 if (VAR_20 != ((void*)0))
  FUNC_11(VAR_20);

 VAR_19 = ((void*)0);
 if (VAR_12->p_pgrp != ((void*)0) && VAR_12->p_pgrp->pg_session != ((void*)0)) {
  VAR_19 = VAR_12->p_pgrp->pg_session->s_ttyvp;
  if (VAR_19 != ((void*)0))
   FUNC_11(VAR_19);
 }
 VAR_17 = FUNC_8(VAR_12);
 FUNC_3(VAR_12);
 VAR_18 = FUNC_10(sizeof(*VAR_18), VAR_9, VAR_10);
 VAR_18->fdp = ((void*)0);
 VAR_18->sb = VAR_13;
 VAR_18->remainder = VAR_14;
 VAR_18->flags = VAR_15;
 if (VAR_21 != ((void*)0))
  FUNC_6(VAR_21, VAR_7, VAR_0 | VAR_1,
      VAR_18);
 if (VAR_20 != ((void*)0))
  FUNC_6(VAR_20, VAR_6, VAR_0, VAR_18);
 if (VAR_19 != ((void*)0))
  FUNC_6(VAR_19, VAR_2, VAR_0 | VAR_1,
      VAR_18);
 VAR_22 = 0;
 if (VAR_17 == ((void*)0))
  goto fail;
 VAR_18->fdp = VAR_17;
 FUNC_0(VAR_17);

 if (VAR_17->fd_cdir != ((void*)0)) {
  FUNC_11(VAR_17->fd_cdir);
  FUNC_6(VAR_17->fd_cdir, VAR_3, VAR_0, VAR_18);
 }

 if (VAR_17->fd_rdir != ((void*)0)) {
  FUNC_11(VAR_17->fd_rdir);
  FUNC_6(VAR_17->fd_rdir, VAR_5, VAR_0, VAR_18);
 }

 if (VAR_17->fd_jdir != ((void*)0)) {
  FUNC_11(VAR_17->fd_jdir);
  FUNC_6(VAR_17->fd_jdir, VAR_4, VAR_0, VAR_18);
 }
 for (VAR_23 = 0; VAR_17->fd_refcnt > 0 && VAR_23 <= VAR_17->fd_lastfile; VAR_23++) {
  if ((VAR_16 = VAR_17->fd_ofiles[VAR_23].fde_file) == ((void*)0))
   continue;



  VAR_24 = VAR_11;







  VAR_22 = FUNC_5(VAR_16, VAR_23, &VAR_24, VAR_18);
  if (VAR_22 != 0 || VAR_18->remainder == 0)
   break;
 }
 FUNC_1(VAR_17);
 FUNC_7(VAR_17);
fail:
 FUNC_9(VAR_18, VAR_9);
 return (VAR_22);
}
