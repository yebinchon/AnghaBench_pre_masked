
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct vnode {int dummy; } ;
struct thread {int td_ucred; } ;
struct statfs {int * f_fstypename; int f_mntfromname; int f_mntonname; int f_iosize; } ;
struct TYPE_3__ {int va_mode; int va_nlink; int va_fileid; int va_gen; int va_size; int va_blocksize; scalar_t__ va_gid; scalar_t__ va_uid; int va_type; } ;
struct nfsvattr {TYPE_1__ na_vattr; } ;
struct nfsstatfs {int dummy; } ;
struct nfsnode {int dummy; } ;
struct nfsmount {int nm_flag; int nm_mtx; int nm_fhsize; int nm_fh; } ;
struct nfsfsinfo {int dummy; } ;
struct mount {TYPE_2__* mnt_vfc; struct statfs mnt_stat; } ;
typedef scalar_t__ gid_t ;
typedef int caddr_t ;
struct TYPE_4__ {int vfc_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (struct nfsmount*) ;
 scalar_t__ FUNC_3 (struct nfsmount*) ;
 int VAR_4 ;
 struct vnode* FUNC_4 (struct nfsnode*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct vnode*) ;
 int VAR_6 ;
 struct nfsmount* FUNC_6 (struct mount*) ;
 int FUNC_7 (int ,int ,int ) ;
 struct thread* VAR_7 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct mount*,int ,int ,struct nfsnode**,int ) ;
 int FUNC_11 (struct nfsmount*) ;
 int FUNC_12 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_13 (struct nfsmount*,struct nfsfsinfo*) ;
 int FUNC_14 (struct nfsmount*,struct nfsstatfs*,struct statfs*) ;
 int FUNC_15 (struct thread*,int,scalar_t__,scalar_t__) ;
 int FUNC_16 (struct vnode*,struct nfsfsinfo*,int ,struct thread*,struct nfsvattr*,int*,int *) ;
 int FUNC_17 (struct nfsmount*,int ,int ,int,int ,struct thread*,struct nfsvattr*,int *,int *) ;
 int FUNC_18 (struct vnode*,struct nfsstatfs*,struct nfsfsinfo*,int ,struct thread*,struct nfsvattr*,int*,int *) ;
 int FUNC_19 (int *,int ,int ) ;
 int FUNC_20 (struct mount*,int ) ;
 int FUNC_21 (struct mount*) ;
 int FUNC_22 (struct vnode*) ;

__attribute__((used)) static int
FUNC_23(struct mount *VAR_8, struct statfs *VAR_9)
{
 struct vnode *VAR_10;
 struct thread *VAR_11;
 struct nfsmount *VAR_12 = FUNC_6(VAR_8);
 struct nfsvattr VAR_13;
 struct nfsfsinfo VAR_14;
 struct nfsstatfs VAR_15;
 int VAR_16 = 0, VAR_17, VAR_18 = 0, VAR_19;
 struct nfsnode *VAR_20;

 VAR_11 = VAR_7;

 VAR_16 = FUNC_20(VAR_8, VAR_1);
 if (VAR_16)
  return (VAR_16);
 VAR_16 = FUNC_10(VAR_8, VAR_12->nm_fh, VAR_12->nm_fhsize, &VAR_20, VAR_0);
 if (VAR_16) {
  FUNC_21(VAR_8);
  return (VAR_16);
 }
 VAR_10 = FUNC_4(VAR_20);
 FUNC_8(&VAR_12->nm_mtx);
 if (FUNC_3(VAR_12) && !FUNC_2(VAR_12)) {
  FUNC_9(&VAR_12->nm_mtx);
  VAR_16 = FUNC_16(VAR_10, &VAR_14, VAR_11->td_ucred, VAR_11, &VAR_13,
      &VAR_17, ((void*)0));
  if (!VAR_16)
   VAR_18 = 1;
 } else
  FUNC_9(&VAR_12->nm_mtx);
 if (!VAR_16)
  VAR_16 = FUNC_18(VAR_10, &VAR_15, &VAR_14, VAR_11->td_ucred, VAR_11, &VAR_13,
      &VAR_17, ((void*)0));
 if (VAR_16 != 0)
  FUNC_1(2, "statfs=%d\n", VAR_16);
 if (VAR_17 == 0) {
  VAR_19 = FUNC_17(VAR_12, VAR_12->nm_fh, VAR_12->nm_fhsize, 1,
      VAR_11->td_ucred, VAR_11, &VAR_13, ((void*)0), ((void*)0));
  if (VAR_19) {



   FUNC_0((caddr_t)&VAR_13, sizeof (struct nfsvattr));
   VAR_13.na_vattr.va_type = VAR_6;
   VAR_13.na_vattr.va_mode = 0777;
   VAR_13.na_vattr.va_nlink = 100;
   VAR_13.na_vattr.va_uid = (uid_t)0;
   VAR_13.na_vattr.va_gid = (gid_t)0;
   VAR_13.na_vattr.va_fileid = 2;
   VAR_13.na_vattr.va_gen = 1;
   VAR_13.na_vattr.va_blocksize = VAR_5;
   VAR_13.na_vattr.va_size = 512 * 1024;
  }
 }
 (void) FUNC_12(&VAR_10, &VAR_13, ((void*)0), ((void*)0), 0, 1);
 if (!VAR_16) {
     FUNC_8(&VAR_12->nm_mtx);
     if (VAR_18 || (VAR_12->nm_flag & VAR_4))
  FUNC_13(VAR_12, &VAR_14);
     FUNC_14(VAR_12, &VAR_15, VAR_9);
     VAR_9->f_iosize = FUNC_11(VAR_12);
     FUNC_9(&VAR_12->nm_mtx);
     if (VAR_9 != &VAR_8->mnt_stat) {
  FUNC_7(VAR_8->mnt_stat.f_mntonname, VAR_9->f_mntonname, VAR_3);
  FUNC_7(VAR_8->mnt_stat.f_mntfromname, VAR_9->f_mntfromname, VAR_3);
     }
     FUNC_19(&VAR_9->f_fstypename[0], VAR_8->mnt_vfc->vfc_name, VAR_2);
 } else if (FUNC_5(VAR_10)) {
  VAR_16 = FUNC_15(VAR_11, VAR_16, (uid_t)0, (gid_t)0);
 }
 FUNC_22(VAR_10);
 FUNC_21(VAR_8);
 return (VAR_16);
}
