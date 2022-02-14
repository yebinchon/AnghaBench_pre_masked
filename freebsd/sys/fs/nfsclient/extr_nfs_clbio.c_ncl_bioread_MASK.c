
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uoff_t ;
typedef scalar_t__ u_quad_t ;
struct TYPE_4__ {int bo_bsize; } ;
struct vnode {int v_type; TYPE_2__ v_bufobj; int v_mount; } ;
struct uio {scalar_t__ uio_rw; scalar_t__ uio_resid; scalar_t__ uio_offset; struct thread* uio_td; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsnode {scalar_t__ n_size; int n_direofoffset; } ;
struct nfsmount {int nm_flag; int nm_state; scalar_t__ nm_rsize; scalar_t__ nm_readdirsize; scalar_t__ nm_maxfilesize; int nm_readahead; int nm_mtx; } ;
struct buf {int b_flags; int b_resid; scalar_t__ b_data; int b_ioflags; void* b_iocmd; } ;
typedef scalar_t__ off_t ;
typedef int daddr_t ;
struct TYPE_3__ {int biocache_readdirs; int biocache_readlinks; int biocache_reads; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (unsigned int,int) ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfsnode*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (struct nfsnode*) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;

 struct nfsmount* FUNC_5 (int ) ;


 struct nfsnode* FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct buf*) ;
 int * FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (unsigned int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct nfsmount*,struct buf*,struct ucred*,struct thread*) ;
 int FUNC_13 (struct vnode*,struct buf*,struct ucred*,struct thread*,int ) ;
 int FUNC_14 (struct nfsmount*,struct vnode*,struct ucred*,struct thread*) ;
 int FUNC_15 (struct vnode*) ;
 int FUNC_16 (struct vnode*,struct uio*,struct ucred*) ;
 int FUNC_17 (struct vnode*,int ,struct thread*,int) ;
 scalar_t__ VAR_18 ;
 int FUNC_18 (struct nfsmount*) ;
 int FUNC_19 (struct nfsmount*,struct thread*) ;
 int FUNC_20 (struct vnode*,struct thread*,struct ucred*) ;
 struct buf* FUNC_21 (struct vnode*,int,int,struct thread*) ;
 TYPE_1__ VAR_19 ;
 int FUNC_22 (char*,int) ;
 int FUNC_23 (struct buf*,int ) ;
 int FUNC_24 (struct buf*) ;
 int FUNC_25 (scalar_t__,int,struct uio*) ;

int
FUNC_26(struct vnode *VAR_20, struct uio *VAR_21, int VAR_22, struct ucred *VAR_23)
{
 struct nfsnode *VAR_24 = FUNC_6(VAR_20);
 int VAR_25, VAR_26;
 struct buf *VAR_27, *VAR_28;
 struct thread *VAR_29;
 struct nfsmount *VAR_30 = FUNC_5(VAR_20->v_mount);
 daddr_t VAR_31, VAR_32;
 int VAR_33;
 int VAR_34;
 int VAR_35, VAR_36 = 0, VAR_37 = 0, VAR_38 = 0;
 off_t VAR_39;

 FUNC_0(VAR_21->uio_rw == VAR_17, ("ncl_read mode"));
 if (VAR_21->uio_resid == 0)
  return (0);
 if (VAR_21->uio_offset < 0)
  return (VAR_9);
 VAR_29 = VAR_21->uio_td;

 FUNC_10(&VAR_30->nm_mtx);
 if ((VAR_30->nm_flag & VAR_13) != 0 &&
     (VAR_30->nm_state & VAR_14) == 0) {
  FUNC_11(&VAR_30->nm_mtx);
  (void)FUNC_14(VAR_30, VAR_20, VAR_23, VAR_29);
  FUNC_10(&VAR_30->nm_mtx);
 }
 if (VAR_30->nm_rsize == 0 || VAR_30->nm_readdirsize == 0)
  (void) FUNC_18(VAR_30);

 VAR_39 = VAR_21->uio_offset + VAR_21->uio_resid;
 if (VAR_20->v_type != 130 &&
     (VAR_39 > VAR_30->nm_maxfilesize || VAR_39 < VAR_21->uio_offset)) {
  FUNC_11(&VAR_30->nm_mtx);
  return (VAR_7);
 }
 FUNC_11(&VAR_30->nm_mtx);

 if (VAR_18 && (VAR_22 & VAR_10) && (VAR_20->v_type == 128))

  return FUNC_16(VAR_20, VAR_21, VAR_23);

 VAR_25 = VAR_20->v_bufobj.bo_bsize;
 VAR_34 = (int)((off_t)(VAR_22 >> VAR_11) * VAR_25 / VAR_2);

 VAR_36 = FUNC_20(VAR_20, VAR_29, VAR_23);
 if (VAR_36)
  return VAR_36;

 do {
     u_quad_t VAR_40;

     FUNC_3(VAR_24);
     VAR_40 = VAR_24->n_size;
     FUNC_4(VAR_24);

     switch (VAR_20->v_type) {
     case 128:
  FUNC_2(VAR_19);
  VAR_31 = VAR_21->uio_offset / VAR_25;
  VAR_38 = VAR_21->uio_offset - (VAR_31 * VAR_25);




  if (VAR_30->nm_readahead > 0) {
      for (VAR_35 = 0; VAR_35 < VAR_30->nm_readahead && VAR_35 < VAR_34 &&
   (off_t)(VAR_31 + 1 + VAR_35) * VAR_25 < VAR_40; VAR_35++) {
   VAR_32 = VAR_31 + 1 + VAR_35;
   if (FUNC_8(&VAR_20->v_bufobj, VAR_32) == ((void*)0)) {
       VAR_28 = FUNC_21(VAR_20, VAR_32, VAR_25, VAR_29);
       if (!VAR_28) {
    VAR_36 = FUNC_19(VAR_30, VAR_29);
    return (VAR_36 ? VAR_36 : VAR_8);
       }
       if ((VAR_28->b_flags & (VAR_4|VAR_5)) == 0) {
    VAR_28->b_flags |= VAR_3;
    VAR_28->b_iocmd = VAR_1;
    FUNC_23(VAR_28, 0);
    if (FUNC_12(VAR_30, VAR_28, VAR_23, VAR_29)) {
        VAR_28->b_flags |= VAR_6;
        VAR_28->b_ioflags |= VAR_0;
        FUNC_24(VAR_28);
        FUNC_7(VAR_28);
        break;
    }
       } else {
    FUNC_7(VAR_28);
       }
   }
      }
  }


  VAR_33 = VAR_25;
  if ((off_t)VAR_31 * VAR_25 >= VAR_40) {
   VAR_33 = 0;
  } else if ((off_t)(VAR_31 + 1) * VAR_25 > VAR_40) {
   VAR_33 = VAR_40 - (off_t)VAR_31 * VAR_25;
  }
  VAR_27 = FUNC_21(VAR_20, VAR_31, VAR_33, VAR_29);

  if (!VAR_27) {
   VAR_36 = FUNC_19(VAR_30, VAR_29);
   return (VAR_36 ? VAR_36 : VAR_8);
  }






  if ((VAR_27->b_flags & VAR_4) == 0) {
      VAR_27->b_iocmd = VAR_1;
      FUNC_23(VAR_27, 0);
      VAR_36 = FUNC_13(VAR_20, VAR_27, VAR_23, VAR_29, 0);
      if (VAR_36) {
   FUNC_7(VAR_27);
   return (VAR_36);
      }
  }
  VAR_37 = 0;
  if (VAR_38 < VAR_33)
   VAR_37 = FUNC_1((unsigned)(VAR_33 - VAR_38), VAR_21->uio_resid);
  break;
     case 129:
  FUNC_2(VAR_19);
  VAR_27 = FUNC_21(VAR_20, (daddr_t)0, VAR_16, VAR_29);
  if (!VAR_27) {
   VAR_36 = FUNC_19(VAR_30, VAR_29);
   return (VAR_36 ? VAR_36 : VAR_8);
  }
  if ((VAR_27->b_flags & VAR_4) == 0) {
      VAR_27->b_iocmd = VAR_1;
      FUNC_23(VAR_27, 0);
      VAR_36 = FUNC_13(VAR_20, VAR_27, VAR_23, VAR_29, 0);
      if (VAR_36) {
   VAR_27->b_ioflags |= VAR_0;
   FUNC_7(VAR_27);
   return (VAR_36);
      }
  }
  VAR_37 = FUNC_1(VAR_21->uio_resid, VAR_16 - VAR_27->b_resid);
  VAR_38 = 0;
  break;
     case 130:
  FUNC_2(VAR_19);
  if (VAR_24->n_direofoffset
      && VAR_21->uio_offset >= VAR_24->n_direofoffset) {
      return (0);
  }
  VAR_31 = (uoff_t)VAR_21->uio_offset / VAR_15;
  VAR_38 = VAR_21->uio_offset & (VAR_15 - 1);
  VAR_27 = FUNC_21(VAR_20, VAR_31, VAR_15, VAR_29);
  if (!VAR_27) {
      VAR_36 = FUNC_19(VAR_30, VAR_29);
      return (VAR_36 ? VAR_36 : VAR_8);
  }
  if ((VAR_27->b_flags & VAR_4) == 0) {
      VAR_27->b_iocmd = VAR_1;
      FUNC_23(VAR_27, 0);
      VAR_36 = FUNC_13(VAR_20, VAR_27, VAR_23, VAR_29, 0);
      if (VAR_36) {
       FUNC_7(VAR_27);
      }
      while (VAR_36 == VAR_12) {
   FUNC_15(VAR_20);
   VAR_36 = FUNC_17(VAR_20, 0, VAR_29, 1);
   for (VAR_26 = 0; VAR_26 <= VAR_31 && !VAR_36; VAR_26++) {
       if (VAR_24->n_direofoffset
    && (VAR_26 * VAR_15) >= VAR_24->n_direofoffset)
        return (0);
       VAR_27 = FUNC_21(VAR_20, VAR_26, VAR_15, VAR_29);
       if (!VAR_27) {
    VAR_36 = FUNC_19(VAR_30, VAR_29);
    return (VAR_36 ? VAR_36 : VAR_8);
       }
       if ((VAR_27->b_flags & VAR_4) == 0) {
        VAR_27->b_iocmd = VAR_1;
        FUNC_23(VAR_27, 0);
        VAR_36 = FUNC_13(VAR_20, VAR_27, VAR_23, VAR_29, 0);




        if (VAR_36 == 0 && (VAR_27->b_flags & VAR_6))
         break;
       }






       if (VAR_36 || VAR_26 < VAR_31)
        FUNC_7(VAR_27);
   }
      }





      if (VAR_36)
       return (VAR_36);
  }






  if (VAR_30->nm_readahead > 0 &&
      (VAR_27->b_flags & VAR_6) == 0 &&
      (VAR_24->n_direofoffset == 0 ||
      (VAR_31 + 1) * VAR_15 < VAR_24->n_direofoffset) &&
      FUNC_8(&VAR_20->v_bufobj, VAR_31 + 1) == ((void*)0)) {
   VAR_28 = FUNC_21(VAR_20, VAR_31 + 1, VAR_15, VAR_29);
   if (VAR_28) {
       if ((VAR_28->b_flags & (VAR_4|VAR_5)) == 0) {
    VAR_28->b_flags |= VAR_3;
    VAR_28->b_iocmd = VAR_1;
    FUNC_23(VAR_28, 0);
    if (FUNC_12(VAR_30, VAR_28, VAR_23, VAR_29)) {
        VAR_28->b_flags |= VAR_6;
        VAR_28->b_ioflags |= VAR_0;
        FUNC_24(VAR_28);
        FUNC_7(VAR_28);
    }
       } else {
    FUNC_7(VAR_28);
       }
   }
  }
  VAR_37 = FUNC_9(VAR_21->uio_resid, VAR_15 - VAR_27->b_resid - VAR_38);
  if (VAR_24->n_direofoffset && VAR_37 > VAR_24->n_direofoffset - VAR_21->uio_offset)
   VAR_37 = VAR_24->n_direofoffset - VAR_21->uio_offset;
  break;
     default:
  FUNC_22(" ncl_bioread: type %x unexpected\n", VAR_20->v_type);
  VAR_27 = ((void*)0);
  break;
     }

     if (VAR_37 > 0) {
      VAR_36 = FUNC_25(VAR_27->b_data + VAR_38, (int)VAR_37, VAR_21);
     }
     if (VAR_20->v_type == 129)
  VAR_37 = 0;
     if (VAR_27 != ((void*)0))
  FUNC_7(VAR_27);
 } while (VAR_36 == 0 && VAR_21->uio_resid > 0 && VAR_37 > 0);
 return (VAR_36);
}
