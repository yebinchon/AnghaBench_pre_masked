
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_open_downgrade {int od_stateowner; int od_stateid; } ;
struct nfsd4_compoundres {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfsd4_compoundres*,int *) ;

__attribute__((used)) static __be32
FUNC_2(struct nfsd4_compoundres *VAR_1, __be32 VAR_2, struct nfsd4_open_downgrade *VAR_3)
{
 VAR_0;

 if (!VAR_2)
  FUNC_1(VAR_1, &VAR_3->od_stateid);

 FUNC_0(VAR_3->od_stateowner);
 return VAR_2;
}
