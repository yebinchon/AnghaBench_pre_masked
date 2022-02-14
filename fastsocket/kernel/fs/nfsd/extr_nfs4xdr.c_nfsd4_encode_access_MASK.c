
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_compoundres {int dummy; } ;
struct nfsd4_access {int ac_resp_access; int ac_supported; } ;
typedef int __be32 ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundres *VAR_0, __be32 VAR_1, struct nfsd4_access *VAR_2)
{
 __be32 *VAR_3;

 if (!VAR_1) {
  FUNC_1(8);
  FUNC_2(VAR_2->ac_supported);
  FUNC_2(VAR_2->ac_resp_access);
  FUNC_0();
 }
 return VAR_1;
}
