
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_open {scalar_t__ op_claim_type; TYPE_1__* op_stateowner; int op_share_access; int op_delegate_stateid; } ;
struct nfs4_file {int dummy; } ;
struct nfs4_delegation {int dummy; } ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {int so_confirmed; } ;


 scalar_t__ VAR_0 ;
 struct nfs4_delegation* FUNC_0 (struct nfs4_file*,int *) ;
 scalar_t__ FUNC_1 (struct nfs4_delegation*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static __be32
FUNC_3(struct nfs4_file *VAR_3, struct nfsd4_open *VAR_4,
  struct nfs4_delegation **VAR_5)
{
 int VAR_6;
 __be32 VAR_7 = VAR_2;

 *VAR_5 = FUNC_0(VAR_3, &VAR_4->op_delegate_stateid);
 if (*VAR_5 == ((void*)0))
  goto out;
 VAR_6 = FUNC_2(VAR_4->op_share_access);
 VAR_7 = FUNC_1(*VAR_5, VAR_6);
 if (VAR_7)
  *VAR_5 = ((void*)0);
out:
 if (VAR_4->op_claim_type != VAR_0)
  return VAR_1;
 if (VAR_7)
  return VAR_7;
 VAR_4->op_stateowner->so_confirmed = 1;
 return VAR_1;
}
