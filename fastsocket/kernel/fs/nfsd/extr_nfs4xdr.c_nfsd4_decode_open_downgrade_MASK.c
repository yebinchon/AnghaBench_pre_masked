
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_open_downgrade {int od_share_deny; int od_share_access; int od_seqid; int od_stateid; int * od_stateowner; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct nfsd4_compoundargs*,int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundargs *VAR_3, struct nfsd4_open_downgrade *VAR_4)
{
 VAR_0;

 VAR_4->od_stateowner = ((void*)0);
 VAR_2 = FUNC_2(VAR_3, &VAR_4->od_stateid);
 if (VAR_2)
  return VAR_2;
 FUNC_1(12);
 FUNC_0(VAR_4->od_seqid);
 FUNC_0(VAR_4->od_share_access);
 FUNC_0(VAR_4->od_share_deny);

 VAR_1;
}
