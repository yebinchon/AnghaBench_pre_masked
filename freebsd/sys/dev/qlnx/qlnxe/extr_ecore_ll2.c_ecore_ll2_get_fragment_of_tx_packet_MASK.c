
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct ecore_ll2_tx_packet {scalar_t__ bd_used; TYPE_1__* bds_set; } ;
struct TYPE_4__ {scalar_t__ cur_completing_bd_idx; int b_completing_packet; struct ecore_ll2_tx_packet cur_completing_packet; } ;
struct ecore_ll2_info {TYPE_2__ tx_queue; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int dma_addr_t ;
struct TYPE_3__ {int tx_frag; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ecore_ll2_info* VAR_2 ;
 struct ecore_ll2_info* FUNC_0 (struct ecore_hwfn*,int ) ;

enum _ecore_status_t
FUNC_1(struct ecore_hwfn *VAR_3,
        u8 VAR_4,
        dma_addr_t *VAR_5,
        bool *VAR_6)
{
 struct ecore_ll2_tx_packet *VAR_7;
 struct ecore_ll2_info *VAR_8;
 u16 VAR_9 = 0;

 VAR_8 = FUNC_0(VAR_3, VAR_4);
 if (VAR_8 == VAR_2)
  return VAR_0;
 VAR_7 = &VAR_8->tx_queue.cur_completing_packet;

 if (!VAR_8->tx_queue.b_completing_packet || !VAR_5)
  return VAR_0;

 if (VAR_8->tx_queue.cur_completing_bd_idx == VAR_7->bd_used)
  return VAR_0;


 VAR_9 = VAR_8->tx_queue.cur_completing_bd_idx++;
 *VAR_5 = VAR_7->bds_set[VAR_9].tx_frag;
 if (VAR_6)
  *VAR_6 = VAR_7->bd_used ==
       VAR_8->tx_queue.cur_completing_bd_idx;

 return VAR_1;
}
