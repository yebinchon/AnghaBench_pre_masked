
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_vale_newif {int nr_mem_id; int nr_rx_rings; int nr_tx_rings; int nr_rx_slots; int nr_tx_slots; } ;
struct nmreq_vale_list {int nr_port_idx; int nr_bridge_idx; } ;
struct nmreq_register {int dummy; } ;
struct nmreq_vale_attach {struct nmreq_register reg; } ;
struct nmreq_port_info_get {int nr_mem_id; int nr_rx_rings; int nr_tx_rings; int nr_rx_slots; int nr_tx_slots; int nr_memsize; } ;
struct nmreq_port_hdr {int nr_hdr_len; } ;
struct nmreq_header {int nr_reqtype; int nr_body; int nr_name; } ;
struct nmreq {int nr_arg2; int nr_rx_rings; int nr_tx_rings; int nr_rx_slots; int nr_tx_slots; int nr_arg1; int nr_name; int nr_memsize; } ;
 int FUNC_0 (struct nmreq_register*,struct nmreq*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct nmreq_header *VAR_0, struct nmreq *VAR_1)
{
 int VAR_2 = 0;



 switch (VAR_0->nr_reqtype) {
 case 135: {
  struct nmreq_register *VAR_3 =
   (struct nmreq_register *)(uintptr_t)VAR_0->nr_body;
  FUNC_0(VAR_3, VAR_1);
  break;
 }
 case 136: {
  struct nmreq_port_info_get *VAR_4 =
   (struct nmreq_port_info_get *)(uintptr_t)VAR_0->nr_body;
  VAR_1->nr_memsize = VAR_4->nr_memsize;
  VAR_1->nr_tx_slots = VAR_4->nr_tx_slots;
  VAR_1->nr_rx_slots = VAR_4->nr_rx_slots;
  VAR_1->nr_tx_rings = VAR_4->nr_tx_rings;
  VAR_1->nr_rx_rings = VAR_4->nr_rx_rings;
  VAR_1->nr_arg2 = VAR_4->nr_mem_id;
  break;
 }
 case 134: {
  struct nmreq_vale_attach *VAR_5 =
   (struct nmreq_vale_attach *)(uintptr_t)VAR_0->nr_body;
  FUNC_0(&VAR_5->reg, VAR_1);
  break;
 }
 case 132: {
  break;
 }
 case 131: {
  struct nmreq_vale_list *VAR_6 =
   (struct nmreq_vale_list *)(uintptr_t)VAR_0->nr_body;
  FUNC_1(VAR_1->nr_name, VAR_0->nr_name, sizeof(VAR_1->nr_name));
  VAR_1->nr_arg1 = VAR_6->nr_bridge_idx;
  VAR_1->nr_arg2 = VAR_6->nr_port_idx;
  break;
 }
 case 137:
 case 138: {
  struct nmreq_port_hdr *VAR_7 =
   (struct nmreq_port_hdr *)(uintptr_t)VAR_0->nr_body;
  VAR_1->nr_arg1 = VAR_7->nr_hdr_len;
  break;
 }
 case 130: {
  struct nmreq_vale_newif *VAR_8 =
   (struct nmreq_vale_newif *)(uintptr_t)VAR_0->nr_body;
  VAR_1->nr_tx_slots = VAR_8->nr_tx_slots;
  VAR_1->nr_rx_slots = VAR_8->nr_rx_slots;
  VAR_1->nr_tx_rings = VAR_8->nr_tx_rings;
  VAR_1->nr_rx_rings = VAR_8->nr_rx_rings;
  VAR_1->nr_arg2 = VAR_8->nr_mem_id;
  break;
 }
 case 133:
 case 128:
 case 129: {
  break;
 }
 }

 return VAR_2;
}
