
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sysctl_ctx_list {int dummy; } ;
struct vi_info {struct sysctl_ctx_list ctx; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct TYPE_6__ {int sidx; int pidx; int cidx; int cntxt_id; int ba; } ;
struct sge_wrq {int tx_wrs_ss; int tx_wrs_copied; int tx_wrs_direct; TYPE_3__ eq; scalar_t__ ndesc_needed; scalar_t__ nwr_pending; int wr_list; int incomplete_wrs; int wrq_tx_task; struct adapter* adapter; } ;
struct TYPE_4__ {int spg_len; } ;
struct TYPE_5__ {TYPE_1__ sge; } ;
struct adapter {TYPE_2__ params; struct sysctl_ctx_list ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,int ,char*,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 int FUNC_4 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 int FUNC_5 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 struct sysctl_oid_list* FUNC_6 (struct sysctl_oid*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,struct sge_wrq*) ;
 int FUNC_9 (struct adapter*,struct vi_info*,TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_10(struct adapter *VAR_6, struct vi_info *VAR_7, struct sge_wrq *VAR_8,
    struct sysctl_oid *VAR_9)
{
 int VAR_10;
 struct sysctl_ctx_list *VAR_11 = VAR_7 ? &VAR_7->ctx : &VAR_6->ctx;
 struct sysctl_oid_list *VAR_12 = FUNC_6(VAR_9);

 VAR_10 = FUNC_9(VAR_6, VAR_7, &VAR_8->eq);
 if (VAR_10)
  return (VAR_10);

 VAR_8->adapter = VAR_6;
 FUNC_8(&VAR_8->wrq_tx_task, 0, VAR_5, VAR_8);
 FUNC_7(&VAR_8->incomplete_wrs);
 FUNC_0(&VAR_8->wr_list);
 VAR_8->nwr_pending = 0;
 VAR_8->ndesc_needed = 0;

 FUNC_3(VAR_11, VAR_12, VAR_3, "ba", VAR_0,
     &VAR_8->eq.ba, "bus address of descriptor ring");
 FUNC_1(VAR_11, VAR_12, VAR_3, "dmalen", VAR_0, ((void*)0),
     VAR_8->eq.sidx * VAR_2 + VAR_6->params.sge.spg_len,
     "desc ring size in bytes");
 FUNC_4(VAR_11, VAR_12, VAR_3, "cntxt_id", VAR_0,
     &VAR_8->eq.cntxt_id, 0, "SGE context id of the queue");
 FUNC_2(VAR_11, VAR_12, VAR_3, "cidx",
     VAR_1 | VAR_0, &VAR_8->eq.cidx, 0, VAR_4, "I",
     "consumer index");
 FUNC_2(VAR_11, VAR_12, VAR_3, "pidx",
     VAR_1 | VAR_0, &VAR_8->eq.pidx, 0, VAR_4, "I",
     "producer index");
 FUNC_1(VAR_11, VAR_12, VAR_3, "sidx", VAR_0, ((void*)0),
     VAR_8->eq.sidx, "status page index");
 FUNC_5(VAR_11, VAR_12, VAR_3, "tx_wrs_direct", VAR_0,
     &VAR_8->tx_wrs_direct, "# of work requests (direct)");
 FUNC_5(VAR_11, VAR_12, VAR_3, "tx_wrs_copied", VAR_0,
     &VAR_8->tx_wrs_copied, "# of work requests (copied)");
 FUNC_5(VAR_11, VAR_12, VAR_3, "tx_wrs_sspace", VAR_0,
     &VAR_8->tx_wrs_ss, "# of work requests (copied from scratch space)");

 return (VAR_10);
}
