
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; TYPE_1__* v_mount; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct pnfsdsattr {int dsa_mtime; int dsa_atime; int dsa_size; int dsa_filerev; } ;
struct nfsvattr {int na_mtime; int na_atime; int na_size; int na_filerev; } ;
struct nfsmount {int nm_privflag; } ;
struct nfsdevice {int dummy; } ;
struct mbuf {int dummy; } ;
struct acl {int dummy; } ;
typedef int off_t ;
typedef int fhandle_t ;
typedef int dsattr ;
struct TYPE_2__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,struct pnfsdsattr*,int) ;
 int VAR_10 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (struct nfsmount*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (struct nfsmount*) ;
 scalar_t__ FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*,int ) ;
 int VAR_18 ;
 struct nfsmount* FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_19 ;
 int FUNC_7 (char*,int ) ;
 char* FUNC_8 (int,int ,int ) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct vnode*,struct thread*) ;
 struct nfsdevice* FUNC_11 (int ,struct nfsmount*,struct thread*) ;
 scalar_t__ VAR_20 ;
 int FUNC_12 (struct vnode*,int ,char*,int*,int*,struct thread*,struct vnode**,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_13 (int *,struct ucred*,struct thread*,struct vnode*,struct nfsmount*,struct nfsvattr*) ;
 int FUNC_14 (struct nfsmount*) ;
 scalar_t__ VAR_21 ;
 int FUNC_15 (int *,int ,int,struct ucred*,struct thread*,struct nfsmount*,struct mbuf**,struct mbuf**) ;
 int FUNC_16 (int *,struct ucred*,struct thread*,struct vnode*,struct nfsmount**,int,struct acl*,int*) ;
 int FUNC_17 (int *,struct ucred*,struct thread*,struct vnode*,struct nfsmount**,int,struct nfsvattr*,int*) ;
 int FUNC_18 (int *,int ,int,struct ucred*,struct thread*,struct vnode*,struct nfsmount**,int,struct mbuf**,char*,int*) ;
 int FUNC_19 (char*,...) ;
 int FUNC_20 (struct vnode*,int ,int ,char*,int*,char*,struct thread*) ;
 int FUNC_21 (struct nfsmount*) ;

__attribute__((used)) static int
FUNC_22(struct vnode *VAR_22, off_t VAR_23, int VAR_24, struct ucred *VAR_25,
    struct thread *VAR_26, int VAR_27, struct mbuf **VAR_28, char *VAR_29,
    struct mbuf **VAR_30, struct nfsvattr *VAR_31, struct acl *VAR_32)
{
 struct nfsmount *VAR_33[VAR_10], *VAR_34;
 fhandle_t VAR_35[VAR_10];
 struct vnode *VAR_36[VAR_10];
 struct nfsdevice *VAR_37;
 struct pnfsdsattr VAR_38;
 char *VAR_39;
 int VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45, VAR_46;

 FUNC_1(4, "in nfsrv_proxyds\n");




 if (VAR_22->v_type != VAR_19 || (VAR_22->v_mount->mnt_flag & VAR_7) == 0 ||
     VAR_20 == 0)
  return (VAR_1);

 VAR_40 = 1024;
 VAR_39 = FUNC_8(VAR_40, VAR_8, VAR_9);
 VAR_41 = 0;





 if (VAR_27 == VAR_13) {
  VAR_41 = FUNC_20(VAR_22, VAR_4,
      VAR_3, "pnfsd.dsattr", &VAR_40, VAR_39,
      VAR_26);
  if (VAR_41 == 0 && VAR_40 != sizeof(VAR_38))
   VAR_41 = VAR_2;
  if (VAR_41 == 0) {
   FUNC_0(VAR_39, &VAR_38, VAR_40);
   VAR_31->na_filerev = VAR_38.dsa_filerev;
   VAR_31->na_size = VAR_38.dsa_size;
   VAR_31->na_atime = VAR_38.dsa_atime;
   VAR_31->na_mtime = VAR_38.dsa_mtime;
   if (VAR_21 == 0 ||
       FUNC_10(VAR_22, VAR_26) == 0) {
    FUNC_7(VAR_39, VAR_8);
    return (VAR_41);
   }
  }






  if (VAR_41 == VAR_0)
   VAR_41 = 0;
 }

 VAR_45 = -1;
 VAR_46 = 0;
tryagain:
 if (VAR_41 == 0) {
  VAR_40 = 1024;
  if (VAR_27 == VAR_14 && FUNC_4(VAR_22) ==
      VAR_5)
   FUNC_19("nfsrv_proxyds: Readds vp exclusively locked\n");
  VAR_41 = FUNC_12(VAR_22, VAR_6, VAR_39, &VAR_40,
      &VAR_44, VAR_26, VAR_36, VAR_35, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
      ((void*)0), ((void*)0));
  if (VAR_41 == 0) {
   for (VAR_43 = 0; VAR_43 < VAR_44; VAR_43++)
    VAR_33[VAR_43] = FUNC_6(VAR_36[VAR_43]->v_mount);
  } else
   FUNC_19("pNFS: proxy getextattr sockaddr=%d\n", VAR_41);
 } else
  FUNC_19("pNFS: nfsrv_dsgetsockmnt=%d\n", VAR_41);
 if (VAR_41 == 0) {
  VAR_42 = -1;
  if (VAR_45 == -1)
   VAR_45 = VAR_44;
  if (VAR_27 == VAR_14) {
   VAR_41 = FUNC_15(VAR_35, VAR_23, VAR_24, VAR_25, VAR_26, VAR_33[0],
       VAR_28, VAR_30);
   if (FUNC_9(VAR_41) && VAR_44 > 1) {





    VAR_42 = 0;
    VAR_41 = 0;
    VAR_46++;
   }
  } else if (VAR_27 == VAR_17)
   VAR_41 = FUNC_18(VAR_35, VAR_23, VAR_24, VAR_25, VAR_26, VAR_22,
       &VAR_33[0], VAR_44, VAR_28, VAR_29, &VAR_42);
  else if (VAR_27 == VAR_16)
   VAR_41 = FUNC_17(VAR_35, VAR_25, VAR_26, VAR_22, &VAR_33[0],
       VAR_44, VAR_31, &VAR_42);
  else if (VAR_27 == VAR_15)
   VAR_41 = FUNC_16(VAR_35, VAR_25, VAR_26, VAR_22, &VAR_33[0],
       VAR_44, VAR_32, &VAR_42);
  else {
   VAR_41 = FUNC_13(&VAR_35[VAR_44 - 1], VAR_25, VAR_26,
       VAR_22, VAR_33[VAR_44 - 1], VAR_31);
   if (FUNC_9(VAR_41) && VAR_44 > 1) {





    VAR_42 = VAR_44 - 1;
    VAR_41 = 0;
    VAR_46++;
   }
  }
  VAR_37 = ((void*)0);
  if (VAR_42 >= 0) {
   VAR_34 = VAR_33[VAR_42];
   FUNC_2(VAR_34);
   if ((VAR_34->nm_privflag & (VAR_12 |
        VAR_11)) == 0) {
    VAR_34->nm_privflag |= VAR_11;
    FUNC_3(VAR_34);
    VAR_37 = FUNC_11(VAR_18,
        VAR_34, VAR_26);
    FUNC_1(4, "dsldsnmp fail=%d ds=%p\n",
        VAR_42, VAR_37);
    if (VAR_37 != ((void*)0))
     FUNC_14(VAR_34);
    FUNC_2(VAR_34);
    VAR_34->nm_privflag &= ~VAR_11;
    FUNC_21(VAR_34);
   }
   FUNC_3(VAR_34);
  }
  for (VAR_43 = 0; VAR_43 < VAR_44; VAR_43++)
   FUNC_5(VAR_36[VAR_43], 0);
  FUNC_1(4, "nfsrv_proxyds: aft RPC=%d trya=%d\n", VAR_41,
      VAR_46);

  if (VAR_37 != ((void*)0) && VAR_46 > 0 && VAR_46 < VAR_45)
   goto tryagain;
 } else {

  VAR_41 = VAR_1;
 }
 FUNC_7(VAR_39, VAR_8);
 FUNC_1(4, "nfsrv_proxyds: error=%d\n", VAR_41);
 return (VAR_41);
}
