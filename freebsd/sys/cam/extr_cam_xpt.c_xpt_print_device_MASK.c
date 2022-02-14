
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct cam_ed {TYPE_1__* sim; scalar_t__ lun_id; TYPE_2__* target; } ;
struct TYPE_4__ {int target_id; } ;
struct TYPE_3__ {char* sim_name; int unit_number; int bus_id; } ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(struct cam_ed *VAR_0)
{

 if (VAR_0 == ((void*)0))
  FUNC_0("(nopath): ");
 else {
  FUNC_0("(noperiph:%s%d:%d:%d:%jx): ", VAR_0->sim->sim_name,
         VAR_0->sim->unit_number,
         VAR_0->sim->bus_id,
         VAR_0->target->target_id,
         (uintmax_t)VAR_0->lun_id);
 }
}
