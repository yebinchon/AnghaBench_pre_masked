
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc_otg_td {int tt_xactpos; scalar_t__ tt_scheduled; scalar_t__ errcnt; scalar_t__ state; void** channel; scalar_t__ did_nak; scalar_t__ got_short; scalar_t__ set_toggle; int alt_next; int short_pkt; int did_stall; scalar_t__ npkt; scalar_t__ error_stall; scalar_t__ error_any; scalar_t__ tx_bytes; int remainder; int offset; int pc; int func; struct dwc_otg_td* obj_next; } ;
struct dwc_otg_std_temp {int setup_alt_next; int short_pkt; int did_stall; int len; int offset; int pc; int func; struct dwc_otg_td* td_next; struct dwc_otg_td* td; } ;


 void* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct dwc_otg_std_temp *VAR_2)
{
 struct dwc_otg_td *VAR_3;


 VAR_3 = VAR_2->td_next;
 VAR_2->td = VAR_3;


 VAR_2->td_next = VAR_3->obj_next;


 VAR_3->func = VAR_2->func;
 VAR_3->pc = VAR_2->pc;
 VAR_3->offset = VAR_2->offset;
 VAR_3->remainder = VAR_2->len;
 VAR_3->tx_bytes = 0;
 VAR_3->error_any = 0;
 VAR_3->error_stall = 0;
 VAR_3->npkt = 0;
 VAR_3->did_stall = VAR_2->did_stall;
 VAR_3->short_pkt = VAR_2->short_pkt;
 VAR_3->alt_next = VAR_2->setup_alt_next;
 VAR_3->set_toggle = 0;
 VAR_3->got_short = 0;
 VAR_3->did_nak = 0;
 VAR_3->channel[0] = VAR_0;
 VAR_3->channel[1] = VAR_0;
 VAR_3->channel[2] = VAR_0;
 VAR_3->state = 0;
 VAR_3->errcnt = 0;
 VAR_3->tt_scheduled = 0;
 VAR_3->tt_xactpos = VAR_1;
}
