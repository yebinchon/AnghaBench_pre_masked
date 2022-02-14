
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_time_cal {int check_skl168; } ;
struct TYPE_2__ {scalar_t__ skl168; } ;
struct pt_config {TYPE_1__ errata; } ;


 int VAR_0 ;

int FUNC_0(struct pt_time_cal *VAR_1,
         const struct pt_config *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 if (VAR_2->errata.skl168)
  VAR_1->check_skl168 = 1;

 return 0;
}
