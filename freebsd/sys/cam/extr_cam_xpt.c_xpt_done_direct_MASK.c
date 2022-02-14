
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int periph_data; } ;
struct TYPE_4__ {int func_code; TYPE_1__ qos; int status; int path; } ;
union ccb {TYPE_2__ ccb_h; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(union ccb *VAR_2)
{

 FUNC_0(VAR_2->ccb_h.path, VAR_0,
     ("xpt_done_direct: status %#x\n", VAR_2->ccb_h.status));
 if ((VAR_2->ccb_h.func_code & VAR_1) == 0)
  return;


 VAR_2->ccb_h.qos.periph_data = FUNC_1(VAR_2->ccb_h.qos.periph_data);
 FUNC_2(&VAR_2->ccb_h);
}
