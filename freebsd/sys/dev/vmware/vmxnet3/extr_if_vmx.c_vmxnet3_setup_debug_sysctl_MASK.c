
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int vxcr_gen; int vxcr_ndesc; int vxcr_next; } ;
struct TYPE_6__ {int vxtxr_gen; int vxtxr_ndesc; int vxtxr_next; } ;
struct vmxnet3_txqueue {TYPE_2__ vxtxq_comp_ring; TYPE_1__ vxtxq_cmd_ring; int vxtxq_sysctl; } ;
struct vmxnet3_softc {struct vmxnet3_rxqueue* vmx_rxq; struct vmxnet3_txqueue* vmx_txq; TYPE_5__* vmx_scctx; } ;
struct TYPE_9__ {int vxcr_gen; int vxcr_ndesc; } ;
struct vmxnet3_rxqueue {TYPE_4__ vxrxq_comp_ring; TYPE_3__* vxrxq_cmd_ring; int vxrxq_sysctl; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef TYPE_5__* if_softc_ctx_t ;
struct TYPE_10__ {int isc_ntxqsets; int isc_nrxqsets; } ;
struct TYPE_8__ {int vxrxr_gen; int vxrxr_ndesc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;

__attribute__((used)) static void
FUNC_4(struct vmxnet3_softc *VAR_2,
    struct sysctl_ctx_list *VAR_3, struct sysctl_oid_list *VAR_4)
{
 if_softc_ctx_t VAR_5;
 struct sysctl_oid *VAR_6;
 struct sysctl_oid_list *VAR_7;
 int VAR_8;

 VAR_5 = VAR_2->vmx_scctx;

 for (VAR_8 = 0; VAR_8 < VAR_5->isc_ntxqsets; VAR_8++) {
  struct vmxnet3_txqueue *VAR_9 = &VAR_2->vmx_txq[VAR_8];

  VAR_6 = FUNC_1(VAR_3, VAR_9->vxtxq_sysctl, VAR_1,
      "debug", VAR_0, ((void*)0), "");
  VAR_7 = FUNC_3(VAR_6);

  FUNC_2(VAR_3, VAR_7, VAR_1, "cmd_next", VAR_0,
      &VAR_9->vxtxq_cmd_ring.vxtxr_next, 0, "");
  FUNC_2(VAR_3, VAR_7, VAR_1, "cmd_ndesc", VAR_0,
      &VAR_9->vxtxq_cmd_ring.vxtxr_ndesc, 0, "");
  FUNC_0(VAR_3, VAR_7, VAR_1, "cmd_gen", VAR_0,
      &VAR_9->vxtxq_cmd_ring.vxtxr_gen, 0, "");
  FUNC_2(VAR_3, VAR_7, VAR_1, "comp_next", VAR_0,
      &VAR_9->vxtxq_comp_ring.vxcr_next, 0, "");
  FUNC_2(VAR_3, VAR_7, VAR_1, "comp_ndesc", VAR_0,
      &VAR_9->vxtxq_comp_ring.vxcr_ndesc, 0,"");
  FUNC_0(VAR_3, VAR_7, VAR_1, "comp_gen", VAR_0,
      &VAR_9->vxtxq_comp_ring.vxcr_gen, 0, "");
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->isc_nrxqsets; VAR_8++) {
  struct vmxnet3_rxqueue *VAR_10 = &VAR_2->vmx_rxq[VAR_8];

  VAR_6 = FUNC_1(VAR_3, VAR_10->vxrxq_sysctl, VAR_1,
      "debug", VAR_0, ((void*)0), "");
  VAR_7 = FUNC_3(VAR_6);

  FUNC_2(VAR_3, VAR_7, VAR_1, "cmd0_ndesc", VAR_0,
      &VAR_10->vxrxq_cmd_ring[0].vxrxr_ndesc, 0, "");
  FUNC_0(VAR_3, VAR_7, VAR_1, "cmd0_gen", VAR_0,
      &VAR_10->vxrxq_cmd_ring[0].vxrxr_gen, 0, "");
  FUNC_2(VAR_3, VAR_7, VAR_1, "cmd1_ndesc", VAR_0,
      &VAR_10->vxrxq_cmd_ring[1].vxrxr_ndesc, 0, "");
  FUNC_0(VAR_3, VAR_7, VAR_1, "cmd1_gen", VAR_0,
      &VAR_10->vxrxq_cmd_ring[1].vxrxr_gen, 0, "");
  FUNC_2(VAR_3, VAR_7, VAR_1, "comp_ndesc", VAR_0,
      &VAR_10->vxrxq_comp_ring.vxcr_ndesc, 0,"");
  FUNC_0(VAR_3, VAR_7, VAR_1, "comp_gen", VAR_0,
      &VAR_10->vxrxq_comp_ring.vxcr_gen, 0, "");
 }
}
