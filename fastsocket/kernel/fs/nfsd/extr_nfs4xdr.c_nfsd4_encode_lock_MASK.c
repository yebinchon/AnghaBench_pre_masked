
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_lock {int lk_replay_owner; int lk_denied; int lk_resp_stateid; } ;
struct nfsd4_compoundres {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfsd4_compoundres*,int *) ;
 int FUNC_2 (struct nfsd4_compoundres*,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundres *VAR_2, __be32 VAR_3, struct nfsd4_lock *VAR_4)
{
 VAR_0;

 if (!VAR_3)
  FUNC_2(VAR_2, &VAR_4->lk_resp_stateid);
 else if (VAR_3 == VAR_1)
  FUNC_1(VAR_2, &VAR_4->lk_denied);

 FUNC_0(VAR_4->lk_replay_owner);
 return VAR_3;
}
