
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_create_session {int dummy; } ;
struct nfsd4_clid_slot {int sl_status; int sl_cr_ses; } ;
typedef int __be32 ;


 int FUNC_0 (struct nfsd4_create_session*,int *,int) ;

__attribute__((used)) static __be32
FUNC_1(struct nfsd4_create_session *VAR_0,
       struct nfsd4_clid_slot *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->sl_cr_ses, sizeof(*VAR_0));
 return VAR_1->sl_status;
}
