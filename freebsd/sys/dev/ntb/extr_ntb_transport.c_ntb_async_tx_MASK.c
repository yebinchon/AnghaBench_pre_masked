
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int tx_max_frame; int tx_index; int tx_pkts; void* tx_mw; } ;
struct ntb_queue_entry {int len; struct ntb_payload_header* x_hdr; } ;
struct ntb_payload_header {int ver; int len; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ntb_queue_entry*,void*) ;

__attribute__((used)) static void
FUNC_2(struct ntb_transport_qp *VAR_0, struct ntb_queue_entry *VAR_1)
{
 struct ntb_payload_header *VAR_2;
 void *VAR_3;

 VAR_3 = VAR_0->tx_mw + VAR_0->tx_max_frame * VAR_0->tx_index;
 VAR_2 = (struct ntb_payload_header *)((char *)VAR_3 + VAR_0->tx_max_frame -
     sizeof(struct ntb_payload_header));
 VAR_1->x_hdr = VAR_2;

 FUNC_0(VAR_1->len, &VAR_2->len);
 FUNC_0(VAR_0->tx_pkts, &VAR_2->ver);

 FUNC_1(VAR_1, VAR_3);
}
