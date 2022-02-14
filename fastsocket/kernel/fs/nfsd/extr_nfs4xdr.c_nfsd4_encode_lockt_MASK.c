
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_lockt {int lt_denied; } ;
struct nfsd4_compoundres {int dummy; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (struct nfsd4_compoundres*,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static __be32
FUNC_1(struct nfsd4_compoundres *VAR_1, __be32 VAR_2, struct nfsd4_lockt *VAR_3)
{
 if (VAR_2 == VAR_0)
  FUNC_0(VAR_1, &VAR_3->lt_denied);
 return VAR_2;
}
