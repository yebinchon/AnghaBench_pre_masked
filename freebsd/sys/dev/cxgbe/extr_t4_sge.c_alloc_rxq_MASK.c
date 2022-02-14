
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vi_info {int ctx; TYPE_4__* ifp; TYPE_2__* pi; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct TYPE_9__ {int lro_flushed; int lro_queued; TYPE_4__* ifp; } ;
struct TYPE_11__ {scalar_t__ abs_id; scalar_t__ cntxt_id; int flags; } ;
struct sge_rxq {int fl; int vlan_extraction; int rxcsum; TYPE_3__ lro; TYPE_5__ iq; TYPE_4__* ifp; } ;
struct TYPE_7__ {scalar_t__ iq_base; } ;
struct adapter {int flags; TYPE_1__ sge; } ;
typedef int name ;
struct TYPE_10__ {int if_capenable; } ;
struct TYPE_8__ {struct adapter* adapter; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 struct sysctl_oid* FUNC_4 (int *,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_5 (int *,struct sysctl_oid_list*,int ,char*,int ,int *,int ,int *) ;
 int FUNC_6 (int *,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_7 (struct sysctl_oid*) ;
 int FUNC_8 (struct adapter*,int *,struct sysctl_oid*,int *) ;
 int FUNC_9 (int *,struct sysctl_oid*,TYPE_5__*) ;
 int FUNC_10 (struct vi_info*,TYPE_5__*,int *,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (struct adapter*,int *,int) ;
 int FUNC_12 (char*,int,char*,int) ;
 int FUNC_13 (TYPE_3__*,TYPE_4__*,int ,int ) ;
 int FUNC_14 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_15(struct vi_info *VAR_10, struct sge_rxq *VAR_11, int VAR_12, int VAR_13,
    struct sysctl_oid *VAR_14)
{
 int VAR_15;
 struct adapter *VAR_16 = VAR_10->pi->adapter;
 struct sysctl_oid_list *VAR_17;
 char VAR_18[16];

 VAR_15 = FUNC_10(VAR_10, &VAR_11->iq, &VAR_11->fl, VAR_12,
     FUNC_14(VAR_10->pi, VAR_7));
 if (VAR_15 != 0)
  return (VAR_15);

 if (VAR_13 == 0)
  VAR_16->sge.iq_base = VAR_11->iq.abs_id - VAR_11->iq.cntxt_id;
 else
  FUNC_2(VAR_11->iq.cntxt_id + VAR_16->sge.iq_base == VAR_11->iq.abs_id,
      ("iq_base mismatch"));
 FUNC_2(VAR_16->sge.iq_base == 0 || VAR_16->flags & VAR_5,
     ("PF with non-zero iq_base"));





 FUNC_0(&VAR_11->fl);
 FUNC_11(VAR_16, &VAR_11->fl, 128);
 FUNC_1(&VAR_11->fl);
 if (VAR_10->ifp->if_capenable & VAR_1)
  VAR_11->iq.flags |= VAR_4;
 VAR_11->ifp = VAR_10->ifp;

 VAR_17 = FUNC_7(VAR_14);

 FUNC_12(VAR_18, sizeof(VAR_18), "%d", VAR_13);
 VAR_14 = FUNC_4(&VAR_10->ctx, VAR_17, VAR_6, VAR_18, VAR_0,
     ((void*)0), "rx queue");
 VAR_17 = FUNC_7(VAR_14);

 FUNC_9(&VAR_10->ctx, VAR_14, &VAR_11->iq);






 FUNC_6(&VAR_10->ctx, VAR_17, VAR_6, "rxcsum", VAR_0,
     &VAR_11->rxcsum, "# of times hardware assisted with checksum");
 FUNC_6(&VAR_10->ctx, VAR_17, VAR_6, "vlan_extraction",
     VAR_0, &VAR_11->vlan_extraction,
     "# of times hardware extracted 802.1Q tag");

 FUNC_8(VAR_16, &VAR_10->ctx, VAR_14, &VAR_11->fl);

 return (VAR_15);
}
