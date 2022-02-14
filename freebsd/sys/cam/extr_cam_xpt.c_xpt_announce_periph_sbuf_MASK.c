
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uintmax_t ;
struct xpt_proto {TYPE_3__* ops; } ;
struct sbuf {int dummy; } ;
struct cam_periph {int unit_number; int periph_name; int flags; struct cam_path* path; } ;
struct cam_path {TYPE_8__* device; TYPE_6__* bus; TYPE_2__* target; } ;
struct TYPE_16__ {char* protocol; scalar_t__ serial_num_len; char* serial_num; int inq_flags; int flags; scalar_t__ lun_id; } ;
struct TYPE_15__ {scalar_t__ announce_nosbuf; } ;
struct TYPE_14__ {TYPE_5__* xport; int path_id; TYPE_1__* sim; } ;
struct TYPE_13__ {TYPE_4__* ops; } ;
struct TYPE_12__ {int (* announce_sbuf ) (struct cam_periph*,struct sbuf*) ;} ;
struct TYPE_11__ {int (* announce_sbuf ) (TYPE_8__*,struct sbuf*) ;} ;
struct TYPE_10__ {int target_id; } ;
struct TYPE_9__ {int bus_id; int unit_number; int sim_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cam_periph*,int ) ;
 int FUNC_1 (struct sbuf*,char*,int ,int ,...) ;
 int FUNC_2 (TYPE_8__*,struct sbuf*) ;
 int FUNC_3 (struct cam_periph*,struct sbuf*) ;
 int FUNC_4 (struct cam_periph*,char*) ;
 struct xpt_proto* FUNC_5 (char*) ;
 TYPE_7__ VAR_4 ;

void
FUNC_6(struct cam_periph *VAR_5, struct sbuf *VAR_6,
    char *VAR_7)
{
 struct cam_path *VAR_8 = VAR_5->path;
 struct xpt_proto *VAR_9;

 FUNC_0(VAR_5, VAR_2);
 VAR_5->flags |= VAR_1;


 if (VAR_4.announce_nosbuf != 0) {
  FUNC_4(VAR_5, VAR_7);
  return;
 }
 VAR_9 = FUNC_5(VAR_8->device->protocol);
 if (((VAR_9 != ((void*)0)) && (VAR_9->ops->announce_sbuf == ((void*)0))) ||
     (VAR_8->bus->xport->ops->announce_sbuf == ((void*)0))) {
  FUNC_4(VAR_5, VAR_7);
  return;
 }

 FUNC_1(VAR_6, "%s%d at %s%d bus %d scbus%d target %d lun %jx\n",
     VAR_5->periph_name, VAR_5->unit_number,
     VAR_8->bus->sim->sim_name,
     VAR_8->bus->sim->unit_number,
     VAR_8->bus->sim->bus_id,
     VAR_8->bus->path_id,
     VAR_8->target->target_id,
     (uintmax_t)VAR_8->device->lun_id);
 FUNC_1(VAR_6, "%s%d: ", VAR_5->periph_name, VAR_5->unit_number);

 if (VAR_9)
  VAR_9->ops->announce_sbuf(VAR_8->device, VAR_6);
 else
  FUNC_1(VAR_6, "%s%d: Unknown protocol device %d\n",
      VAR_5->periph_name, VAR_5->unit_number,
      VAR_8->device->protocol);
 if (VAR_8->device->serial_num_len > 0) {

  FUNC_1(VAR_6, "%s%d: Serial Number %.60s\n",
      VAR_5->periph_name, VAR_5->unit_number,
      VAR_8->device->serial_num);
 }

 VAR_8->bus->xport->ops->announce_sbuf(VAR_5, VAR_6);

 if (VAR_8->device->inq_flags & VAR_3
  || VAR_8->device->flags & VAR_0) {
  FUNC_1(VAR_6, "%s%d: Command Queueing enabled\n",
      VAR_5->periph_name, VAR_5->unit_number);
 }

 if (VAR_7 != ((void*)0))
  FUNC_1(VAR_6, "%s%d: %s\n", VAR_5->periph_name,
      VAR_5->unit_number, VAR_7);
}
