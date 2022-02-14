
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int ;
struct vnode {int v_iflag; } ;
struct thread {int dummy; } ;
struct nfsnode {int dummy; } ;
struct nfsfh {int nfh_len; int * nfh_fh; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct mount*) ;
 int FUNC_1 (struct vnode*,int ) ;
 int VAR_9 ;
 struct nfsnode* FUNC_2 (struct vnode*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct nfsfh*,int ) ;
 struct nfsfh* FUNC_6 (int,int ,int ) ;
 int VAR_10 ;
 int FUNC_7 (struct mount*,int ,int,struct thread*,struct vnode**,int ,struct nfsfh*) ;
 int FUNC_8 (struct mount*,int ,struct thread*,struct vnode**,int ,struct nfsfh*) ;
 int FUNC_9 (struct vnode*) ;

int
FUNC_10(struct mount *VAR_11, u_int8_t *VAR_12, int VAR_13,
    struct thread *VAR_14, struct nfsnode **VAR_15)
{
 struct vnode *VAR_16;
 u_int VAR_17;
 struct nfsfh *VAR_18;
 int VAR_19;

 *VAR_15 = ((void*)0);

 if (FUNC_0(VAR_11))
  return (VAR_1);
 VAR_18 = FUNC_6(sizeof (struct nfsfh) + VAR_13,
     VAR_7, VAR_8);
 FUNC_3(VAR_12, &VAR_18->nfh_fh[0], VAR_13);
 VAR_18->nfh_len = VAR_13;

 VAR_17 = FUNC_4(VAR_12, VAR_13, VAR_4);




 VAR_19 = FUNC_7(VAR_11, VAR_17, (VAR_5 | VAR_6), VAR_14, &VAR_16,
     VAR_10, VAR_18);
 if (VAR_19 == 0 && VAR_16 != ((void*)0)) {
  FUNC_1(VAR_16, 0);
 } else if (VAR_19 == VAR_0) {






  if (FUNC_0(VAR_11))
   VAR_19 = VAR_1;
  else {
   FUNC_8(VAR_11, VAR_17, VAR_14, &VAR_16, VAR_10, VAR_18);
   if (VAR_16 == ((void*)0)) {
    VAR_19 = VAR_3;
   } else if ((VAR_16->v_iflag & VAR_9) != 0) {
    VAR_19 = VAR_3;
    FUNC_9(VAR_16);
   } else {
    VAR_19 = 0;
   }
  }
 }
 FUNC_5(VAR_18, VAR_7);
 if (VAR_19)
  return (VAR_19);
 if (VAR_16 != ((void*)0)) {
  *VAR_15 = FUNC_2(VAR_16);
  return (0);
 }
 return (VAR_2);
}
