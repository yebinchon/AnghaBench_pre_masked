
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ena_com_llq_info {int desc_list_entry_size; } ;
struct TYPE_2__ {scalar_t__ pbuf_dev_addr; } ;
struct ena_com_io_sq {int tail; int q_depth; int phase; TYPE_1__ desc_addr; int entries_in_tx_burst_left; int qid; struct ena_com_llq_info llq_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *,int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct ena_com_io_sq*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static inline int FUNC_6(struct ena_com_io_sq *VAR_2,
           u8 *VAR_3)
{
 struct ena_com_llq_info *VAR_4 = &VAR_2->llq_info;

 u16 VAR_5;
 u32 VAR_6;

 VAR_5 = VAR_2->tail & (VAR_2->q_depth - 1);
 VAR_6 = VAR_5 * VAR_4->desc_list_entry_size;

 if (FUNC_3(VAR_2)) {
  if (FUNC_4(!VAR_2->entries_in_tx_burst_left)) {
   FUNC_2("Error: trying to send more packets than tx burst allows\n");
   return VAR_0;
  }

  VAR_2->entries_in_tx_burst_left--;
  FUNC_1("decreasing entries_in_tx_burst_left of queue %d to %d\n",
       VAR_2->qid, VAR_2->entries_in_tx_burst_left);
 }




 FUNC_5();


 FUNC_0(VAR_2->desc_addr.pbuf_dev_addr + VAR_6,
    VAR_3,
    VAR_4->desc_list_entry_size);

 VAR_2->tail++;


 if (FUNC_4((VAR_2->tail & (VAR_2->q_depth - 1)) == 0))
  VAR_2->phase ^= 1;

 return VAR_1;
}
