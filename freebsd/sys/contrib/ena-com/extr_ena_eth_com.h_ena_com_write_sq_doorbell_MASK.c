
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int max_entries_in_tx_burst; } ;
struct ena_com_io_sq {int entries_in_tx_burst_left; int qid; int db_addr; int bus; TYPE_1__ llq_info; int tail; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (struct ena_com_io_sq*) ;

__attribute__((used)) static inline int FUNC_3(struct ena_com_io_sq *VAR_0)
{
 u16 VAR_1 = VAR_0->tail;
 u16 VAR_2 = VAR_0->llq_info.max_entries_in_tx_burst;

 FUNC_1("write submission queue doorbell for queue: %d tail: %d\n",
      VAR_0->qid, VAR_1);

 FUNC_0(VAR_0->bus, VAR_1, VAR_0->db_addr);

 if (FUNC_2(VAR_0)) {
  FUNC_1("reset available entries in tx burst for queue %d to %d\n",
        VAR_0->qid, VAR_2);
  VAR_0->entries_in_tx_burst_left = VAR_2;
 }

 return 0;
}
