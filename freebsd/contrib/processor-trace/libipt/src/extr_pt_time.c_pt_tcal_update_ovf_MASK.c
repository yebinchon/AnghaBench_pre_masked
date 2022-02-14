
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_time_cal {unsigned long long tsc; unsigned long long cyc_tsc; unsigned long long cyc_mtc; scalar_t__ have_mtc; scalar_t__ ctc; } ;
struct pt_config {int dummy; } ;


 int VAR_0 ;

int FUNC_0(struct pt_time_cal *VAR_1,
         const struct pt_config *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_1->tsc = 0ull;
 VAR_1->cyc_tsc = 0ull;
 VAR_1->cyc_mtc = 0ull;
 VAR_1->ctc = 0;
 VAR_1->have_mtc = 0;

 return 0;
}
