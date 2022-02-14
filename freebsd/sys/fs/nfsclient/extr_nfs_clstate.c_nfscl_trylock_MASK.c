
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int u_int8_t ;
typedef int u_int64_t ;
struct ucred {int dummy; } ;
struct nfsrv_descript {int nd_repstat; } ;
struct nfsmount {int dummy; } ;
struct nfscllockowner {int dummy; } ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ucred*) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (struct nfsrv_descript*,struct nfsmount*,int ,int *,int,struct nfscllockowner*,int,int,int ,int ,short,struct ucred*,int *,int) ;

__attribute__((used)) static int
FUNC_3(struct nfsmount *VAR_4, vnode_t VAR_5, u_int8_t *VAR_6,
    int VAR_7, struct nfscllockowner *VAR_8, int VAR_9, int VAR_10,
    u_int64_t VAR_11, u_int64_t VAR_12, short VAR_13, struct ucred *VAR_14, NFSPROC_T *VAR_15)
{
 struct nfsrv_descript VAR_16, *VAR_17 = &VAR_16;
 int VAR_18;

 do {
  VAR_18 = FUNC_2(VAR_17, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
      VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, 0);
  if (!VAR_18 && VAR_17->nd_repstat == VAR_2)
   (void) FUNC_1(VAR_3, (int)VAR_17->nd_repstat,
       "nfstrylck");
 } while (!VAR_18 && VAR_17->nd_repstat == VAR_2);
 if (!VAR_18)
  VAR_18 = VAR_17->nd_repstat;
 if (VAR_18 == VAR_1 || VAR_18 == VAR_0) {

  FUNC_0(VAR_14);
  do {
   VAR_18 = FUNC_2(VAR_17, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
       VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, 1);
   if (!VAR_18 && VAR_17->nd_repstat == VAR_2)
    (void) FUNC_1(VAR_3, (int)VAR_17->nd_repstat,
        "nfstrylck");
  } while (!VAR_18 && VAR_17->nd_repstat == VAR_2);
  if (!VAR_18)
   VAR_18 = VAR_17->nd_repstat;
 }
 return (VAR_18);
}
