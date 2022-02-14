
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_compoundargs {int dummy; } ;
struct nfsd4_commit {int co_count; int co_offset; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundargs *VAR_2, struct nfsd4_commit *VAR_3)
{
 VAR_0;

 FUNC_2(12);
 FUNC_1(VAR_3->co_offset);
 FUNC_0(VAR_3->co_count);

 VAR_1;
}
