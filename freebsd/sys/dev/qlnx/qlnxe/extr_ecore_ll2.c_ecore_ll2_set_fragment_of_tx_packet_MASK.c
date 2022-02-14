
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct TYPE_4__ {size_t cur_send_frag_num; int lock; struct ecore_ll2_tx_packet* cur_send_packet; } ;
struct ecore_ll2_tx_packet {size_t bd_used; TYPE_2__ tx_queue; TYPE_1__* bds_set; } ;
struct ecore_ll2_info {size_t bd_used; TYPE_2__ tx_queue; TYPE_1__* bds_set; } ;
struct ecore_hwfn {int dummy; } ;
struct core_tx_bd {int nbytes; int addr; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int dma_addr_t ;
struct TYPE_3__ {size_t frag_len; int tx_frag; struct core_tx_bd* txq_bd; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (size_t) ;
 struct ecore_ll2_tx_packet* VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct ecore_ll2_tx_packet* FUNC_4 (struct ecore_hwfn*,int ) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ll2_tx_packet*) ;

enum _ecore_status_t FUNC_6(void *VAR_3,
        u8 VAR_4,
        dma_addr_t VAR_5,
        u16 VAR_6)
{
 struct ecore_ll2_tx_packet *VAR_7 = VAR_2;
 struct ecore_hwfn *VAR_8 = (struct ecore_hwfn *)VAR_3;
 struct ecore_ll2_info *VAR_9 = VAR_2;
 u16 VAR_10 = 0;
 struct core_tx_bd *VAR_11;
 unsigned long VAR_12;

 VAR_9 = FUNC_4(VAR_8, VAR_4);
 if (VAR_9 == VAR_2)
  return VAR_0;

 if (!VAR_9->tx_queue.cur_send_packet)
  return VAR_0;

 VAR_7 = VAR_9->tx_queue.cur_send_packet;
 VAR_10 = VAR_9->tx_queue.cur_send_frag_num;

 if (VAR_10 >= VAR_7->bd_used)
  return VAR_0;


 VAR_11 = VAR_7->bds_set[VAR_10].txq_bd;
 FUNC_0(VAR_11->addr, VAR_5);
 VAR_11->nbytes = FUNC_1(VAR_6);
 VAR_7->bds_set[VAR_10].tx_frag = VAR_5;
 VAR_7->bds_set[VAR_10].frag_len = VAR_6;

 VAR_9->tx_queue.cur_send_frag_num++;

 FUNC_2(&VAR_9->tx_queue.lock, VAR_12);
 FUNC_5(VAR_8, VAR_9);
 FUNC_3(&VAR_9->tx_queue.lock, VAR_12);

 return VAR_1;
}
