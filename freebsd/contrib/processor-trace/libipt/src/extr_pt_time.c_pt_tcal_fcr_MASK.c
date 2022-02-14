
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_time_cal {int fcr; } ;


 int FUNC_0 (struct pt_time_cal const*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(uint64_t *VAR_2, const struct pt_time_cal *VAR_3)
{
 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 if (!FUNC_0(VAR_3))
  return -VAR_1;

 *VAR_2 = VAR_3->fcr;

 return 0;
}
