
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int func_code; union ccb* targ_descr; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct ctio_descr {union ccb* buf; } ;





 int FUNC_0 (union ccb*) ;
 int VAR_0 ;

void
FUNC_1(union ccb *VAR_1)
{
 switch (VAR_1->ccb_h.func_code) {
 case 129:
 {
  struct ctio_descr *VAR_2;

  VAR_2 = (struct ctio_descr *)VAR_1->ccb_h.targ_descr;
  FUNC_0(VAR_2->buf);
  VAR_0--;

 }
 case 130:
  FUNC_0(VAR_1->ccb_h.targ_descr);

 case 128:
 default:
  FUNC_0(VAR_1);
  break;
 }
}
