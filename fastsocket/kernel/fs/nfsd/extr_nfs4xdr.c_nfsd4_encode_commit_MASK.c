
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_compoundres {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct nfsd4_commit {TYPE_1__ co_verf; } ;
typedef int __be32 ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundres *VAR_0, __be32 VAR_1, struct nfsd4_commit *VAR_2)
{
 __be32 *VAR_3;

 if (!VAR_1) {
  FUNC_1(8);
  FUNC_2(VAR_2->co_verf.data, 8);
  FUNC_0();
 }
 return VAR_1;
}
