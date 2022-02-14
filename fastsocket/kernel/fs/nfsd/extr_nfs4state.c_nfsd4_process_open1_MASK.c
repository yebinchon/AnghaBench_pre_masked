
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cl_id; } ;
struct nfsd4_open {int op_seqid; struct nfs4_stateowner* op_stateowner; int op_owner; TYPE_2__ op_clientid; } ;
struct nfsd4_compound_state {int dummy; } ;
struct TYPE_5__ {scalar_t__ rp_buflen; } ;
struct nfs4_stateowner {int so_seqid; struct nfs4_client* so_client; int so_close_lru; TYPE_1__ so_replay; int so_confirmed; } ;
struct nfs4_client {int dummy; } ;
typedef TYPE_2__ clientid_t ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 struct nfs4_stateowner* FUNC_1 (unsigned int,struct nfs4_client*,struct nfsd4_open*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 struct nfs4_client* FUNC_4 (TYPE_2__*) ;
 struct nfs4_stateowner* FUNC_5 (unsigned int,struct nfsd4_open*) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (struct nfsd4_compound_state*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct nfs4_stateowner*) ;
 int FUNC_10 (struct nfs4_client*) ;

__be32
FUNC_11(struct nfsd4_compound_state *VAR_7,
      struct nfsd4_open *VAR_8)
{
 clientid_t *VAR_9 = &VAR_8->op_clientid;
 struct nfs4_client *VAR_10 = ((void*)0);
 unsigned int VAR_11;
 struct nfs4_stateowner *VAR_12 = ((void*)0);

 if (!FUNC_2(VAR_8->op_owner))
  return VAR_3;

 if (FUNC_0(&VAR_8->op_clientid))
  return VAR_6;

 VAR_11 = FUNC_8(VAR_9->cl_id, VAR_8->op_owner);
 VAR_12 = FUNC_5(VAR_11, VAR_8);
 VAR_8->op_stateowner = VAR_12;
 if (!VAR_12) {

  VAR_10 = FUNC_4(VAR_9);
  if (VAR_10 == ((void*)0))
   return VAR_2;
  goto renew;
 }

 if (FUNC_7(VAR_7))
  goto renew;
 if (!VAR_12->so_confirmed) {

  VAR_10 = VAR_12->so_client;
  FUNC_9(VAR_12);
  VAR_8->op_stateowner = ((void*)0);
  goto renew;
 }
 if (VAR_8->op_seqid == VAR_12->so_seqid - 1) {
  if (VAR_12->so_replay.rp_buflen)
   return VAR_4;






  FUNC_3("nfsd4_process_open1: replay with no replay cache\n");
  goto renew;
 }
 if (VAR_8->op_seqid != VAR_12->so_seqid)
  return VAR_1;
renew:
 if (VAR_8->op_stateowner == ((void*)0)) {
  VAR_12 = FUNC_1(VAR_11, VAR_10, VAR_8);
  if (VAR_12 == ((void*)0))
   return VAR_5;
  VAR_8->op_stateowner = VAR_12;
 }
 FUNC_6(&VAR_12->so_close_lru);
 FUNC_10(VAR_12->so_client);
 return VAR_0;
}
