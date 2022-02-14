
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musbotg_td {int transfer_type; int hport; int haddr; int dev_addr; int channel; int alt_next; int short_pkt; int did_stall; scalar_t__ transaction_started; scalar_t__ error; int remainder; int offset; int pc; int func; struct musbotg_td* obj_next; } ;
struct musbotg_std_temp {int transfer_type; int hport; int haddr; int dev_addr; int channel; int setup_alt_next; int short_pkt; int did_stall; int len; int offset; int pc; int func; struct musbotg_td* td_next; struct musbotg_td* td; } ;



__attribute__((used)) static void
FUNC_0(struct musbotg_std_temp *VAR_0)
{
 struct musbotg_td *VAR_1;


 VAR_1 = VAR_0->td_next;
 VAR_0->td = VAR_1;


 VAR_0->td_next = VAR_1->obj_next;


 VAR_1->func = VAR_0->func;
 VAR_1->pc = VAR_0->pc;
 VAR_1->offset = VAR_0->offset;
 VAR_1->remainder = VAR_0->len;
 VAR_1->error = 0;
 VAR_1->transaction_started = 0;
 VAR_1->did_stall = VAR_0->did_stall;
 VAR_1->short_pkt = VAR_0->short_pkt;
 VAR_1->alt_next = VAR_0->setup_alt_next;
 VAR_1->channel = VAR_0->channel;
 VAR_1->dev_addr = VAR_0->dev_addr;
 VAR_1->haddr = VAR_0->haddr;
 VAR_1->hport = VAR_0->hport;
 VAR_1->transfer_type = VAR_0->transfer_type;
}
