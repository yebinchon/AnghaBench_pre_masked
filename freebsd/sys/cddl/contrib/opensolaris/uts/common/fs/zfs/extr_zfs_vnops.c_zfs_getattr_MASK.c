
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_26__ {int z_pflags; int z_mode; scalar_t__ z_links; scalar_t__ z_blksz; int z_sa_hdl; int * z_atime; int z_gen; int z_seq; int z_size; int z_id; TYPE_3__* z_zfsvfs; } ;
typedef TYPE_2__ znode_t ;
struct TYPE_27__ {int z_max_blksz; scalar_t__ z_use_fuids; TYPE_1__* z_vfs; } ;
typedef TYPE_3__ zfsvfs_t ;
typedef int xvattr_t ;
struct TYPE_28__ {int xoa_archive; int xoa_readonly; int xoa_system; int xoa_hidden; int xoa_nounlink; int xoa_immutable; int xoa_appendonly; int xoa_nodump; int xoa_opaque; int xoa_av_quarantined; int xoa_av_modified; int xoa_reparse; int xoa_offline; int xoa_sparse; int xoa_generation; } ;
typedef TYPE_4__ xoptattr_t ;
struct TYPE_29__ {scalar_t__ v_type; int v_flag; int v_rdev; } ;
typedef TYPE_5__ vnode_t ;
struct TYPE_30__ {int va_mode; scalar_t__ va_nlink; int va_bytes; int va_blksize; int va_birthtime; int va_ctime; int va_mtime; int va_atime; int va_filerev; scalar_t__ va_flags; int va_seq; int va_rdev; int va_size; int va_nodeid; int va_fsid; int va_type; int va_uid; int va_gid; } ;
typedef TYPE_6__ vattr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_longlong_t ;
typedef int sa_bulk_attr_t ;
typedef int cred_t ;
typedef int caller_context_t ;
typedef int boolean_t ;
struct TYPE_25__ {int vfs_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ,int *,int *,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_6 (TYPE_5__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *,int) ;
 int FUNC_15 (int ,int *,int*) ;
 int FUNC_16 (TYPE_5__*,TYPE_6__*) ;
 TYPE_4__* FUNC_17 (int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_20 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_23(vnode_t *VAR_41, vattr_t *VAR_42, int VAR_43, cred_t *VAR_44,
    caller_context_t *VAR_45)
{
 znode_t *VAR_46 = FUNC_6(VAR_41);
 zfsvfs_t *VAR_47 = VAR_46->z_zfsvfs;
 int VAR_48 = 0;
 uint32_t VAR_49;
 u_longlong_t VAR_50;
 uint64_t VAR_51[2], VAR_52[2], VAR_53[2], VAR_54;
 xvattr_t *VAR_55 = (xvattr_t *)VAR_42;
 xoptattr_t *VAR_56 = ((void*)0);
 boolean_t VAR_57 = (VAR_43 & VAR_1) ? VAR_3 : VAR_2;
 sa_bulk_attr_t VAR_58[4];
 int VAR_59 = 0;

 FUNC_9(VAR_47);
 FUNC_12(VAR_46);

 FUNC_19(VAR_46, VAR_44, &VAR_42->va_uid, &VAR_42->va_gid);

 FUNC_1(VAR_58, VAR_59, FUNC_4(VAR_47), ((void*)0), &VAR_51, 16);
 FUNC_1(VAR_58, VAR_59, FUNC_3(VAR_47), ((void*)0), &VAR_52, 16);
 FUNC_1(VAR_58, VAR_59, FUNC_2(VAR_47), ((void*)0), &VAR_53, 16);
 if (VAR_41->v_type == VAR_5 || VAR_41->v_type == VAR_6)
  FUNC_1(VAR_58, VAR_59, FUNC_5(VAR_47), ((void*)0),
      &VAR_54, 8);

 if ((VAR_48 = FUNC_14(VAR_46->z_sa_hdl, VAR_58, VAR_59)) != 0) {
  FUNC_10(VAR_47);
  return (VAR_48);
 }






 if (!(VAR_46->z_pflags & VAR_25) &&
     (VAR_42->va_uid != FUNC_13(VAR_44))) {
  if ((VAR_48 = FUNC_22(VAR_46, VAR_0, 0,
      VAR_57, VAR_44))) {
   FUNC_10(VAR_47);
   return (VAR_48);
  }
 }






 VAR_42->va_type = FUNC_0(VAR_46->z_mode);
 VAR_42->va_mode = VAR_46->z_mode & ~VAR_4;



 FUNC_16(VAR_41, VAR_42);

 VAR_42->va_nodeid = VAR_46->z_id;
 VAR_42->va_nlink = VAR_46->z_links;
 if ((VAR_41->v_flag & VAR_8) && FUNC_21(VAR_46) &&
     VAR_46->z_links < VAR_32)
  VAR_42->va_nlink++;
 VAR_42->va_size = VAR_46->z_size;



 if (VAR_41->v_type == VAR_5 || VAR_41->v_type == VAR_6)
  VAR_42->va_rdev = FUNC_18(VAR_54);

 VAR_42->va_seq = VAR_46->z_seq;
 VAR_42->va_flags = 0;
      VAR_42->va_filerev = VAR_46->z_seq;





 if ((VAR_56 = FUNC_17(VAR_55)) != ((void*)0) && VAR_47->z_use_fuids) {
  if (FUNC_7(VAR_55, VAR_10)) {
   VAR_56->xoa_archive =
       ((VAR_46->z_pflags & VAR_27) != 0);
   FUNC_8(VAR_55, VAR_10);
  }

  if (FUNC_7(VAR_55, VAR_21)) {
   VAR_56->xoa_readonly =
       ((VAR_46->z_pflags & VAR_37) != 0);
   FUNC_8(VAR_55, VAR_21);
  }

  if (FUNC_7(VAR_55, VAR_24)) {
   VAR_56->xoa_system =
       ((VAR_46->z_pflags & VAR_40) != 0);
   FUNC_8(VAR_55, VAR_24);
  }

  if (FUNC_7(VAR_55, VAR_15)) {
   VAR_56->xoa_hidden =
       ((VAR_46->z_pflags & VAR_30) != 0);
   FUNC_8(VAR_55, VAR_15);
  }

  if (FUNC_7(VAR_55, VAR_18)) {
   VAR_56->xoa_nounlink =
       ((VAR_46->z_pflags & VAR_34) != 0);
   FUNC_8(VAR_55, VAR_18);
  }

  if (FUNC_7(VAR_55, VAR_16)) {
   VAR_56->xoa_immutable =
       ((VAR_46->z_pflags & VAR_31) != 0);
   FUNC_8(VAR_55, VAR_16);
  }

  if (FUNC_7(VAR_55, VAR_9)) {
   VAR_56->xoa_appendonly =
       ((VAR_46->z_pflags & VAR_26) != 0);
   FUNC_8(VAR_55, VAR_9);
  }

  if (FUNC_7(VAR_55, VAR_17)) {
   VAR_56->xoa_nodump =
       ((VAR_46->z_pflags & VAR_33) != 0);
   FUNC_8(VAR_55, VAR_17);
  }

  if (FUNC_7(VAR_55, VAR_20)) {
   VAR_56->xoa_opaque =
       ((VAR_46->z_pflags & VAR_36) != 0);
   FUNC_8(VAR_55, VAR_20);
  }

  if (FUNC_7(VAR_55, VAR_12)) {
   VAR_56->xoa_av_quarantined =
       ((VAR_46->z_pflags & VAR_29) != 0);
   FUNC_8(VAR_55, VAR_12);
  }

  if (FUNC_7(VAR_55, VAR_11)) {
   VAR_56->xoa_av_modified =
       ((VAR_46->z_pflags & VAR_28) != 0);
   FUNC_8(VAR_55, VAR_11);
  }

  if (FUNC_7(VAR_55, VAR_13) &&
      VAR_41->v_type == VAR_7) {
   FUNC_20(VAR_46, VAR_55);
  }

  if (FUNC_7(VAR_55, VAR_22)) {
   VAR_56->xoa_reparse = ((VAR_46->z_pflags & VAR_38) != 0);
   FUNC_8(VAR_55, VAR_22);
  }
  if (FUNC_7(VAR_55, VAR_14)) {
   VAR_56->xoa_generation = VAR_46->z_gen;
   FUNC_8(VAR_55, VAR_14);
  }

  if (FUNC_7(VAR_55, VAR_19)) {
   VAR_56->xoa_offline =
       ((VAR_46->z_pflags & VAR_35) != 0);
   FUNC_8(VAR_55, VAR_19);
  }

  if (FUNC_7(VAR_55, VAR_23)) {
   VAR_56->xoa_sparse =
       ((VAR_46->z_pflags & VAR_39) != 0);
   FUNC_8(VAR_55, VAR_23);
  }
 }

 FUNC_11(&VAR_42->va_atime, VAR_46->z_atime);
 FUNC_11(&VAR_42->va_mtime, VAR_51);
 FUNC_11(&VAR_42->va_ctime, VAR_52);
 FUNC_11(&VAR_42->va_birthtime, VAR_53);


 FUNC_15(VAR_46->z_sa_hdl, &VAR_49, &VAR_50);
 VAR_42->va_blksize = VAR_49;
 VAR_42->va_bytes = VAR_50 << 9;

 if (VAR_46->z_blksz == 0) {



  VAR_42->va_blksize = VAR_47->z_max_blksz;
 }

 FUNC_10(VAR_47);
 return (0);
}
