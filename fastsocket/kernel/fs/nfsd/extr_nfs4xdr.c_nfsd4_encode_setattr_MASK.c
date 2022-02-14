
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_setattr {int* sa_bmval; } ;
struct nfsd4_compoundres {int dummy; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundres *VAR_0, __be32 VAR_1, struct nfsd4_setattr *VAR_2)
{
 __be32 *VAR_3;

 FUNC_1(12);
 if (VAR_1) {
  FUNC_2(2);
  FUNC_2(0);
  FUNC_2(0);
 }
 else {
  FUNC_2(2);
  FUNC_2(VAR_2->sa_bmval[0]);
  FUNC_2(VAR_2->sa_bmval[1]);
 }
 FUNC_0();
 return VAR_1;
}
