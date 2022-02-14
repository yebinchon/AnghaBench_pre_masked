
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_time_cal {scalar_t__ min_fcr; scalar_t__ max_fcr; scalar_t__ fcr; } ;


 int VAR_0 ;

int FUNC_0(struct pt_time_cal *VAR_1, uint64_t VAR_2)
{
 if (!VAR_1)
  return -VAR_0;

 VAR_1->fcr = VAR_2;

 if (VAR_2 < VAR_1->min_fcr)
  VAR_1->min_fcr = VAR_2;

 if (VAR_2 > VAR_1->max_fcr)
  VAR_1->max_fcr = VAR_2;

 return 0;
}
