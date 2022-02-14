
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vi_info {scalar_t__ nrxq; scalar_t__ ntxq; scalar_t__ first_rxq; scalar_t__ first_txq; scalar_t__ nofldrxq; scalar_t__ first_ofld_rxq; scalar_t__ nofldtxq; scalar_t__ first_ofld_txq; scalar_t__ nnmrxq; scalar_t__ nnmtxq; scalar_t__ first_nm_rxq; scalar_t__ first_nm_txq; int rss_size; int rss_base; int viid; int dev; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct vi_info*) ;
 int VAR_3 ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,scalar_t__*,int ,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct vi_info*,int ,int ,char*,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_4 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_5 (int ) ;
 struct sysctl_oid* FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void
FUNC_7(struct vi_info *VAR_11)
{
 struct sysctl_ctx_list *VAR_12;
 struct sysctl_oid *VAR_13;
 struct sysctl_oid_list *VAR_14;

 VAR_12 = FUNC_5(VAR_11->dev);




 VAR_13 = FUNC_6(VAR_11->dev);
 VAR_14 = FUNC_4(VAR_13);

 FUNC_3(VAR_12, VAR_14, VAR_3, "viid", VAR_0, ((void*)0),
     VAR_11->viid, "VI identifer");
 FUNC_1(VAR_12, VAR_14, VAR_3, "nrxq", VAR_0,
     &VAR_11->nrxq, 0, "# of rx queues");
 FUNC_1(VAR_12, VAR_14, VAR_3, "ntxq", VAR_0,
     &VAR_11->ntxq, 0, "# of tx queues");
 FUNC_1(VAR_12, VAR_14, VAR_3, "first_rxq", VAR_0,
     &VAR_11->first_rxq, 0, "index of first rx queue");
 FUNC_1(VAR_12, VAR_14, VAR_3, "first_txq", VAR_0,
     &VAR_11->first_txq, 0, "index of first tx queue");
 FUNC_3(VAR_12, VAR_14, VAR_3, "rss_base", VAR_0, ((void*)0),
     VAR_11->rss_base, "start of RSS indirection table");
 FUNC_3(VAR_12, VAR_14, VAR_3, "rss_size", VAR_0, ((void*)0),
     VAR_11->rss_size, "size of RSS indirection table");

 if (FUNC_0(VAR_11)) {
  FUNC_2(VAR_12, VAR_14, VAR_3, "rsrv_noflowq",
      VAR_2 | VAR_1, VAR_11, 0, VAR_8, "IU",
      "Reserve queue 0 for non-flowid packets");
 }
 FUNC_2(VAR_12, VAR_14, VAR_3, "holdoff_tmr_idx",
     VAR_2 | VAR_1, VAR_11, 0, VAR_6, "I",
     "holdoff timer index");
 FUNC_2(VAR_12, VAR_14, VAR_3, "holdoff_pktc_idx",
     VAR_2 | VAR_1, VAR_11, 0, VAR_4, "I",
     "holdoff packet counter index");

 FUNC_2(VAR_12, VAR_14, VAR_3, "qsize_rxq",
     VAR_2 | VAR_1, VAR_11, 0, VAR_9, "I",
     "rx queue size");
 FUNC_2(VAR_12, VAR_14, VAR_3, "qsize_txq",
     VAR_2 | VAR_1, VAR_11, 0, VAR_10, "I",
     "tx queue size");
}
