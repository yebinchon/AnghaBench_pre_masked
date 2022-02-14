
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct ucred {int dummy; } ;
struct nfsrv_descript {int nd_repstat; int nd_mrep; int nd_flag; } ;
struct nfsmount {int nm_sockreq; } ;
struct nfsclflayouthead {int dummy; } ;
typedef int nfsv4stateid_t ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfsrv_descript*,struct nfsmount*,int *,int *,int *,int *,struct ucred*,int ,int ,int *,int,int *,int *) ;
 int FUNC_3 (struct nfsrv_descript*,int ,struct nfsmount*,int *,int,int *,int *,int ,int ) ;
 int FUNC_4 (struct nfsrv_descript*,int *,int*,struct nfsclflayouthead*) ;
 int FUNC_5 (struct nfsrv_descript*,int,int ,int ,int ,int *,int,int,int ) ;

__attribute__((used)) static int
FUNC_6(struct nfsmount *VAR_4, uint8_t *VAR_5, int VAR_6, int VAR_7,
    uint64_t VAR_8, uint64_t VAR_9, uint64_t VAR_10, int VAR_11,
    int VAR_12, nfsv4stateid_t *VAR_13, int *VAR_14,
    struct nfsclflayouthead *VAR_15, struct ucred *VAR_16, NFSPROC_T *VAR_17,
    void *VAR_18)
{
 struct nfsrv_descript VAR_19, *VAR_20 = &VAR_19;
 int VAR_21;

 FUNC_3(VAR_20, VAR_1, VAR_4, VAR_5, VAR_6, ((void*)0), ((void*)0), 0,
     0);
 FUNC_5(VAR_20, VAR_7, VAR_8, VAR_9, VAR_10, VAR_13,
     VAR_11, VAR_12, 0);
 VAR_20->nd_flag |= VAR_0;
 VAR_21 = FUNC_2(VAR_20, VAR_4, ((void*)0), &VAR_4->nm_sockreq, ((void*)0), VAR_17, VAR_16,
     VAR_2, VAR_3, ((void*)0), 1, ((void*)0), ((void*)0));
 FUNC_0(4, "layget err=%d st=%d\n", VAR_21, VAR_20->nd_repstat);
 if (VAR_21 != 0)
  return (VAR_21);
 if (VAR_20->nd_repstat == 0)
  VAR_21 = FUNC_4(VAR_20, VAR_13, VAR_14, VAR_15);
 if (VAR_21 == 0 && VAR_20->nd_repstat != 0)
  VAR_21 = VAR_20->nd_repstat;
 FUNC_1(VAR_20->nd_mrep);
 return (VAR_21);
}
