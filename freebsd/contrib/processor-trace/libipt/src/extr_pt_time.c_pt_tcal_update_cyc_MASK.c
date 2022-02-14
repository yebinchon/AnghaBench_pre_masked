
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_time_cal {int cyc_tsc; int cyc_mtc; } ;
struct pt_packet_cyc {scalar_t__ value; } ;
struct pt_config {int dummy; } ;


 int VAR_0 ;

int FUNC_0(struct pt_time_cal *VAR_1,
        const struct pt_packet_cyc *VAR_2,
        const struct pt_config *VAR_3)
{
 uint64_t VAR_4;

 (void) VAR_3;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_4 = VAR_2->value;
 VAR_1->cyc_mtc += VAR_4;
 VAR_1->cyc_tsc += VAR_4;

 return 0;
}
