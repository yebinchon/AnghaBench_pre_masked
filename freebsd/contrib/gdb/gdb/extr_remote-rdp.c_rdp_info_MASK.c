
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int step_info; int target_info; int can_step; int rdi_level; int model_info; int break_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (char*,int ,int ,int*,...) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  FUNC_0 ("bw-S-W-Z", VAR_0, VAR_2,
     &VAR_5.step_info);
  FUNC_0 ("bw-S-W-Z", VAR_0, VAR_1,
     &VAR_5.break_info);
  FUNC_0 ("bw-S-WW-Z", VAR_0, VAR_4,
     &VAR_5.target_info,
     &VAR_5.model_info);

  VAR_5.can_step = VAR_5.step_info & VAR_3;

  VAR_5.rdi_level = (VAR_5.target_info >> 5) & 3;
}
