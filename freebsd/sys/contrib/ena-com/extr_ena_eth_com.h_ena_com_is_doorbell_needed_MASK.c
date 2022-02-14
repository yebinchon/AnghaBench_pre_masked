
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ena_com_tx_ctx {scalar_t__ num_bufs; } ;
struct ena_com_llq_info {scalar_t__ descs_num_before_header; int descs_per_entry; } ;
struct ena_com_io_sq {int entries_in_tx_burst_left; int qid; struct ena_com_llq_info llq_info; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (struct ena_com_io_sq*,struct ena_com_tx_ctx*) ;
 int FUNC_2 (char*,int ,scalar_t__,int) ;
 int FUNC_3 (struct ena_com_io_sq*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline bool FUNC_5(struct ena_com_io_sq *VAR_0,
           struct ena_com_tx_ctx *VAR_1)
{
 struct ena_com_llq_info *VAR_2;
 int VAR_3;
 int VAR_4 = 1;
 u16 VAR_5;

 if (!FUNC_3(VAR_0))
  return 0;

 VAR_2 = &VAR_0->llq_info;
 VAR_5 = VAR_1->num_bufs;

 if (FUNC_4(FUNC_1(VAR_0, VAR_1)))
  ++VAR_5;

 if (VAR_5 > VAR_2->descs_num_before_header) {
  VAR_3 = VAR_5 - VAR_2->descs_num_before_header;
  VAR_4 += FUNC_0(VAR_3,
         VAR_2->descs_per_entry);
 }

 FUNC_2("queue: %d num_descs: %d num_entries_needed: %d\n",
      VAR_0->qid, VAR_5, VAR_4);

 return VAR_4 > VAR_0->entries_in_tx_burst_left;
}
