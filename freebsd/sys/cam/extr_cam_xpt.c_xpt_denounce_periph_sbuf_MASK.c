
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uintmax_t ;
struct xpt_proto {TYPE_4__* ops; } ;
struct sbuf {int dummy; } ;
struct cam_periph {int unit_number; int periph_name; struct cam_path* path; } ;
struct cam_path {TYPE_6__* device; TYPE_3__* target; TYPE_2__* bus; } ;
struct TYPE_12__ {scalar_t__ serial_num_len; int serial_num; int protocol; scalar_t__ lun_id; } ;
struct TYPE_11__ {scalar_t__ announce_nosbuf; } ;
struct TYPE_10__ {int (* denounce_sbuf ) (TYPE_6__*,struct sbuf*) ;} ;
struct TYPE_9__ {int target_id; } ;
struct TYPE_8__ {int path_id; TYPE_1__* sim; } ;
struct TYPE_7__ {int bus_id; int unit_number; int sim_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct cam_periph*,int ) ;
 int FUNC_1 (struct sbuf*,char*,...) ;
 int FUNC_2 (TYPE_6__*,struct sbuf*) ;
 int FUNC_3 (struct cam_periph*) ;
 struct xpt_proto* FUNC_4 (int ) ;
 TYPE_5__ VAR_1 ;

void
FUNC_5(struct cam_periph *VAR_2, struct sbuf *VAR_3)
{
 struct cam_path *VAR_4 = VAR_2->path;
 struct xpt_proto *VAR_5;

 FUNC_0(VAR_2, VAR_0);


 if (VAR_1.announce_nosbuf != 0) {
  FUNC_3(VAR_2);
  return;
 }
 VAR_5 = FUNC_4(VAR_4->device->protocol);
 if ((VAR_5 != ((void*)0)) && (VAR_5->ops->denounce_sbuf == ((void*)0))) {
  FUNC_3(VAR_2);
  return;
 }

 FUNC_1(VAR_3, "%s%d at %s%d bus %d scbus%d target %d lun %jx\n",
     VAR_2->periph_name, VAR_2->unit_number,
     VAR_4->bus->sim->sim_name,
     VAR_4->bus->sim->unit_number,
     VAR_4->bus->sim->bus_id,
     VAR_4->bus->path_id,
     VAR_4->target->target_id,
     (uintmax_t)VAR_4->device->lun_id);
 FUNC_1(VAR_3, "%s%d: ", VAR_2->periph_name, VAR_2->unit_number);

 if (VAR_5)
  VAR_5->ops->denounce_sbuf(VAR_4->device, VAR_3);
 else
  FUNC_1(VAR_3, "%s%d: Unknown protocol device %d\n",
      VAR_2->periph_name, VAR_2->unit_number,
      VAR_4->device->protocol);
 if (VAR_4->device->serial_num_len > 0)
  FUNC_1(VAR_3, " s/n %.60s", VAR_4->device->serial_num);
 FUNC_1(VAR_3, " detached\n");
}
