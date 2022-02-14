
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_compoundargs {int dummy; } ;
struct nfsd4_close {int cl_stateid; int cl_seqid; int * cl_stateowner; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nfsd4_compoundargs*,int *) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundargs *VAR_2, struct nfsd4_close *VAR_3)
{
 VAR_0;

 VAR_3->cl_stateowner = ((void*)0);
 FUNC_1(4);
 FUNC_0(VAR_3->cl_seqid);
 return FUNC_2(VAR_2, &VAR_3->cl_stateid);

 VAR_1;
}
