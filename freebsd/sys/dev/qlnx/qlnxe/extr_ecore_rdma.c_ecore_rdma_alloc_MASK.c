
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef void* u16 ;
struct ecore_rdma_info {int num_qps; int num_mrs; int srq_id_offset; int num_srqs; int srq_map; int xrc_srq_map; int cid_map; int qp_map; int tid_map; int toggle_bits; int cq_map; int dpi_map; int xrcd_map; int pd_map; void* port; void* dev; void* max_queue_zones; void* queue_zone_base; int proto; } ;
struct TYPE_2__ {scalar_t__ personality; } ;
struct ecore_hwfn {int dpi_count; int p_dev; TYPE_1__ hw_info; struct ecore_rdma_info* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,...) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*) ;
 int VAR_8 ;
 void* FUNC_3 (int ,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (struct ecore_hwfn*,int ) ;
 scalar_t__ FUNC_5 (struct ecore_hwfn*,int ) ;
 int FUNC_6 (struct ecore_hwfn*,int ,int ) ;
 int FUNC_7 (struct ecore_hwfn*,int ) ;
 int FUNC_8 (struct ecore_hwfn*) ;
 scalar_t__ FUNC_9 (struct ecore_hwfn*) ;
 int FUNC_10 (struct ecore_hwfn*) ;
 int FUNC_11 (struct ecore_hwfn*,int *,int,char*) ;

__attribute__((used)) static enum _ecore_status_t FUNC_12(struct ecore_hwfn *VAR_12)
{
 struct ecore_rdma_info *VAR_13 = VAR_12->p_rdma_info;
 u32 VAR_14, VAR_15;
 enum _ecore_status_t VAR_16;

 FUNC_1(VAR_12, VAR_2, "Allocating RDMA\n");

 if (!VAR_13)
  return VAR_0;

 if (VAR_12->hw_info.personality == VAR_4)
  VAR_13->proto = VAR_9;
 else
  VAR_13->proto = VAR_10;

 VAR_14 = FUNC_6(VAR_12, VAR_13->proto,
       VAR_8);

 if (FUNC_2(VAR_12))
  VAR_13->num_qps = VAR_14;
 else
  VAR_13->num_qps = VAR_14 / 2;


 VAR_15 = FUNC_7(VAR_12, VAR_10);


 VAR_13->num_mrs = VAR_15;




 VAR_13->queue_zone_base = (u16) FUNC_5(VAR_12, VAR_1);
 VAR_13->max_queue_zones = (u16) FUNC_4(VAR_12, VAR_1);


 VAR_13->dev = FUNC_3(VAR_12->p_dev, VAR_7, sizeof(*VAR_13->dev));
 if (!VAR_13->dev)
 {
  VAR_16 = VAR_3;
  FUNC_0(VAR_12, 0,
     "ecore rdma alloc failed: cannot allocate memory (rdma info dev). rc = %d\n",
     VAR_16);
  return VAR_16;
 }


 VAR_13->port = FUNC_3(VAR_12->p_dev, VAR_7, sizeof(*VAR_13->port));
 if (!VAR_13->port)
 {
  FUNC_0(VAR_12, 0,
     "ecore rdma alloc failed: cannot allocate memory (rdma info port)\n");
  return VAR_3;
 }


 VAR_16 = FUNC_11(VAR_12, &VAR_13->pd_map, VAR_11,
       "PD");
 if (VAR_16 != VAR_6)
 {
  FUNC_1(VAR_12, VAR_2,
      "Failed to allocate pd_map,rc = %d\n",
      VAR_16);
  return VAR_16;
 }


 VAR_16 = FUNC_11(VAR_12, &VAR_13->xrcd_map,
       VAR_5, "XRCD");
 if (VAR_16 != VAR_6)
 {
  FUNC_1(VAR_12, VAR_2,
      "Failed to allocate xrcd_map,rc = %d\n",
      VAR_16);
  return VAR_16;
 }


 VAR_16 = FUNC_11(VAR_12, &VAR_13->dpi_map,
       VAR_12->dpi_count, "DPI");
 if (VAR_16 != VAR_6)
 {
  FUNC_1(VAR_12, VAR_2,
      "Failed to allocate DPI bitmap, rc = %d\n", VAR_16);
  return VAR_16;
 }




 VAR_16 = FUNC_11(VAR_12, &VAR_13->cq_map,
       VAR_14, "CQ");
 if (VAR_16 != VAR_6)
 {
  FUNC_1(VAR_12, VAR_2,
      "Failed to allocate cq bitmap, rc = %d\n", VAR_16);
  return VAR_16;
 }






 VAR_16 = FUNC_11(VAR_12, &VAR_13->toggle_bits,
       VAR_14, "Toggle");
 if (VAR_16 != VAR_6)
 {
  FUNC_1(VAR_12, VAR_2,
      "Failed to allocate toogle bits, rc = %d\n", VAR_16);
  return VAR_16;
 }


 VAR_16 = FUNC_11(VAR_12, &VAR_13->tid_map,
       VAR_13->num_mrs, "MR");
 if (VAR_16 != VAR_6)
 {
  FUNC_1(VAR_12, VAR_2,
      "Failed to allocate itids bitmaps, rc = %d\n", VAR_16);
  return VAR_16;
 }


 VAR_16 = FUNC_11(VAR_12, &VAR_13->qp_map,
       VAR_13->num_qps, "QP");
 if (VAR_16 != VAR_6)
 {
  FUNC_1(VAR_12, VAR_2,
      "Failed to allocate qp bitmap, rc = %d\n", VAR_16);
  return VAR_16;
 }


 VAR_16 = FUNC_11(VAR_12, &VAR_13->cid_map, VAR_14,
       "REAL CID");
 if (VAR_16 != VAR_6)
 {
  FUNC_1(VAR_12, VAR_2,
      "Failed to allocate cid bitmap, rc = %d\n", VAR_16);
  return VAR_16;
 }




 VAR_13->srq_id_offset = (u16)FUNC_9(VAR_12);
 VAR_16 = FUNC_11(VAR_12, &VAR_13->xrc_srq_map,
       VAR_13->srq_id_offset, "XRC SRQ");
 if (VAR_16 != VAR_6) {
  FUNC_1(VAR_12, VAR_2,
      "Failed to allocate xrc srq bitmap, rc = %d\n", VAR_16);
  return VAR_16;
 }


 VAR_13->num_srqs = FUNC_8(VAR_12);
 VAR_16 = FUNC_11(VAR_12, &VAR_13->srq_map,
       VAR_13->num_srqs,
       "SRQ");
 if (VAR_16 != VAR_6) {
  FUNC_1(VAR_12, VAR_2,
      "Failed to allocate srq bitmap, rc = %d\n", VAR_16);

  return VAR_16;
 }

 if (FUNC_2(VAR_12))
  VAR_16 = FUNC_10(VAR_12);

 FUNC_1(VAR_12, VAR_2, "rc = %d\n", VAR_16);

 return VAR_16;
}
