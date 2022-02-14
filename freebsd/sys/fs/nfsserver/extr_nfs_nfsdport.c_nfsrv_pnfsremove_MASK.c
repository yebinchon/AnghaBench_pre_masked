
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_mount; } ;
struct ucred {int dummy; } ;
struct nfsrvdsremove {scalar_t__ inprog; scalar_t__ done; int err; int tsk; int fname; struct vnode* dvp; int * p; struct ucred* tcred; } ;
struct nfsmount {int nm_privflag; } ;
struct nfsdevice {int dummy; } ;
typedef int fhandle_t ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (struct ucred*) ;
 int FUNC_2 (struct nfsmount*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct nfsmount*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct nfsmount* FUNC_4 (int ) ;
 int FUNC_5 (struct nfsrvdsremove*,int ) ;
 int VAR_8 ;
 struct nfsrvdsremove* FUNC_6 (int,int ,int ) ;
 struct ucred* FUNC_7 () ;
 int FUNC_8 (int ,struct nfsrvdsremove*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_9 (int) ;
 struct nfsdevice* FUNC_10 (int ,struct nfsmount*,int *) ;
 int FUNC_11 (struct vnode*,char*,struct ucred*,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct nfsmount*) ;
 int VAR_10 ;
 int FUNC_14 (int ,char*,scalar_t__) ;
 int FUNC_15 (int *,int ,char*,int) ;
 int FUNC_16 (struct nfsmount*) ;

__attribute__((used)) static void
FUNC_17(struct vnode **VAR_11, int VAR_12, char *VAR_13, fhandle_t *VAR_14,
    NFSPROC_T *VAR_15)
{
 struct ucred *VAR_16;
 struct nfsrvdsremove *VAR_17, *VAR_18;
 struct nfsdevice *VAR_19;
 struct nfsmount *VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;

 VAR_16 = FUNC_7();
 VAR_17 = ((void*)0);
 if (VAR_12 > 1)
  VAR_17 = FUNC_6(sizeof(*VAR_17) * VAR_12 - 1, VAR_1, VAR_2);




 VAR_21 = -1;
 for (VAR_18 = VAR_17, VAR_22 = 0; VAR_22 < VAR_12 - 1; VAR_22++, VAR_18++) {
  VAR_18->tcred = VAR_16;
  VAR_18->p = VAR_15;
  VAR_18->dvp = VAR_11[VAR_22];
  FUNC_14(VAR_18->fname, VAR_13, VAR_6 + 1);
  VAR_18->inprog = 0;
  VAR_18->done = 0;
  VAR_18->err = 0;
  VAR_23 = VAR_0;
  if (VAR_9 != 0) {
   VAR_23 = FUNC_8(VAR_10, VAR_18);
   FUNC_0(4, "nfsrv_pnfsremove: nfs_pnfsio=%d\n", VAR_23);
  }
  if (VAR_23 != 0) {
   VAR_23 = FUNC_11(VAR_11[VAR_22], VAR_13, VAR_16, VAR_15);
   if (VAR_21 == -1 && FUNC_9(VAR_23))
    VAR_21 = VAR_22;
  }
 }
 VAR_23 = FUNC_11(VAR_11[VAR_12 - 1], VAR_13, VAR_16, VAR_15);
 if (VAR_21 == -1 && VAR_12 > 1 && FUNC_9(VAR_23))
  VAR_21 = VAR_12 - 1;
 VAR_24 = VAR_8 / 50;
 if (VAR_24 < 1)
  VAR_24 = 1;

 for (VAR_18 = VAR_17, VAR_22 = 0; VAR_22 < VAR_12 - 1; VAR_22++, VAR_18++) {
  while (VAR_18->inprog != 0 && VAR_18->done == 0)
   FUNC_15(&VAR_18->tsk, VAR_7, "srvdsrm", VAR_24);
  if (VAR_21 == -1 && FUNC_9(VAR_18->err))
   VAR_21 = VAR_22;
 }





 if (VAR_21 >= 0) {
  VAR_20 = FUNC_4(VAR_11[VAR_21]->v_mount);
  FUNC_2(VAR_20);
  if ((VAR_20->nm_privflag & (VAR_4 |
       VAR_3)) == 0) {
   VAR_20->nm_privflag |= VAR_3;
   FUNC_3(VAR_20);
   VAR_19 = FUNC_10(VAR_5, VAR_20, VAR_15);
   FUNC_0(4, "dsremovefail fail=%d ds=%p\n", VAR_21,
       VAR_19);
   if (VAR_19 != ((void*)0))
    FUNC_13(VAR_20);
   FUNC_2(VAR_20);
   VAR_20->nm_privflag &= ~VAR_3;
   FUNC_16(VAR_20);
  }
  FUNC_3(VAR_20);
 }


 FUNC_12(VAR_14);

 FUNC_1(VAR_16);
 FUNC_5(VAR_17, VAR_1);
}
