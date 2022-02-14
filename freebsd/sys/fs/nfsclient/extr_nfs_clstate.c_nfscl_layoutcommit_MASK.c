
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vnode_t ;
struct nfsnode {TYPE_1__* n_fhp; } ;
struct nfsmount {struct nfsclclient* nm_clp; } ;
struct nfscllayout {int nfsly_flags; int nfsly_lock; } ;
struct nfsclclient {int nfsc_nmp; } ;
typedef int mount_t ;
struct TYPE_2__ {int nfh_len; int nfh_fh; } ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nfsmount*) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 struct nfsmount* FUNC_6 (int ) ;
 struct nfsnode* FUNC_7 (int ) ;
 int FUNC_8 (int ,struct nfscllayout*,int ,int *) ;
 struct nfscllayout* FUNC_9 (struct nfsclclient*,int ,int ) ;
 int FUNC_10 (int *,int *,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

int
FUNC_13(vnode_t VAR_3, NFSPROC_T *VAR_4)
{
 struct nfsclclient *VAR_5;
 struct nfscllayout *VAR_6;
 struct nfsnode *VAR_7 = FUNC_7(VAR_3);
 mount_t VAR_8;
 struct nfsmount *VAR_9;

 VAR_8 = FUNC_12(VAR_3);
 VAR_9 = FUNC_6(VAR_8);
 if (FUNC_2(VAR_9))
  return (0);
 FUNC_3();
 VAR_5 = VAR_9->nm_clp;
 if (VAR_5 == ((void*)0)) {
  FUNC_5();
  return (VAR_0);
 }
 VAR_6 = FUNC_9(VAR_5, VAR_7->n_fhp->nfh_fh, VAR_7->n_fhp->nfh_len);
 if (VAR_6 == ((void*)0)) {
  FUNC_5();
  return (VAR_0);
 }
 FUNC_10(&VAR_6->nfsly_lock, ((void*)0), VAR_1, VAR_8);
 if (FUNC_1(VAR_8)) {
  FUNC_5();
  return (VAR_0);
 }
tryagain:
 if ((VAR_6->nfsly_flags & VAR_2) != 0) {
  VAR_6->nfsly_flags &= ~VAR_2;
  FUNC_5();
  FUNC_0(4, "do layoutcommit2\n");
  FUNC_8(VAR_5->nfsc_nmp, VAR_6, FUNC_4(VAR_4), VAR_4);
  FUNC_3();
  goto tryagain;
 }
 FUNC_11(&VAR_6->nfsly_lock);
 FUNC_5();
 return (0);
}
