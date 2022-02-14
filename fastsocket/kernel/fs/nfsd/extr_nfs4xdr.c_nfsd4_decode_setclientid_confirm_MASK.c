
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_setclientid_confirm {int sc_confirm; int sc_clientid; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef int nfs4_verifier ;
typedef int __be32 ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static __be32
FUNC_2(struct nfsd4_compoundargs *VAR_2, struct nfsd4_setclientid_confirm *VAR_3)
{
 VAR_0;

 FUNC_1(8 + sizeof(nfs4_verifier));
 FUNC_0(&VAR_3->sc_clientid, 8);
 FUNC_0(&VAR_3->sc_confirm, sizeof(nfs4_verifier));

 VAR_1;
}
