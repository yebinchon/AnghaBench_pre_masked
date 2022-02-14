
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_create {int* cr_bmval; int cr_cinfo; } ;
struct nfsd4_compoundres {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int **,int *) ;

__attribute__((used)) static __be32
FUNC_4(struct nfsd4_compoundres *VAR_0, __be32 VAR_1, struct nfsd4_create *VAR_2)
{
 __be32 *VAR_3;

 if (!VAR_1) {
  FUNC_1(32);
  FUNC_3(&VAR_3, &VAR_2->cr_cinfo);
  FUNC_2(2);
  FUNC_2(VAR_2->cr_bmval[0]);
  FUNC_2(VAR_2->cr_bmval[1]);
  FUNC_0();
 }
 return VAR_1;
}
