
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saf1761_otg_td {int channel; int alt_next; int short_pkt; int did_stall; scalar_t__ set_toggle; scalar_t__ error_stall; scalar_t__ error_any; int remainder; int offset; int pc; int func; struct saf1761_otg_td* obj_next; } ;
struct saf1761_otg_std_temp {int setup_alt_next; int short_pkt; int did_stall; int len; int offset; int pc; int func; struct saf1761_otg_td* td_next; struct saf1761_otg_td* td; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct saf1761_otg_std_temp *VAR_1)
{
 struct saf1761_otg_td *VAR_2;


 VAR_2 = VAR_1->td_next;
 VAR_1->td = VAR_2;


 VAR_1->td_next = VAR_2->obj_next;


 VAR_2->func = VAR_1->func;
 VAR_2->pc = VAR_1->pc;
 VAR_2->offset = VAR_1->offset;
 VAR_2->remainder = VAR_1->len;
 VAR_2->error_any = 0;
 VAR_2->error_stall = 0;
 VAR_2->set_toggle = 0;
 VAR_2->did_stall = VAR_1->did_stall;
 VAR_2->short_pkt = VAR_1->short_pkt;
 VAR_2->alt_next = VAR_1->setup_alt_next;
 VAR_2->channel = VAR_0;
}
