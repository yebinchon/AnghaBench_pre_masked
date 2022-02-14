
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int uint64_t ;
struct ucred {int dummy; } ;
struct timespec {int dummy; } ;
struct nfsvattr {int na_size; } ;
struct nfsrv_descript {int dummy; } ;
typedef int nfsv4stateid_t ;
typedef int NFSPROC_T ;


 int FUNC_0 (int ,struct nfsvattr*,int *) ;

int
FUNC_1(struct nfsrv_descript *VAR_0, vnode_t VAR_1, int VAR_2,
    int VAR_3, uint64_t VAR_4, uint64_t VAR_5, uint64_t VAR_6,
    int VAR_7, struct timespec *VAR_8, int VAR_9,
    nfsv4stateid_t *VAR_10, int VAR_11, char *VAR_12, int *VAR_13,
    uint64_t *VAR_14, struct ucred *VAR_15, NFSPROC_T *VAR_16)
{
 struct nfsvattr VAR_17;
 int VAR_18;

 VAR_18 = FUNC_0(VAR_1, &VAR_17, VAR_16);
 if (VAR_18 == 0) {
  *VAR_13 = 1;
  *VAR_14 = VAR_17.na_size;
 }
 return (VAR_18);
}
