
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_exchange_id {int flags; } ;
struct nfs4_client {int cl_exchange_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct nfs4_client *VAR_2, struct nfsd4_exchange_id *VAR_3)
{

 VAR_2->cl_exchange_flags |= VAR_1;


 VAR_2->cl_exchange_flags |= VAR_0;


 VAR_3->flags = VAR_2->cl_exchange_flags;
}
