
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int u_int32_t ;
struct pqisrc_softstate {TYPE_2__*** device_list; } ;
struct TYPE_3__ {size_t target_id; size_t target_lun; } ;
struct ccb_getdev {TYPE_1__ ccb_h; } ;
struct cam_path {int dummy; } ;
struct TYPE_4__ {int queue_depth; } ;
typedef TYPE_2__ pqi_scsi_dev_t ;



 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct cam_path*,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, u_int32_t VAR_2,
  struct cam_path *VAR_3, void *VAR_4)
{
 struct pqisrc_softstate *VAR_5;
 VAR_5 = (struct pqisrc_softstate*)VAR_1;

 FUNC_0("IN\n");

 switch (VAR_2) {
  case 128:
  {
   struct ccb_getdev *VAR_6;
   VAR_6 = (struct ccb_getdev *)VAR_4;
   if (VAR_6 == ((void*)0)) {
    break;
   }
   uint32_t VAR_7 = VAR_6->ccb_h.target_id;

   if (VAR_7 <= (VAR_0 - 1)) {
    if (VAR_5 != ((void*)0)) {
     pqi_scsi_dev_t *VAR_8 = VAR_5->device_list[VAR_7][VAR_6->ccb_h.target_lun];
     FUNC_1(VAR_3,
       VAR_8->queue_depth);
    }
   }
   break;
  }
  default:
   break;
 }

 FUNC_0("OUT\n");
}
