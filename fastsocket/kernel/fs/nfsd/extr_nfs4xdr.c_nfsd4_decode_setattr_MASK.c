
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_setattr {int sa_acl; int sa_iattr; int sa_bmval; int sa_stateid; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (struct nfsd4_compoundargs*,int ,int *,int *) ;
 scalar_t__ FUNC_1 (struct nfsd4_compoundargs*,int *) ;

__attribute__((used)) static __be32
FUNC_2(struct nfsd4_compoundargs *VAR_0, struct nfsd4_setattr *VAR_1)
{
 __be32 VAR_2;

 VAR_2 = FUNC_1(VAR_0, &VAR_1->sa_stateid);
 if (VAR_2)
  return VAR_2;
 return FUNC_0(VAR_0, VAR_1->sa_bmval, &VAR_1->sa_iattr,
      &VAR_1->sa_acl);
}
