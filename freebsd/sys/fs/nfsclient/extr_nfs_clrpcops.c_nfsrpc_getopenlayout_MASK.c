
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vnode_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int8_t ;
struct ucred {int dummy; } ;
struct nfsmount {int nm_clp; } ;
struct nfsclsession {int nfsess_maxcache; } ;
struct nfsclopen {int dummy; } ;
struct TYPE_5__ {int * other; int seqid; } ;
struct nfscllayout {TYPE_1__ nfsly_stateid; } ;
struct nfsclflayouthead {int dummy; } ;
struct nfsclflayout {int dummy; } ;
struct nfscldeleg {int dummy; } ;
struct TYPE_6__ {int * other; int seqid; } ;
typedef TYPE_2__ nfsv4stateid_t ;
typedef int NFSPROC_T ;


 int FUNC_0 (struct nfsclflayouthead*) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (struct nfsmount*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nfscllayout* FUNC_3 (int ,int *,int,int ,struct nfsclflayout**,int*) ;
 int FUNC_4 (struct nfscllayout*,int) ;
 struct nfsclsession* FUNC_5 (struct nfsmount*) ;
 int FUNC_6 (struct nfsmount*,int ,int *,int,TYPE_2__*,int,int *,struct nfscllayout**,struct nfsclflayouthead*,int,int,int*,struct ucred*,int *) ;
 int FUNC_7 (struct nfsmount*,int ,int *,int,int *,int,int ,struct nfsclopen*,int *,int,struct nfscldeleg**,TYPE_2__*,int,int,int,int*,struct nfsclflayouthead*,int*,struct ucred*,int *) ;
 int FUNC_8 (struct nfsmount*,int ,int *,int,int *,int,int ,struct nfsclopen*,int *,int,struct nfscldeleg**,int ,int ,struct ucred*,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct nfsmount *VAR_4, vnode_t VAR_5, u_int8_t *VAR_6,
    int VAR_7, uint8_t *VAR_8, int VAR_9, uint32_t VAR_10,
    struct nfsclopen *VAR_11, uint8_t *VAR_12, int VAR_13, struct nfscldeleg **VAR_14,
    struct ucred *VAR_15, NFSPROC_T *VAR_16)
{
 struct nfscllayout *VAR_17;
 struct nfsclflayout *VAR_18;
 struct nfsclflayouthead VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 int VAR_26, VAR_27;
 nfsv4stateid_t VAR_28;
 struct nfsclsession *VAR_29;

 VAR_20 = 0;
 if (FUNC_2(VAR_4))
  VAR_26 = VAR_0;
 else
  VAR_26 = VAR_1;





 VAR_17 = FUNC_3(VAR_4->nm_clp, VAR_8, VAR_9, 0, &VAR_18,
     &VAR_23);
 FUNC_1(4, "nfsrpc_getopenlayout nfscl_getlayout lyp=%p\n", VAR_17);
 if (VAR_17 == ((void*)0))
  VAR_21 = 0;
 else if (VAR_18 != ((void*)0))
  VAR_21 = 1;
 else
  VAR_21 = 2;
 if ((VAR_17 == ((void*)0) || VAR_18 == ((void*)0)) && VAR_23 == 0) {
  FUNC_0(&VAR_19);
  VAR_29 = FUNC_5(VAR_4);
  VAR_22 = VAR_29->nfsess_maxcache - (VAR_2 +
      3 * VAR_3);
  if (VAR_17 == ((void*)0))
   VAR_25 = 1;
  else {
   VAR_25 = 0;
   VAR_28.seqid = VAR_17->nfsly_stateid.seqid;
   VAR_28.other[0] = VAR_17->nfsly_stateid.other[0];
   VAR_28.other[1] = VAR_17->nfsly_stateid.other[1];
   VAR_28.other[2] = VAR_17->nfsly_stateid.other[2];
  }
  VAR_20 = FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
      VAR_14, &VAR_28, VAR_25, VAR_26, VAR_22,
      &VAR_24, &VAR_19, &VAR_27, VAR_15, VAR_16);
  FUNC_1(4, "aft nfsrpc_openlayoutrpc laystat=%d err=%d\n",
      VAR_27, VAR_20);
  VAR_27 = FUNC_6(VAR_4, VAR_5, VAR_8, VAR_9,
      &VAR_28, VAR_24, ((void*)0), &VAR_17, &VAR_19, VAR_26, VAR_27,
      &VAR_21, VAR_15, VAR_16);
 } else
  VAR_20 = FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
      VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, 0, 0, VAR_15, VAR_16, 0, 0);
 if (VAR_21 == 2)
  FUNC_4(VAR_17, 1);
 else if (VAR_21 == 1)
  FUNC_4(VAR_17, 0);
 return (VAR_20);
}
