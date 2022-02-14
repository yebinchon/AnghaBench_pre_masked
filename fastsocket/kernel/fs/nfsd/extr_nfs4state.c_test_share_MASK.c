
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_open {unsigned int op_share_deny; unsigned int op_share_access; } ;
struct nfs4_stateid {int st_deny_bmap; int st_access_bmap; } ;


 int FUNC_0 (unsigned int*,int ) ;
 int FUNC_1 (unsigned int*,int ) ;

__attribute__((used)) static int
FUNC_2(struct nfs4_stateid *VAR_0, struct nfsd4_open *VAR_1) {
 unsigned int VAR_2, VAR_3;

 FUNC_0(&VAR_2, VAR_0->st_access_bmap);
 FUNC_1(&VAR_3, VAR_0->st_deny_bmap);
 if ((VAR_2 & VAR_1->op_share_deny) || (VAR_3 & VAR_1->op_share_access))
  return 0;
 return 1;
}
