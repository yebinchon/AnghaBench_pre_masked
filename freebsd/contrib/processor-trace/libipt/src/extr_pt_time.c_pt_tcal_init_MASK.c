
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_time_cal {int min_fcr; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_time_cal*,int ,int) ;

void FUNC_1(struct pt_time_cal *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->min_fcr = VAR_0;
}
