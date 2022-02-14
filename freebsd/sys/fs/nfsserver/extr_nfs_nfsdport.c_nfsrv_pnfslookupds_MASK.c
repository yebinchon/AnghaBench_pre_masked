
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct pnfsdsfile {int dsf_filename; } ;
struct TYPE_2__ {int cn_lkflags; int cn_flags; char* cn_nameptr; int cn_namelen; int * cn_thread; struct ucred* cn_cred; int cn_nameiop; } ;
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
 int FUNC_1 (struct ucred*) ;
 int VAR_7 ;
 int FUNC_2 (struct vnode*,struct vnode**,TYPE_1__*) ;
 struct ucred* FUNC_3 () ;
 int FUNC_4 (struct nameidata*) ;
 int FUNC_5 (struct nameidata*,char**,int **) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct vnode *VAR_8, struct vnode *VAR_9, struct pnfsdsfile *VAR_10,
    struct vnode **VAR_11, NFSPROC_T *VAR_12)
{
 struct nameidata VAR_13;
 struct ucred *VAR_14;
 char *VAR_15;
 u_long *VAR_16;
 struct vnode *VAR_17;
 int VAR_18;

 VAR_14 = FUNC_3();
 VAR_13.ni_cnd.cn_nameiop = VAR_5;
 VAR_13.ni_cnd.cn_lkflags = VAR_2 | VAR_1;
 VAR_13.ni_cnd.cn_cred = VAR_14;
 VAR_13.ni_cnd.cn_thread = VAR_12;
 VAR_13.ni_cnd.cn_flags = VAR_0 | VAR_4 | VAR_3 | VAR_7;
 FUNC_5(&VAR_13, &VAR_15, &VAR_16);
 VAR_13.ni_cnd.cn_nameptr = VAR_15;
 VAR_13.ni_cnd.cn_namelen = FUNC_7(VAR_10->dsf_filename);
 FUNC_6(VAR_15, VAR_10->dsf_filename, VAR_6);
 FUNC_0(4, "nfsrv_pnfslookupds: filename=%s\n", VAR_15);
 VAR_18 = FUNC_2(VAR_9, &VAR_17, &VAR_13.ni_cnd);
 FUNC_0(4, "nfsrv_pnfslookupds: aft LOOKUP=%d\n", VAR_18);
 FUNC_1(VAR_14);
 FUNC_4(&VAR_13);
 if (VAR_18 == 0)
  *VAR_11 = VAR_17;
 FUNC_0(4, "eo nfsrv_pnfslookupds=%d\n", VAR_18);
 return (VAR_18);
}
