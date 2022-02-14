
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uss820dci_td {int alt_next; int short_pkt; int did_stall; scalar_t__ did_enable; scalar_t__ error; int remainder; int offset; int pc; int func; struct uss820dci_td* obj_next; } ;
struct uss820_std_temp {int setup_alt_next; int short_pkt; int did_stall; int len; int offset; int pc; int func; struct uss820dci_td* td_next; struct uss820dci_td* td; } ;



__attribute__((used)) static void
FUNC_0(struct uss820_std_temp *VAR_0)
{
 struct uss820dci_td *VAR_1;


 VAR_1 = VAR_0->td_next;
 VAR_0->td = VAR_1;


 VAR_0->td_next = VAR_1->obj_next;


 VAR_1->func = VAR_0->func;
 VAR_1->pc = VAR_0->pc;
 VAR_1->offset = VAR_0->offset;
 VAR_1->remainder = VAR_0->len;
 VAR_1->error = 0;
 VAR_1->did_enable = 0;
 VAR_1->did_stall = VAR_0->did_stall;
 VAR_1->short_pkt = VAR_0->short_pkt;
 VAR_1->alt_next = VAR_0->setup_alt_next;
}
