
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccb_scsiio {int dummy; } ;
struct TYPE_2__ {scalar_t__ targ_descr; } ;
struct ccb_accept_tio {int init_id; TYPE_1__ ccb_h; } ;
struct atio_descr {int cdb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,struct ccb_scsiio*,int ,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct ccb_accept_tio *VAR_2, struct ccb_scsiio *VAR_3)
{
 if (VAR_1) {
  struct atio_descr *VAR_4;

  VAR_4 = (struct atio_descr *)VAR_2->ccb_h.targ_descr;
  FUNC_0(VAR_4->cdb, "Sending ill req to %u: ", VAR_2->init_id);
 }

 FUNC_1(VAR_2->init_id, VAR_3, VAR_0,
            0x24, 0);
 return (0);
}
