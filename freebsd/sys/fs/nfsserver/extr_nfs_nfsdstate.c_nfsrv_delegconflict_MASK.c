
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef int tstateid ;
typedef int tfh ;
struct nfsstate {int ls_flags; scalar_t__ ls_delegtime; TYPE_1__* ls_lfp; int ls_stateid; scalar_t__ ls_delegtimelimit; struct nfsclient* ls_clp; } ;
struct nfsclient {scalar_t__ lc_delegtime; scalar_t__ lc_expiry; int lc_olddeleg; int lc_deleg; int lc_idlen; int lc_id; } ;
typedef int nfsv4stateid_t ;
typedef int fhandle_t ;
typedef int caddr_t ;
struct TYPE_8__ {int v_iflag; } ;
struct TYPE_7__ {int lf_fh; } ;
typedef int NFSPROC_T ;


 int FUNC_0 (struct nfsclient*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 () ;
 int FUNC_10 (struct nfsclient*,int *) ;
 int FUNC_11 (struct nfsclient*,int ,int *,int ,int *,int *,int *,int ,int *) ;
 int FUNC_12 (struct nfsstate*) ;
 int FUNC_13 (int *) ;
 int VAR_15 ;
 int FUNC_14 (int ,int ,int ,int *) ;
 int FUNC_15 (struct nfsclient*,int *) ;
 int FUNC_16 (int *,int,int *,int ,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_19(struct nfsstate *VAR_17, int *VAR_18, NFSPROC_T *VAR_19,
    vnode_t VAR_20)
{
 struct nfsclient *VAR_21 = VAR_17->ls_clp;
 int VAR_22, VAR_23, VAR_24 = 0, VAR_25, VAR_26;
 nfsv4stateid_t VAR_27;
 fhandle_t VAR_28;




 if (VAR_17->ls_flags & VAR_7) {



  if (VAR_21->lc_delegtime < VAR_1) {
   FUNC_12(VAR_17);
   FUNC_4();
   VAR_23 = -1;
   goto out;
  }
  FUNC_4();






  if (*VAR_18) {
   *VAR_18 = 0;
   FUNC_3();
   FUNC_18(&VAR_16, 1);
   FUNC_5();
  }
  VAR_23 = VAR_4;
  goto out;
 }






 if (!(VAR_17->ls_flags & VAR_6)) {
  VAR_17->ls_delegtime = VAR_1 + (2 * VAR_15) +
      VAR_9;
  VAR_17->ls_delegtimelimit = VAR_1 + (6 * VAR_15) +
      VAR_9;
  VAR_17->ls_flags |= VAR_6;
  FUNC_1((caddr_t)&VAR_17->ls_stateid, (caddr_t)&VAR_27,
      sizeof (VAR_27));
  FUNC_1((caddr_t)&VAR_17->ls_lfp->lf_fh, (caddr_t)&VAR_28,
      sizeof (VAR_28));
  FUNC_4();
  if (*VAR_18) {
   *VAR_18 = 0;
   FUNC_3();
   FUNC_18(&VAR_16, 1);
   FUNC_5();
  }
  VAR_25 = 0;
  do {
      VAR_23 = FUNC_11(VAR_21, VAR_10,
   &VAR_27, 0, &VAR_28, ((void*)0), ((void*)0), 0, VAR_19);
      VAR_25++;
  } while ((VAR_23 == VAR_3 ||
      VAR_23 == VAR_2) && VAR_25 < VAR_12);
  VAR_23 = VAR_4;
  goto out;
 }

 if (VAR_21->lc_expiry >= VAR_1 &&
     VAR_17->ls_delegtime >= VAR_1) {
  FUNC_4();




  if (*VAR_18) {
   *VAR_18 = 0;
   FUNC_3();
   FUNC_18(&VAR_16, 1);
   FUNC_5();
  }
  VAR_23 = VAR_4;
  goto out;
 }
 if (*VAR_18 == 0) {
  FUNC_4();
  if (VAR_20 != ((void*)0)) {
   VAR_24 = FUNC_6(VAR_20);
   FUNC_8(VAR_20, 0);
  }
  FUNC_3();
  FUNC_17(&VAR_16);
  do {
   VAR_22 = FUNC_16(&VAR_16, 1, ((void*)0),
       VAR_11, ((void*)0));
  } while (!VAR_22);
  FUNC_5();
  *VAR_18 = 1;
  if (VAR_20 != ((void*)0)) {
   FUNC_7(VAR_20, VAR_24 | VAR_0);
   if ((VAR_20->v_iflag & VAR_13) != 0) {
    *VAR_18 = 0;
    FUNC_3();
    FUNC_18(&VAR_16, 1);
    FUNC_5();
    VAR_23 = VAR_5;
    goto out;
   }
  }
  VAR_23 = -1;
  goto out;
 }

 FUNC_4();







 FUNC_14(VAR_21->lc_id, VAR_21->lc_idlen, VAR_8, VAR_19);
 FUNC_9();
 if (VAR_21->lc_expiry < VAR_1) {
  FUNC_10(VAR_21, VAR_19);
  FUNC_13(&VAR_21->lc_deleg);
  FUNC_13(&VAR_21->lc_olddeleg);
  FUNC_0(VAR_21, VAR_14);
  VAR_26 = 1;
 } else {
  FUNC_12(VAR_17);
  VAR_26 = 0;
 }
 if (VAR_26)
  FUNC_15(VAR_21, VAR_19);
 VAR_23 = -1;

out:
 FUNC_2(VAR_23);
 return (VAR_23);
}
