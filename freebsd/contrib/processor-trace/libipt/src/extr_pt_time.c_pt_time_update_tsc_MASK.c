
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_time {int have_tsc; unsigned long long fc; scalar_t__ lost_cyc; scalar_t__ lost_mtc; scalar_t__ ctc; int base; int tsc; scalar_t__ have_mtc; scalar_t__ have_tma; } ;
struct pt_packet_tsc {int tsc; } ;
struct pt_config {int dummy; } ;


 int VAR_0 ;

int FUNC_0(struct pt_time *VAR_1,
         const struct pt_packet_tsc *VAR_2,
         const struct pt_config *VAR_3)
{
 (void) VAR_3;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_1->have_tsc = 1;
 VAR_1->have_tma = 0;
 VAR_1->have_mtc = 0;
 VAR_1->tsc = VAR_1->base = VAR_2->tsc;
 VAR_1->ctc = 0;
 VAR_1->fc = 0ull;


 VAR_1->lost_mtc = 0;
 VAR_1->lost_cyc = 0;

 return 0;
}
