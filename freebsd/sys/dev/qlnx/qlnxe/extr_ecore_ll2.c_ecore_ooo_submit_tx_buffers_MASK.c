
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
typedef int tx_pkt ;
struct ecore_ooo_buffer {int packet_length; int vlan; scalar_t__ placement_offset; scalar_t__ rx_buffer_phys_addr; } ;
struct ecore_ll2_tx_pkt_info {int num_of_bds; int tx_dest; struct ecore_ooo_buffer* cookie; int first_frag_len; scalar_t__ first_frag; scalar_t__ l4_hdr_offset_w; scalar_t__ bd_flags; int vlan; } ;
struct ecore_ll2_info {int my_id; scalar_t__ tx_dest; } ;
struct ecore_hwfn {int p_ooo_info; } ;
typedef enum ecore_ll2_tx_dest { ____Placeholder_ecore_ll2_tx_dest } ecore_ll2_tx_dest ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_ll2_tx_pkt_info*,int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct ecore_hwfn*,int ,struct ecore_ll2_tx_pkt_info*,int) ;
 struct ecore_ooo_buffer* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct ecore_ooo_buffer*,int) ;

__attribute__((used)) static void
FUNC_5(struct ecore_hwfn *VAR_3,
       struct ecore_ll2_info *VAR_4)
{
 struct ecore_ll2_tx_pkt_info VAR_5;
 struct ecore_ooo_buffer *VAR_6;
 dma_addr_t VAR_7;
 u16 VAR_8;
 u8 VAR_9;
 enum _ecore_status_t VAR_10;


 while ((VAR_6 = FUNC_3(VAR_3->p_ooo_info))) {
  VAR_8 = 0;
  VAR_9 = 0;

  VAR_7 = VAR_6->rx_buffer_phys_addr +
        VAR_6->placement_offset;
  FUNC_1(VAR_9, VAR_0, 1);
  FUNC_1(VAR_9, VAR_1, 1);

  FUNC_0(&VAR_5, sizeof(VAR_5));
  VAR_5.num_of_bds = 1;
  VAR_5.vlan = VAR_6->vlan;
  VAR_5.bd_flags = VAR_9;
  VAR_5.l4_hdr_offset_w = VAR_8;
  VAR_5.tx_dest = (enum ecore_ll2_tx_dest)VAR_4->tx_dest;
  VAR_5.first_frag = VAR_7;
  VAR_5.first_frag_len = VAR_6->packet_length;
  VAR_5.cookie = VAR_6;

  VAR_10 = FUNC_2(VAR_3, VAR_4->my_id,
       &VAR_5, 1);
  if (VAR_10 != VAR_2) {
   FUNC_4(VAR_3->p_ooo_info,
         VAR_6, 0);
   break;
  }
 }
}
