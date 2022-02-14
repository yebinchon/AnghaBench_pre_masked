
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct vnode {scalar_t__ v_type; } ;
struct thread {int dummy; } ;
struct nfsvattr {scalar_t__ na_filerev; int na_size; int na_mtime; int na_atime; int na_vattr; } ;
struct nfsrv_descript {int nd_flag; int nd_cred; } ;
typedef int nfsattrbit_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*,int,int,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*,int) ;
 int FUNC_5 (struct vnode*,int ) ;
 int FUNC_6 (struct vnode*,int *,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (struct vnode*,int ,int ,int ,struct thread*,int ,int *,int *,int *,struct nfsvattr*,int *) ;

int
FUNC_8(struct vnode *VAR_11, struct nfsvattr *VAR_12,
    struct nfsrv_descript *VAR_13, struct thread *VAR_14, int VAR_15,
    nfsattrbit_t *VAR_16)
{
 int VAR_17, VAR_18, VAR_19 = 0;
 struct nfsvattr VAR_20;

 if (VAR_15 == 0) {





  if (FUNC_3(VAR_11) != VAR_0) {
   VAR_19 = 1;
   FUNC_4(VAR_11, VAR_2 | VAR_1);
  }
 }
 VAR_18 = 0;
 if (VAR_11->v_type == VAR_9 && VAR_10 > 0 && (VAR_16 == ((void*)0) ||
     (VAR_13->nd_flag & VAR_3) == 0 ||
     FUNC_2(VAR_16, VAR_4) ||
     FUNC_2(VAR_16, VAR_5) ||
     FUNC_2(VAR_16, VAR_6) ||
     FUNC_2(VAR_16, VAR_7))) {
  VAR_17 = FUNC_7(VAR_11, 0, 0, VAR_13->nd_cred, VAR_14,
      VAR_8, ((void*)0), ((void*)0), ((void*)0), &VAR_20, ((void*)0));
  if (VAR_17 == 0)
   VAR_18 = 1;
 }

 VAR_17 = FUNC_6(VAR_11, &VAR_12->na_vattr, VAR_13->nd_cred);
 if (VAR_19 != 0)
  FUNC_5(VAR_11, 0);





 if (VAR_18 != 0) {
  VAR_12->na_atime = VAR_20.na_atime;
  VAR_12->na_mtime = VAR_20.na_mtime;
  VAR_12->na_filerev = VAR_20.na_filerev;
  VAR_12->na_size = VAR_20.na_size;
 }
 FUNC_0(4, "nfsvno_getattr: gotattr=%d err=%d chg=%ju\n", VAR_18,
     VAR_17, (uintmax_t)VAR_20.na_filerev);

 FUNC_1(VAR_17);
 return (VAR_17);
}
