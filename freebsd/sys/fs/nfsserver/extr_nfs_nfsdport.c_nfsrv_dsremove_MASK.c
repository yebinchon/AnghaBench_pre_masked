
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct TYPE_3__ {int cn_lkflags; int cn_flags; char* cn_nameptr; int cn_namelen; int * cn_thread; struct ucred* cn_cred; int cn_nameiop; } ;
struct nameidata {TYPE_1__ ni_cnd; } ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct vnode*,int) ;
 int FUNC_2 (struct vnode*,int ) ;
 int VAR_7 ;
 int FUNC_3 (struct vnode*,struct vnode**,TYPE_1__*) ;
 int FUNC_4 (struct vnode*,struct vnode*,TYPE_1__*) ;
 int FUNC_5 (struct nameidata*) ;
 int FUNC_6 (struct nameidata*,char**,int **) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,char*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct vnode*) ;

__attribute__((used)) static int
FUNC_11(struct vnode *VAR_8, char *VAR_9, struct ucred *VAR_10,
    NFSPROC_T *VAR_11)
{
 struct nameidata VAR_12;
 struct vnode *VAR_13;
 char *VAR_14;
 u_long *VAR_15;
 int VAR_16;

 VAR_16 = FUNC_1(VAR_8, VAR_2);
 if (VAR_16 != 0)
  return (VAR_16);
 VAR_12.ni_cnd.cn_nameiop = VAR_0;
 VAR_12.ni_cnd.cn_lkflags = VAR_2 | VAR_3;
 VAR_12.ni_cnd.cn_cred = VAR_10;
 VAR_12.ni_cnd.cn_thread = VAR_11;
 VAR_12.ni_cnd.cn_flags = VAR_1 | VAR_5 | VAR_4 | VAR_7;
 FUNC_6(&VAR_12, &VAR_14, &VAR_15);
 VAR_12.ni_cnd.cn_nameptr = VAR_14;
 VAR_12.ni_cnd.cn_namelen = FUNC_9(VAR_9);
 FUNC_8(VAR_14, VAR_9, VAR_6);
 FUNC_0(4, "nfsrv_pnfsremove: filename=%s\n", VAR_14);
 VAR_16 = FUNC_3(VAR_8, &VAR_13, &VAR_12.ni_cnd);
 FUNC_0(4, "nfsrv_pnfsremove: aft LOOKUP=%d\n", VAR_16);
 if (VAR_16 == 0) {
  VAR_16 = FUNC_4(VAR_8, VAR_13, &VAR_12.ni_cnd);
  FUNC_10(VAR_13);
 }
 FUNC_2(VAR_8, 0);
 FUNC_5(&VAR_12);
 if (VAR_16 != 0)
  FUNC_7("pNFS: nfsrv_pnfsremove failed=%d\n", VAR_16);
 return (VAR_16);
}
