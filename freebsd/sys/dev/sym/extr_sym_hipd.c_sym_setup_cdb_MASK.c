
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ cdb_bytes; scalar_t__ cdb_ptr; } ;
struct ccb_hdr {int flags; } ;
struct ccb_scsiio {int cdb_len; TYPE_1__ cdb_io; struct ccb_hdr ccb_h; } ;
typedef int hcb_p ;
typedef TYPE_4__* ccb_p ;
struct TYPE_8__ {void* size; void* addr; } ;
struct TYPE_9__ {TYPE_2__ cmd; } ;
struct TYPE_10__ {TYPE_3__ phys; int cdb_buf; int cam_ccb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int * VAR_4 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(hcb_p VAR_5, struct ccb_scsiio *VAR_6, ccb_p VAR_7)
{
 struct ccb_hdr *VAR_8;
 u32 VAR_9;
 int VAR_10;

 FUNC_1(VAR_3);

 VAR_8 = &VAR_6->ccb_h;




 if (VAR_6->cdb_len > sizeof(VAR_7->cdb_buf)) {
  FUNC_4(VAR_7->cam_ccb, VAR_2);
  return -1;
 }
 VAR_10 = VAR_6->cdb_len;

 if (VAR_8->flags & VAR_1) {

  if (!(VAR_8->flags & VAR_0)) {

   FUNC_2(VAR_6->cdb_io.cdb_ptr, VAR_7->cdb_buf, VAR_10);
   VAR_9 = FUNC_0 (VAR_7, VAR_4[0]);
  } else {




   FUNC_4(VAR_7->cam_ccb, VAR_2);
   return -1;

  }
 } else {

  FUNC_2(VAR_6->cdb_io.cdb_bytes, VAR_7->cdb_buf, VAR_10);
  VAR_9 = FUNC_0 (VAR_7, VAR_4[0]);
 }

 VAR_7->phys.cmd.addr = FUNC_3(VAR_9);
 VAR_7->phys.cmd.size = FUNC_3(VAR_10);

 return 0;
}
