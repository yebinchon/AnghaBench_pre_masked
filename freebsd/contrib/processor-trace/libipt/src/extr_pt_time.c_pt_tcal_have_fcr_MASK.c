
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_time_cal {scalar_t__ min_fcr; scalar_t__ max_fcr; } ;



__attribute__((used)) static int FUNC_0(const struct pt_time_cal *VAR_0)
{
 if (!VAR_0)
  return 0;

 return (VAR_0->min_fcr <= VAR_0->max_fcr);
}
