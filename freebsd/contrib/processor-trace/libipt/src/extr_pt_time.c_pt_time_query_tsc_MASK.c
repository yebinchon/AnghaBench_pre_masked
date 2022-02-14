
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct pt_time {int have_tsc; int lost_cyc; int lost_mtc; int tsc; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(uint64_t *VAR_2, uint32_t *VAR_3,
        uint32_t *VAR_4, const struct pt_time *VAR_5)
{
 if (!VAR_2 || !VAR_5)
  return -VAR_0;

 *VAR_2 = VAR_5->tsc;

 if (VAR_3)
  *VAR_3 = VAR_5->lost_mtc;
 if (VAR_4)
  *VAR_4 = VAR_5->lost_cyc;

 if (!VAR_5->have_tsc)
  return -VAR_1;

 return 0;
}
