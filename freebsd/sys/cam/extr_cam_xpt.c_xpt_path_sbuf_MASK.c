
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uintmax_t ;
struct sbuf {int dummy; } ;
struct cam_path {TYPE_5__* device; TYPE_4__* target; TYPE_3__* bus; TYPE_1__* periph; } ;
struct TYPE_10__ {scalar_t__ lun_id; } ;
struct TYPE_9__ {int target_id; } ;
struct TYPE_8__ {TYPE_2__* sim; } ;
struct TYPE_7__ {int bus_id; int unit_number; int sim_name; } ;
struct TYPE_6__ {int unit_number; int periph_name; } ;


 int FUNC_0 (struct sbuf*) ;
 int FUNC_1 (struct sbuf*,char*,...) ;

int
FUNC_2(struct cam_path *VAR_0, struct sbuf *VAR_1)
{

 if (VAR_0 == ((void*)0))
  FUNC_1(VAR_1, "(nopath): ");
 else {
  if (VAR_0->periph != ((void*)0))
   FUNC_1(VAR_1, "(%s%d:", VAR_0->periph->periph_name,
        VAR_0->periph->unit_number);
  else
   FUNC_1(VAR_1, "(noperiph:");

  if (VAR_0->bus != ((void*)0))
   FUNC_1(VAR_1, "%s%d:%d:", VAR_0->bus->sim->sim_name,
        VAR_0->bus->sim->unit_number,
        VAR_0->bus->sim->bus_id);
  else
   FUNC_1(VAR_1, "nobus:");

  if (VAR_0->target != ((void*)0))
   FUNC_1(VAR_1, "%d:", VAR_0->target->target_id);
  else
   FUNC_1(VAR_1, "X:");

  if (VAR_0->device != ((void*)0))
   FUNC_1(VAR_1, "%jx): ",
       (uintmax_t)VAR_0->device->lun_id);
  else
   FUNC_1(VAR_1, "X): ");
 }

 return(FUNC_0(VAR_1));
}
