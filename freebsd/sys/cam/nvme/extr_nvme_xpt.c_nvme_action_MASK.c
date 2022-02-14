
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int func_code; TYPE_3__* path; } ;
union ccb {TYPE_2__ crcn; TYPE_1__ ccb_h; } ;
struct TYPE_7__ {int periph; } ;


 int FUNC_0 (TYPE_3__*,int ,char*) ;
 int VAR_0 ;




 int FUNC_1 (union ccb*) ;
 int FUNC_2 (int ,TYPE_3__*,int ,union ccb*) ;
 int FUNC_3 (union ccb*) ;

__attribute__((used)) static void
FUNC_4(union ccb *VAR_1)
{
 FUNC_0(VAR_1->ccb_h.path, VAR_0,
     ("nvme_action: func= %#x\n", VAR_1->ccb_h.func_code));

 switch (VAR_1->ccb_h.func_code) {
 case 130:
 case 128:
 case 129:
  FUNC_2(VAR_1->ccb_h.path->periph,
         VAR_1->ccb_h.path, VAR_1->crcn.flags,
         VAR_1);
  break;
 case 131:
  FUNC_1(VAR_1);
  break;

 default:
  FUNC_3(VAR_1);
  break;
 }
}
