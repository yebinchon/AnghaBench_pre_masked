
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_rename {int rn_tinfo; int rn_sinfo; } ;
struct nfsd4_compoundres {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int **,int *) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundres *VAR_0, __be32 VAR_1, struct nfsd4_rename *VAR_2)
{
 __be32 *VAR_3;

 if (!VAR_1) {
  FUNC_1(40);
  FUNC_2(&VAR_3, &VAR_2->rn_sinfo);
  FUNC_2(&VAR_3, &VAR_2->rn_tinfo);
  FUNC_0();
 }
 return VAR_1;
}
