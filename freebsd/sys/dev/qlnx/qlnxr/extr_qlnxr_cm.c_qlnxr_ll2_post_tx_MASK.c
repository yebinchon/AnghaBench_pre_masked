
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qlnxr_dev {TYPE_3__* ha; int gsi_ll2_handle; int rdma_ctx; } ;
struct TYPE_5__ {int len; int baddr; int vaddr; } ;
struct ecore_roce_ll2_packet {scalar_t__ roce_mode; int n_seg; TYPE_2__* payload; TYPE_1__ header; } ;
struct ecore_ll2_tx_pkt_info {int num_of_bds; int ecore_roce_flavor; int enable_ip_cksum; struct ecore_roce_ll2_packet* cookie; int first_frag_len; int first_frag; int tx_dest; scalar_t__ vlan; } ;
struct ecore_ll2_stats {int member_0; } ;
typedef int ll2_tx_pkt ;
typedef enum ecore_ll2_roce_flavor_type { ____Placeholder_ecore_ll2_roce_flavor_type } ecore_ll2_roce_flavor_type ;
struct TYPE_7__ {int cdev; } ;
struct TYPE_6__ {int len; int baddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,struct ecore_ll2_stats*) ;
 int FUNC_3 (int ,int ,struct ecore_ll2_tx_pkt_info*,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct ecore_roce_ll2_packet*) ;
 int FUNC_6 (struct ecore_ll2_tx_pkt_info*,int ,int) ;
 int FUNC_7 (int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct qlnxr_dev *VAR_4, struct ecore_roce_ll2_packet *VAR_5)
{
 enum ecore_ll2_roce_flavor_type VAR_6;
 struct ecore_ll2_tx_pkt_info VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_1(VAR_4->ha, "enter\n");

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));

 if (VAR_5->roce_mode != VAR_3) {
  FUNC_0(VAR_4->ha, "roce_mode != ROCE_V1\n");
  return (-1);
 }

 VAR_6 = (VAR_5->roce_mode == VAR_3) ?
  VAR_0 : VAR_1;

 VAR_7.num_of_bds = 1 + VAR_5->n_seg;
 VAR_7.vlan = 0;
 VAR_7.tx_dest = VAR_2;
 VAR_7.ecore_roce_flavor = VAR_6;
 VAR_7.first_frag = VAR_5->header.baddr;
 VAR_7.first_frag_len = VAR_5->header.len;
 VAR_7.cookie = VAR_5;
 VAR_7.enable_ip_cksum = 1;


 VAR_8 = FUNC_3(VAR_4->rdma_ctx,
   VAR_4->gsi_ll2_handle,
   &VAR_7,
   1);
 if (VAR_8) {

  FUNC_0(VAR_4->ha, "ecore_ll2_prepare_tx_packet failed\n");


                FUNC_7(&VAR_4->ha->cdev,
   VAR_5->header.vaddr,
   VAR_5->header.baddr,
                        VAR_5->header.len);

  FUNC_5(VAR_5);

  return VAR_8;
 }


 for (VAR_9 = 0; VAR_9 < VAR_5->n_seg; VAR_9++) {
  VAR_8 = FUNC_4(VAR_4->rdma_ctx,
             VAR_4->gsi_ll2_handle,
             VAR_5->payload[VAR_9].baddr,
             VAR_5->payload[VAR_9].len);
  if (VAR_8) {




   FUNC_0(VAR_4->ha,
    "ecore_ll2_set_fragment_of_tx_packet failed\n");
   return VAR_8;
  }
 }
 struct ecore_ll2_stats VAR_10 = {0};
 VAR_8 = FUNC_2(VAR_4->rdma_ctx, VAR_4->gsi_ll2_handle, &VAR_10);
 if (VAR_8) {
  FUNC_0(VAR_4->ha, "failed to obtain ll2 stats\n");
 }
 FUNC_1(VAR_4->ha, "exit\n");

 return 0;
}
