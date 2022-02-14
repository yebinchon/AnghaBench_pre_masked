
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t target_id; size_t target_lun; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef size_t uint32_t ;
struct TYPE_10__ {size_t tag; int status; } ;
typedef TYPE_2__ rcb_t ;
struct TYPE_11__ {int taglist; TYPE_2__* rcb; TYPE_4__*** device_list; } ;
typedef TYPE_3__ pqisrc_softstate_t ;
struct TYPE_12__ {int reset_in_progress; } ;
typedef TYPE_4__ pqi_scsi_dev_t ;


 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,TYPE_2__*,int ,int ) ;

__attribute__((used)) static int
FUNC_5( pqisrc_softstate_t *VAR_4, union ccb *VAR_5)
{
 pqi_scsi_dev_t *VAR_6 = VAR_4->device_list[VAR_5->ccb_h.target_id][VAR_5->ccb_h.target_lun];
 rcb_t *VAR_7 = ((void*)0);
 uint32_t VAR_8 = 0;
 int VAR_9 = VAR_1;

 FUNC_1("IN\n");

 if (VAR_6 == ((void*)0)) {
  FUNC_0("bad target t%d\n", VAR_5->ccb_h.target_id);
  return (-1);
 }

 VAR_8 = FUNC_2(&VAR_4->taglist);
 VAR_7 = &VAR_4->rcb[VAR_8];
 VAR_7->tag = VAR_8;

 VAR_6->reset_in_progress = 1;
 VAR_9 = FUNC_4(VAR_4, VAR_6, VAR_7, 0,
  VAR_3);
 if (VAR_1 == VAR_9) {
  VAR_9 = VAR_7->status;
 }
 VAR_6->reset_in_progress = 0;
 FUNC_3(&VAR_4->taglist,VAR_7->tag);

 FUNC_1("OUT rval = %d\n", VAR_9);

 return ((VAR_9 == VAR_2) ?
  VAR_1 : VAR_0);
}
