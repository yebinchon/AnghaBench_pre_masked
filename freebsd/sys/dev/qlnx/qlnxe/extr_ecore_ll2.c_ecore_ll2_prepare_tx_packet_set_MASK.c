
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ecore_ll2_tx_queue {size_t cur_send_frag_num; struct ecore_ll2_tx_packet* cur_send_packet; int free_descq; } ;
struct ecore_ll2_tx_pkt_info {int first_frag_len; int first_frag; int num_of_bds; int cookie; } ;
struct ecore_ll2_tx_packet {TYPE_1__* bds_set; int notify_fw; int bd_used; int cookie; int list_entry; } ;
struct TYPE_2__ {int frag_len; int tx_frag; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct ecore_ll2_tx_queue *VAR_0,
         struct ecore_ll2_tx_packet *VAR_1,
         struct ecore_ll2_tx_pkt_info *VAR_2,
         u8 VAR_3)
{
 FUNC_0(&VAR_1->list_entry,
          &VAR_0->free_descq);
 VAR_1->cookie = VAR_2->cookie;
 VAR_1->bd_used = VAR_2->num_of_bds;
 VAR_1->notify_fw = VAR_3;
 VAR_0->cur_send_packet = VAR_1;
 VAR_0->cur_send_frag_num = 0;

 VAR_1->bds_set[VAR_0->cur_send_frag_num].tx_frag = VAR_2->first_frag;
 VAR_1->bds_set[VAR_0->cur_send_frag_num].frag_len = VAR_2->first_frag_len;
 VAR_0->cur_send_frag_num++;
}
