
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vnode_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct ucred {int dummy; } ;
struct nfsmount {int nm_clp; } ;
struct nfsfh {int nfh_len; int nfh_fh; } ;
struct nfsclsession {int nfsess_maxcache; } ;
struct TYPE_6__ {int * other; scalar_t__ seqid; } ;
struct nfscllayout {TYPE_1__ nfsly_stateid; } ;
struct nfsclflayouthead {int dummy; } ;
struct nfsclflayout {int dummy; } ;
struct TYPE_7__ {int * other; scalar_t__ seqid; } ;
typedef TYPE_2__ nfsv4stateid_t ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int FUNC_0 (struct nfsclflayouthead*) ;
 scalar_t__ FUNC_1 (struct nfsmount*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nfscllayout* FUNC_2 (int ,int ,int ,int ,struct nfsclflayout**,int*) ;
 int FUNC_3 (struct nfscllayout*,int) ;
 struct nfsclsession* FUNC_4 (struct nfsmount*) ;
 int FUNC_5 (struct nfsmount*,int ,int ,int,int ,int ,int ,int,int,TYPE_2__*,int*,struct nfsclflayouthead*,struct ucred*,int *,int *) ;
 int FUNC_6 (struct nfsmount*,int ,int ,int ,TYPE_2__*,int,int *,struct nfscllayout**,struct nfsclflayouthead*,int,int,int *,struct ucred*,int *) ;

__attribute__((used)) static int
FUNC_7(struct nfsmount *VAR_6, vnode_t VAR_7, struct nfsfh *VAR_8,
    int VAR_9, uint32_t *VAR_10, nfsv4stateid_t *VAR_11, uint64_t VAR_12,
    struct nfscllayout **VAR_13, struct ucred *VAR_14, NFSPROC_T *VAR_15)
{
 struct nfscllayout *VAR_16;
 struct nfsclflayout *VAR_17;
 struct nfsclflayouthead VAR_18;
 int VAR_19 = 0, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 nfsv4stateid_t VAR_25;
 struct nfsclsession *VAR_26;

 *VAR_13 = ((void*)0);
 if (FUNC_1(VAR_6))
  VAR_22 = VAR_1;
 else
  VAR_22 = VAR_2;





 VAR_16 = FUNC_2(VAR_6->nm_clp, VAR_8->nfh_fh, VAR_8->nfh_len,
     VAR_12, &VAR_17, &VAR_23);
 VAR_20 = 0;
 if (VAR_16 == ((void*)0) || VAR_17 == ((void*)0)) {
  if (VAR_23 != 0)
   return (VAR_0);
  FUNC_0(&VAR_18);
  VAR_26 = FUNC_4(VAR_6);
  VAR_21 = VAR_26->nfsess_maxcache -
      (VAR_3 + 3 * VAR_4);
  if (VAR_16 == ((void*)0)) {
   VAR_25.seqid = 0;
   VAR_25.other[0] = VAR_11->other[0];
   VAR_25.other[1] = VAR_11->other[1];
   VAR_25.other[2] = VAR_11->other[2];
   VAR_19 = FUNC_5(VAR_6, VAR_8->nfh_fh,
       VAR_8->nfh_len, VAR_9, (uint64_t)0, VAR_5,
       (uint64_t)0, VAR_22, VAR_21, &VAR_25,
       &VAR_24, &VAR_18, VAR_14, VAR_15, ((void*)0));
  } else {
   VAR_20 = 1;
   VAR_25.seqid = VAR_16->nfsly_stateid.seqid;
   VAR_25.other[0] = VAR_16->nfsly_stateid.other[0];
   VAR_25.other[1] = VAR_16->nfsly_stateid.other[1];
   VAR_25.other[2] = VAR_16->nfsly_stateid.other[2];
   VAR_19 = FUNC_5(VAR_6, VAR_8->nfh_fh,
       VAR_8->nfh_len, VAR_9, VAR_12, VAR_5,
       (uint64_t)0, VAR_22, VAR_21, &VAR_25,
       &VAR_24, &VAR_18, VAR_14, VAR_15, ((void*)0));
  }
  VAR_19 = FUNC_6(VAR_6, VAR_7, VAR_8->nfh_fh,
      VAR_8->nfh_len, &VAR_25, VAR_24, VAR_10, &VAR_16,
      &VAR_18, VAR_22, VAR_19, ((void*)0), VAR_14, VAR_15);
  if (VAR_19 == 0)
   *VAR_13 = VAR_16;
  else if (VAR_20 != 0)
   FUNC_3(VAR_16, 1);
 } else
  *VAR_13 = VAR_16;
 return (VAR_19);
}
