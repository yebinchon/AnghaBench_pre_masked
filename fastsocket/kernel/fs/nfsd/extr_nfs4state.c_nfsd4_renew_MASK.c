
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {int dummy; } ;
struct nfs4_client {int cl_cb_set; int cl_delegations; } ;
struct TYPE_5__ {int cl_id; int cl_boot; } ;
typedef TYPE_1__ clientid_t ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 struct nfs4_client* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct nfs4_client*) ;

__be32
FUNC_8(struct svc_rqst *VAR_4, struct nfsd4_compound_state *VAR_5,
     clientid_t *VAR_6)
{
 struct nfs4_client *VAR_7;
 __be32 VAR_8;

 FUNC_5();
 FUNC_2("process_renew(%08x/%08x): starting\n",
   VAR_6->cl_boot, VAR_6->cl_id);
 VAR_8 = VAR_3;
 if (FUNC_0(VAR_6))
  goto out;
 VAR_7 = FUNC_3(VAR_6);
 VAR_8 = VAR_2;
 if (VAR_7 == ((void*)0)) {

  FUNC_2("nfsd4_renew: clientid not found!\n");
  goto out;
 }
 FUNC_7(VAR_7);
 VAR_8 = VAR_1;
 if (!FUNC_4(&VAR_7->cl_delegations)
   && !FUNC_1(&VAR_7->cl_cb_set))
  goto out;
 VAR_8 = VAR_0;
out:
 FUNC_6();
 return VAR_8;
}
