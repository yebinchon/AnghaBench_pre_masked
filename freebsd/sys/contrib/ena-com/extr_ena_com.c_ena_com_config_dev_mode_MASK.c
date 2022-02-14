
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_llq_configurations {int dummy; } ;
struct ena_eth_io_tx_desc {int dummy; } ;
struct TYPE_2__ {int descs_num_before_header; int desc_list_entry_size; } ;
struct ena_com_dev {int tx_max_header_size; int tx_mem_queue_type; TYPE_1__ llq_info; } ;
struct ena_admin_feature_llq_desc {int max_llq_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ena_com_dev*,struct ena_admin_feature_llq_desc*,struct ena_llq_configurations*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct ena_com_dev *VAR_3,
       struct ena_admin_feature_llq_desc *VAR_4,
       struct ena_llq_configurations *VAR_5)
{
 int VAR_6;
 int VAR_7;

 if (!VAR_4->max_llq_num) {
  VAR_3->tx_mem_queue_type = VAR_1;
  return 0;
 }

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;


 VAR_7 = VAR_3->tx_max_header_size;
 VAR_7 += VAR_3->llq_info.descs_num_before_header *
  sizeof(struct ena_eth_io_tx_desc);

 if (FUNC_2(VAR_3->llq_info.desc_list_entry_size < VAR_7)) {
  FUNC_1("the size of the LLQ entry is smaller than needed\n");
  return VAR_2;
 }

 VAR_3->tx_mem_queue_type = VAR_0;

 return 0;
}
