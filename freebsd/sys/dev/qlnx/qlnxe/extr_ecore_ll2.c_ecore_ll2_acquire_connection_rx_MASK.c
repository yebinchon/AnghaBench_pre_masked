
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ecore_ll2_rx_packet {int dummy; } ;
struct TYPE_4__ {int rx_num_desc; int conn_type; } ;
struct TYPE_3__ {int rcq_chain; struct ecore_ll2_rx_packet* descq_array; int rxq_chain; } ;
struct ecore_ll2_info {TYPE_2__ input; TYPE_1__ rx_queue; } ;
struct ecore_hwfn {int p_dev; } ;
struct core_rx_fast_path_cqe {int dummy; } ;
struct core_rx_bd {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ecore_ll2_rx_packet* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int,int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_5(struct ecore_hwfn *VAR_9,
    struct ecore_ll2_info *VAR_10)
{
 struct ecore_ll2_rx_packet *VAR_11;
 u32 VAR_12;
 enum _ecore_status_t VAR_13 = VAR_6;

 if (!VAR_10->input.rx_num_desc)
  goto out;

 VAR_13 = FUNC_3(VAR_9->p_dev,
          VAR_3,
          VAR_1,
          VAR_0,
          VAR_10->input.rx_num_desc,
          sizeof(struct core_rx_bd),
          &VAR_10->rx_queue.rxq_chain, VAR_8);
 if (VAR_13) {
  FUNC_0(VAR_9, 0,
     "Failed to allocate ll2 rxq chain\n");
  goto out;
 }

 VAR_12 = FUNC_4(&VAR_10->rx_queue.rxq_chain);
 VAR_11 = FUNC_2(VAR_9->p_dev, VAR_7,
         VAR_12 * sizeof(struct ecore_ll2_rx_packet));
 if (!VAR_11) {
  VAR_13 = VAR_5;
  FUNC_0(VAR_9, 0,
     "Failed to allocate ll2 Rx desc\n");
  goto out;
 }
 VAR_10->rx_queue.descq_array = VAR_11;

 VAR_13 = FUNC_3(VAR_9->p_dev,
          VAR_3,
          VAR_2,
          VAR_0,
          VAR_10->input.rx_num_desc,
          sizeof(struct core_rx_fast_path_cqe),
          &VAR_10->rx_queue.rcq_chain, VAR_8);
 if (VAR_13 != VAR_6) {
  FUNC_0(VAR_9, 0,
     "Failed to allocate ll2 rcq chain\n");
  goto out;
 }

 FUNC_1(VAR_9, VAR_4,
     "Allocated LL2 Rxq [Type %08x] with 0x%08x buffers\n",
     VAR_10->input.conn_type,
     VAR_10->input.rx_num_desc);

out:
 return VAR_13;
}
