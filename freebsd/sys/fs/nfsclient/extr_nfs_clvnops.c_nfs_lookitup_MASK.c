
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int u_int ;
struct vnode {int v_mount; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsvattr {scalar_t__ na_type; } ;
struct nfsv4node {int dummy; } ;
struct nfsnode {struct nfsfh* n_fhp; struct nfsfh* n_v4; } ;
struct nfsfh {int n4_namelen; int nfh_len; int n4_fhlen; char* nfh_fh; int n4_data; } ;
struct componentname {char* cn_nameptr; int cn_namelen; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nfsfh*) ;
 scalar_t__ FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int ,int) ;
 struct vnode* FUNC_3 (struct nfsnode*) ;
 scalar_t__ FUNC_4 (struct nfsnode*,char*,int) ;
 scalar_t__ FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*) ;
 scalar_t__ VAR_6 ;
 struct nfsnode* FUNC_7 (struct vnode*) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,int,int ) ;
 int FUNC_10 (struct nfsfh*,int ) ;
 struct nfsfh* FUNC_11 (int,int ,int ) ;
 int FUNC_12 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_13 (struct thread*,int,int ,int ) ;
 int FUNC_14 (int ,struct vnode*,struct nfsfh*,struct componentname*,struct thread*,struct nfsnode**,int *,int ) ;
 int FUNC_15 (struct vnode*,char*,int,struct ucred*,struct thread*,struct nfsvattr*,struct nfsvattr*,struct nfsfh**,int*,int*,int *) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (struct vnode*,int ) ;
 int FUNC_18 (struct vnode*) ;
 int FUNC_19 (struct vnode*) ;

__attribute__((used)) static int
FUNC_20(struct vnode *VAR_7, char *VAR_8, int VAR_9, struct ucred *VAR_10,
    struct thread *VAR_11, struct nfsnode **VAR_12)
{
 struct vnode *VAR_13 = ((void*)0), *VAR_14;
 struct nfsnode *VAR_15, *VAR_16 = FUNC_7(VAR_7);
 struct nfsfh *VAR_17, *VAR_18;
 struct nfsvattr VAR_19, VAR_20;
 struct componentname VAR_21;
 int VAR_22 = 0, VAR_23, VAR_24;
 u_int VAR_25;

 VAR_22 = FUNC_15(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, &VAR_20, &VAR_19,
     &VAR_17, &VAR_23, &VAR_24, ((void*)0));
 if (VAR_24)
  (void) FUNC_12(&VAR_7, &VAR_20, ((void*)0), ((void*)0), 0, 1);
 if (VAR_12 && !VAR_22) {
  if (*VAR_12 != ((void*)0)) {
      VAR_15 = *VAR_12;
      VAR_14 = FUNC_3(VAR_15);




      if (VAR_15->n_v4 != ((void*)0) && VAR_19.na_type == VAR_6 &&
   (VAR_15->n_v4->n4_namelen != VAR_9 ||
    FUNC_1(VAR_8, FUNC_0(VAR_15->n_v4), VAR_9) ||
    VAR_16->n_fhp->nfh_len != VAR_15->n_v4->n4_fhlen ||
    FUNC_1(VAR_16->n_fhp->nfh_fh, VAR_15->n_v4->n4_data,
    VAR_16->n_fhp->nfh_len))) {
       FUNC_10(VAR_15->n_v4, VAR_4);
       VAR_15->n_v4 = FUNC_11(
    sizeof (struct nfsv4node) +
    VAR_16->n_fhp->nfh_len + VAR_9 - 1,
    VAR_4, VAR_5);
       VAR_15->n_v4->n4_fhlen = VAR_16->n_fhp->nfh_len;
       VAR_15->n_v4->n4_namelen = VAR_9;
       FUNC_2(VAR_16->n_fhp->nfh_fh, VAR_15->n_v4->n4_data,
    VAR_16->n_fhp->nfh_len);
       FUNC_2(VAR_8, FUNC_0(VAR_15->n_v4), VAR_9);
      }
      VAR_25 = FUNC_9(VAR_17->nfh_fh, VAR_17->nfh_len,
   VAR_1);
      VAR_18 = VAR_15->n_fhp;



      FUNC_17(VAR_14, VAR_25);
      VAR_15->n_fhp = VAR_17;
      if (VAR_18 != ((void*)0))
   FUNC_10(VAR_18, VAR_3);
      VAR_13 = FUNC_3(VAR_15);
  } else if (FUNC_4(VAR_16, VAR_17->nfh_fh, VAR_17->nfh_len)) {
      FUNC_10(VAR_17, VAR_3);
      FUNC_6(VAR_7);
      VAR_13 = VAR_7;
  } else {
      VAR_21.cn_nameptr = VAR_8;
      VAR_21.cn_namelen = VAR_9;
      VAR_22 = FUNC_14(VAR_7->v_mount, VAR_7, VAR_17, &VAR_21, VAR_11,
   &VAR_15, ((void*)0), VAR_2);
      if (VAR_22)
   return (VAR_22);
      VAR_13 = FUNC_3(VAR_15);
  }
  if (!VAR_23 && *VAR_12 == ((void*)0)) {
   if (VAR_13 == VAR_7)
    FUNC_19(VAR_13);
   else
    FUNC_18(VAR_13);
   return (VAR_0);
  }
  if (VAR_23)
   (void) FUNC_12(&VAR_13, &VAR_19, ((void*)0), ((void*)0),
       0, 1);
 }
 if (VAR_12 && *VAR_12 == ((void*)0)) {
  if (VAR_22) {
   if (VAR_13) {
    if (VAR_13 == VAR_7)
     FUNC_19(VAR_13);
    else
     FUNC_18(VAR_13);
   }
  } else
   *VAR_12 = VAR_15;
 }
 if (VAR_22 && FUNC_5(VAR_7))
  VAR_22 = FUNC_13(VAR_11, VAR_22, (uid_t)0, (gid_t)0);
 return (VAR_22);
}
