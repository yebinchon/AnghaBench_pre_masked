
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct sockaddr_in6 {scalar_t__ sin6_family; scalar_t__ sin6_port; int sin6_len; int sin6_addr; } ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; scalar_t__ sin_port; int sin_len; TYPE_1__ sin_addr; } ;
struct sockaddr {int nr_vers; struct sockaddr* nr_nam; int nr_mtx; int nr_cred; int nr_prog; int nr_sotype; } ;
struct nfssockreq {int nr_vers; struct nfssockreq* nr_nam; int nr_mtx; int nr_cred; int nr_prog; int nr_sotype; } ;
struct TYPE_5__ {int * nr_cred; scalar_t__ nr_nam; } ;
struct nfsmount {int nm_sess; TYPE_2__ nm_sockreq; struct nfsclclient* nm_clp; } ;
struct TYPE_6__ {scalar_t__ nfsess_defunct; int nfsess_sequenceid; int nfsess_mtx; } ;
struct nfsclds {int nfsclds_flags; TYPE_3__ nfsclds_sess; struct sockaddr* nfsclds_sockp; int nfsclds_mtx; int nfsclds_expire; } ;
struct nfsclclient {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef scalar_t__ sa_family_t ;
typedef enum nfsclds_state { ____Placeholder_nfsclds_state } nfsclds_state ;
typedef int NFSPROC_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int,char*,...) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (struct nfsclds*) ;
 int FUNC_8 (struct nfsmount*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct nfsclds*) ;
 int FUNC_11 (struct nfsmount*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct nfsclds* FUNC_12 (int *) ;
 int FUNC_13 (int *,struct nfsclds*,int ) ;
 struct nfsclds* FUNC_14 (struct nfsclds*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct sockaddr*,int ) ;
 void* FUNC_17 (int,int ,int) ;
 int FUNC_18 (int *,char*,int *,int ) ;
 int FUNC_19 (struct nfsmount*,struct sockaddr*,int *,int *,int ) ;
 int FUNC_20 (struct sockaddr*) ;
 scalar_t__ VAR_18 ;
 int FUNC_21 (struct nfsclds*) ;
 int FUNC_22 (struct nfsmount*,struct nfsclds*,struct nfsclds**,int *) ;
 int VAR_19 ;
 int FUNC_23 (struct nfsmount*,TYPE_3__*,struct sockaddr*,int ,int ,int ,int *) ;
 int FUNC_24 (struct nfsmount*,struct nfsclclient*,struct sockaddr*,int ,struct nfsclds**,int ,int *) ;

__attribute__((used)) static int
FUNC_25(struct nfsmount *VAR_20, struct sockaddr_in *VAR_21,
    struct sockaddr_in6 *VAR_22, sa_family_t VAR_23, int VAR_24, struct nfsclds **VAR_25,
    NFSPROC_T *VAR_26)
{
 struct sockaddr_in *VAR_27, *VAR_28;
 struct sockaddr_in6 *VAR_29, *VAR_30;
 struct nfsclclient *VAR_31;
 struct nfssockreq *VAR_32;
 struct nfsclds *VAR_33, *VAR_34;
 int VAR_35;
 enum nfsclds_state VAR_36;
 uint32_t VAR_37;

 FUNC_1(VAR_20->nm_sockreq.nr_cred != ((void*)0),
     ("nfsrpc_fillsa: NULL nr_cred"));
 FUNC_6();
 VAR_31 = VAR_20->nm_clp;
 FUNC_9();
 if (VAR_31 == ((void*)0))
  return (VAR_2);
 if (VAR_23 == VAR_0) {
  FUNC_8(VAR_20);






  VAR_27 = (struct sockaddr_in *)VAR_20->nm_sockreq.nr_nam;
  VAR_34 = FUNC_12(&VAR_20->nm_sess);
  while (VAR_34 != ((void*)0)) {
   if (VAR_27 != ((void*)0) && VAR_27->sin_family == VAR_0 &&
       VAR_21->sin_addr.s_addr == VAR_27->sin_addr.s_addr &&
       VAR_21->sin_port == VAR_27->sin_port &&
       (VAR_34->nfsclds_flags & VAR_10) != 0 &&
       VAR_34->nfsclds_sess.nfsess_defunct == 0) {
    *VAR_25 = VAR_34;
    FUNC_11(VAR_20);
    FUNC_3(4, "fnd same addr\n");
    return (0);
   }
   VAR_34 = FUNC_14(VAR_34, VAR_19);
   if (VAR_34 != ((void*)0) && VAR_34->nfsclds_sockp != ((void*)0))
    VAR_27 = (struct sockaddr_in *)
        VAR_34->nfsclds_sockp->nr_nam;
   else
    VAR_27 = ((void*)0);
  }
  FUNC_11(VAR_20);


  VAR_28 = FUNC_17(sizeof(*VAR_28), VAR_7, VAR_8 | VAR_9);
  VAR_28->sin_len = sizeof(*VAR_28);
  VAR_28->sin_family = VAR_0;
  VAR_28->sin_port = VAR_21->sin_port;
  VAR_28->sin_addr.s_addr = VAR_21->sin_addr.s_addr;
  VAR_32 = FUNC_17(sizeof(*VAR_32), VAR_6, VAR_8 | VAR_9);
  VAR_32->nr_nam = (struct sockaddr *)VAR_28;
 } else if (VAR_23 == VAR_1) {
  FUNC_8(VAR_20);






  VAR_29 = (struct sockaddr_in6 *)VAR_20->nm_sockreq.nr_nam;
  VAR_34 = FUNC_12(&VAR_20->nm_sess);
  while (VAR_34 != ((void*)0)) {
   if (VAR_29 != ((void*)0) && VAR_29->sin6_family == VAR_1 &&
       FUNC_0(&VAR_22->sin6_addr,
       &VAR_29->sin6_addr) &&
       VAR_22->sin6_port == VAR_29->sin6_port &&
       (VAR_34->nfsclds_flags & VAR_10) != 0 &&
       VAR_34->nfsclds_sess.nfsess_defunct == 0) {
    *VAR_25 = VAR_34;
    FUNC_11(VAR_20);
    return (0);
   }
   VAR_34 = FUNC_14(VAR_34, VAR_19);
   if (VAR_34 != ((void*)0) && VAR_34->nfsclds_sockp != ((void*)0))
    VAR_29 = (struct sockaddr_in6 *)
        VAR_34->nfsclds_sockp->nr_nam;
   else
    VAR_29 = ((void*)0);
  }
  FUNC_11(VAR_20);


  VAR_30 = FUNC_17(sizeof(*VAR_30), VAR_7, VAR_8 | VAR_9);
  VAR_30->sin6_len = sizeof(*VAR_30);
  VAR_30->sin6_family = VAR_1;
  VAR_30->sin6_port = VAR_22->sin6_port;
  FUNC_2(&VAR_22->sin6_addr, &VAR_30->sin6_addr,
      sizeof(struct in6_addr));
  VAR_32 = FUNC_17(sizeof(*VAR_32), VAR_6, VAR_8 | VAR_9);
  VAR_32->nr_nam = (struct sockaddr *)VAR_30;
 } else
  return (VAR_2);

 VAR_32->nr_sotype = VAR_17;
 FUNC_18(&VAR_32->nr_mtx, "nfssock", ((void*)0), VAR_4);
 VAR_32->nr_prog = VAR_15;
 VAR_32->nr_vers = VAR_24;
 VAR_32->nr_cred = FUNC_15(VAR_20->nm_sockreq.nr_cred);
 VAR_35 = FUNC_19(VAR_20, VAR_32, ((void*)0), VAR_26, 0);
 FUNC_3(3, "DS connect=%d\n", VAR_35);

 VAR_33 = ((void*)0);

 if (VAR_35 == 0) {
  if (VAR_24 == VAR_16) {
   VAR_35 = FUNC_24(VAR_20, VAR_31, VAR_32,
       VAR_14, &VAR_33, VAR_32->nr_cred, VAR_26);
   FUNC_3(3, "DS exchangeid=%d\n", VAR_35);
   if (VAR_35 != 0)
    FUNC_20(VAR_32);
  } else {
   VAR_33 = FUNC_17(sizeof(struct nfsclds), VAR_5,
       VAR_8 | VAR_9);
   VAR_33->nfsclds_flags |= VAR_10;
   VAR_33->nfsclds_expire = VAR_3;
   FUNC_18(&VAR_33->nfsclds_mtx, "nfsds", ((void*)0), VAR_4);
   FUNC_18(&VAR_33->nfsclds_sess.nfsess_mtx, "nfssession",
       ((void*)0), VAR_4);
  }
 }
 if (VAR_35 == 0) {
  VAR_33->nfsclds_sockp = VAR_32;
  if (VAR_24 == VAR_16) {
   FUNC_8(VAR_20);
   VAR_36 = FUNC_22(VAR_20, VAR_33, &VAR_34,
       &VAR_37);
   FUNC_3(3, "getsame ret=%d\n", VAR_36);
   if (VAR_36 == VAR_13 &&
       VAR_18 != 0) {
    FUNC_7(VAR_34);
    VAR_34->nfsclds_flags |= VAR_11;
    FUNC_10(VAR_34);
    FUNC_11(VAR_20);




    (void)FUNC_20(VAR_32);
    FUNC_21(VAR_33);
    *VAR_25 = VAR_34;
    return (0);
   }
   if (VAR_36 == VAR_12)
    VAR_37 =
        VAR_33->nfsclds_sess.nfsess_sequenceid;
   FUNC_11(VAR_20);
   VAR_35 = FUNC_23(VAR_20, &VAR_33->nfsclds_sess,
       VAR_32, VAR_37, 0, VAR_32->nr_cred, VAR_26);
   FUNC_3(3, "DS createsess=%d\n", VAR_35);
  }
 } else {
  FUNC_4(VAR_32->nr_cred);
  FUNC_5(&VAR_32->nr_mtx);
  FUNC_16(VAR_32->nr_nam, VAR_7);
  FUNC_16(VAR_32, VAR_6);
 }
 if (VAR_35 == 0) {
  FUNC_3(3, "add DS session\n");






  FUNC_8(VAR_20);
  FUNC_13(&VAR_20->nm_sess, VAR_33, VAR_19);
  FUNC_11(VAR_20);
  *VAR_25 = VAR_33;
 } else if (VAR_33 != ((void*)0)) {
  FUNC_20(VAR_32);
  FUNC_21(VAR_33);
 }
 return (VAR_35);
}
