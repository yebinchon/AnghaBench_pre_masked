
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct nfsd4_reclaim_complete {scalar_t__ rca_one_fs; } ;
struct TYPE_3__ {int fh_dentry; } ;
struct nfsd4_compound_state {TYPE_2__* session; TYPE_1__ current_fh; } ;
typedef int __be32 ;
struct TYPE_4__ {int se_client; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__be32
FUNC_4(struct svc_rqst *VAR_3, struct nfsd4_compound_state *VAR_4, struct nfsd4_reclaim_complete *VAR_5)
{
 if (VAR_5->rca_one_fs) {
  if (!VAR_4->current_fh.fh_dentry)
   return VAR_1;




   return VAR_0;
 }
 FUNC_1();
 if (FUNC_0(VAR_4->session->se_client)) {
  FUNC_2();







  return VAR_2;
 }
 FUNC_3(VAR_4->session->se_client);
 FUNC_2();
 return VAR_0;
}
