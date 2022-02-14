
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_setclientid {int se_confirm; int se_clientid; } ;
struct nfsd4_compoundres {int dummy; } ;
typedef int nfs4_verifier ;
typedef scalar_t__ __be32 ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static __be32
FUNC_4(struct nfsd4_compoundres *VAR_1, __be32 VAR_2, struct nfsd4_setclientid *VAR_3)
{
 __be32 *VAR_4;

 if (!VAR_2) {
  FUNC_1(8 + sizeof(nfs4_verifier));
  FUNC_3(&VAR_3->se_clientid, 8);
  FUNC_3(&VAR_3->se_confirm, sizeof(nfs4_verifier));
  FUNC_0();
 }
 else if (VAR_2 == VAR_0) {
  FUNC_1(8);
  FUNC_2(0);
  FUNC_2(0);
  FUNC_0();
 }
 return VAR_2;
}
