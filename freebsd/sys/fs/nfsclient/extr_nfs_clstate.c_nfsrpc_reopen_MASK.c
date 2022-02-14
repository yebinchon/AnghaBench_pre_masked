
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vnode_t ;
typedef int u_int8_t ;
typedef int u_int32_t ;
struct ucred {int dummy; } ;
struct nfsnode {TYPE_1__* n_v4; } ;
struct nfsmount {int nm_mountp; } ;
struct nfsclopen {int dummy; } ;
struct nfscldeleg {int dummy; } ;
struct TYPE_2__ {int n4_namelen; int n4_fhlen; int n4_data; } ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct nfsnode*) ;
 int FUNC_2 (int ,int *,int,int *,struct nfsnode**) ;
 int FUNC_3 (struct nfsmount*,int ,int ,int ,int *,int,int ,struct nfsclopen*,int ,int ,struct nfscldeleg**,int ,int ,struct ucred*,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct nfsmount *VAR_1, u_int8_t *VAR_2, int VAR_3,
    u_int32_t VAR_4, struct nfsclopen *VAR_5, struct nfscldeleg **VAR_6,
    struct ucred *VAR_7, NFSPROC_T *VAR_8)
{
 struct nfsnode *VAR_9;
 vnode_t VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_1->nm_mountp, VAR_2, VAR_3, VAR_8, &VAR_9);
 if (VAR_11)
  return (VAR_11);
 VAR_10 = FUNC_1(VAR_9);
 if (VAR_9->n_v4 != ((void*)0)) {
  VAR_11 = FUNC_3(VAR_1, VAR_10, VAR_9->n_v4->n4_data,
      VAR_9->n_v4->n4_fhlen, VAR_2, VAR_3, VAR_4, VAR_5,
      FUNC_0(VAR_9->n_v4), VAR_9->n_v4->n4_namelen, VAR_6, 0, 0,
      VAR_7, VAR_8);
 } else {
  VAR_11 = VAR_0;
 }
 FUNC_4(VAR_10);
 return (VAR_11);
}
