
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_time_cal {unsigned long long cyc_tsc; int tsc; } ;
struct pt_packet_tsc {int tsc; } ;
struct pt_config {int dummy; } ;


 int VAR_0 ;

int FUNC_0(struct pt_time_cal *VAR_1,
        const struct pt_packet_tsc *VAR_2,
        const struct pt_config *VAR_3)
{
 (void) VAR_3;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;





 VAR_1->tsc = VAR_2->tsc;
 VAR_1->cyc_tsc = 0ull;

 return 0;
}
