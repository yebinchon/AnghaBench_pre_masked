
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct uio {int uio_iovcnt; int uio_resid; int * uio_td; void* uio_segflg; int uio_rw; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct thread {int dummy; } ;
struct nfsrv_descript {int nd_flag; } ;
struct nfsexstuff {int dummy; } ;
struct componentname {int cn_flags; char* cn_nameptr; char* cn_pnbuf; int cn_cred; struct thread* cn_thread; } ;
struct nameidata {int ni_pathlen; struct vnode* ni_dvp; struct componentname ni_cnd; struct vnode* ni_startdir; struct vnode* ni_vp; struct vnode* ni_rootdir; int ni_next; scalar_t__ ni_loopcnt; int * ni_topdir; void* ni_segflg; scalar_t__ ni_lcf; } ;
struct iovec {char* iov_base; int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_13 ;
 int FUNC_1 (int,struct nfsrv_descript*) ;
 scalar_t__ FUNC_2 (struct nfsexstuff*) ;
 scalar_t__ FUNC_3 (struct nfsexstuff*) ;
 int FUNC_4 (struct vnode*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_5 (struct vnode*,struct uio*,int ) ;
 int FUNC_6 (struct vnode*) ;
 int VAR_21 ;
 int FUNC_7 (struct nameidata*) ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_8 (struct nameidata*) ;
 void* VAR_24 ;
 char* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct vnode*) ;
 int FUNC_12 (struct vnode*) ;

int
FUNC_13(struct nfsrv_descript *VAR_25, struct nameidata *VAR_26,
    struct vnode *VAR_27, int VAR_28, struct nfsexstuff *VAR_29, struct thread *VAR_30,
    struct vnode **VAR_31)
{
 struct componentname *VAR_32 = &VAR_26->ni_cnd;
 int VAR_33;
 struct iovec VAR_34;
 struct uio VAR_35;
 int VAR_36 = (VAR_32->cn_flags & VAR_6) != 0, VAR_37;
 int VAR_38 = 0;
 char *VAR_39;

 *VAR_31 = ((void*)0);
 VAR_32->cn_nameptr = VAR_32->cn_pnbuf;
 VAR_26->ni_lcf = 0;



 if (VAR_27->v_type != VAR_20) {
  if (VAR_28)
   FUNC_11(VAR_27);
  else
   FUNC_12(VAR_27);
  FUNC_8(VAR_26);
  VAR_38 = VAR_4;
  goto out1;
 }
 if (VAR_28)
  FUNC_4(VAR_27, 0);
 FUNC_6(VAR_27);
 *VAR_31 = VAR_27;
 if (FUNC_3(VAR_29))
  VAR_32->cn_flags |= VAR_15;
 VAR_26->ni_segflg = VAR_19;

 if (VAR_25->nd_flag & VAR_12) {
  VAR_26->ni_loopcnt = 0;
  if (VAR_32->cn_pnbuf[0] == '/') {
   FUNC_12(VAR_27);




   for (VAR_33 = 1; VAR_33 < VAR_26->ni_pathlen; VAR_33++)
    if (VAR_32->cn_pnbuf[VAR_33] != '/')
     break;
   if (VAR_33 == VAR_26->ni_pathlen) {
    VAR_38 = VAR_13;
    goto out;
   }
   VAR_27 = VAR_24;
   FUNC_6(VAR_27);
  }
 } else if ((VAR_23 == 0 && FUNC_2(VAR_29)) ||
     (VAR_25->nd_flag & VAR_11) == 0) {





  VAR_32->cn_flags |= VAR_14;
 }






 VAR_32->cn_thread = VAR_30;
 VAR_26->ni_startdir = VAR_27;
 VAR_26->ni_rootdir = VAR_24;
 VAR_26->ni_topdir = ((void*)0);

 if (!VAR_36)
  VAR_32->cn_flags |= VAR_6;
 for (;;) {
  VAR_32->cn_nameptr = VAR_32->cn_pnbuf;







  VAR_38 = FUNC_7(VAR_26);
  if (VAR_38)
   break;





  if ((VAR_32->cn_flags & VAR_5) == 0) {
   if ((VAR_32->cn_flags & (VAR_16 | VAR_17)) == 0)
    FUNC_8(VAR_26);
   if (VAR_26->ni_vp && !VAR_36)
    FUNC_4(VAR_26->ni_vp, 0);
   break;
  }




  if ((VAR_32->cn_flags & VAR_7) && VAR_26->ni_pathlen == 1)
   FUNC_4(VAR_26->ni_dvp, 0);
  if (!(VAR_25->nd_flag & VAR_12)) {
   VAR_38 = VAR_0;
   goto badlink2;
  }

  if (VAR_26->ni_loopcnt++ >= VAR_9) {
   VAR_38 = VAR_1;
   goto badlink2;
  }
  if (VAR_26->ni_pathlen > 1)
   VAR_39 = FUNC_9(VAR_22, VAR_10);
  else
   VAR_39 = VAR_32->cn_pnbuf;
  VAR_34.iov_base = VAR_39;
  VAR_34.iov_len = VAR_8;
  VAR_35.uio_iov = &VAR_34;
  VAR_35.uio_iovcnt = 1;
  VAR_35.uio_offset = 0;
  VAR_35.uio_rw = VAR_18;
  VAR_35.uio_segflg = VAR_19;
  VAR_35.uio_td = ((void*)0);
  VAR_35.uio_resid = VAR_8;
  VAR_38 = FUNC_5(VAR_26->ni_vp, &VAR_35, VAR_32->cn_cred);
  if (VAR_38) {
  badlink1:
   if (VAR_26->ni_pathlen > 1)
    FUNC_10(VAR_22, VAR_39);
  badlink2:
   FUNC_12(VAR_26->ni_dvp);
   FUNC_11(VAR_26->ni_vp);
   break;
  }
  VAR_37 = VAR_8 - VAR_35.uio_resid;
  if (VAR_37 == 0) {
   VAR_38 = VAR_3;
   goto badlink1;
  }
  if (VAR_37 + VAR_26->ni_pathlen >= VAR_8) {
   VAR_38 = VAR_2;
   goto badlink1;
  }




  if (VAR_26->ni_pathlen > 1) {
   FUNC_0(VAR_26->ni_next, VAR_39 + VAR_37, VAR_26->ni_pathlen);
   FUNC_10(VAR_22, VAR_32->cn_pnbuf);
   VAR_32->cn_pnbuf = VAR_39;
  } else
   VAR_32->cn_pnbuf[VAR_37] = '\0';
  VAR_26->ni_pathlen += VAR_37;
  FUNC_11(VAR_26->ni_vp);
  VAR_26->ni_vp = ((void*)0);

  if (VAR_32->cn_pnbuf[0] == '/') {
   FUNC_12(VAR_26->ni_dvp);
   VAR_26->ni_dvp = VAR_26->ni_rootdir;
   FUNC_6(VAR_26->ni_dvp);
  }
  VAR_26->ni_startdir = VAR_26->ni_dvp;
  VAR_26->ni_dvp = ((void*)0);
 }
 if (!VAR_36)
  VAR_32->cn_flags &= ~VAR_6;

out:
 if (VAR_38) {
  FUNC_8(VAR_26);
  VAR_26->ni_vp = ((void*)0);
  VAR_26->ni_dvp = ((void*)0);
  VAR_26->ni_startdir = ((void*)0);
 } else if ((VAR_26->ni_cnd.cn_flags & (VAR_21|VAR_7)) == 0) {
  VAR_26->ni_dvp = ((void*)0);
 }

out1:
 FUNC_1(VAR_38, VAR_25);
 return (VAR_38);
}
