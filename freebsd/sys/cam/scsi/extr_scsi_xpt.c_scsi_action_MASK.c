
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {int func_code; TYPE_3__* path; } ;
union ccb {TYPE_1__ crcn; TYPE_2__ ccb_h; int cts; } ;
struct TYPE_7__ {int periph; } ;


 int VAR_0 ;





 int FUNC_0 (union ccb*) ;
 int FUNC_1 (int ,union ccb*) ;
 int FUNC_2 (int ,TYPE_3__*,int ,union ccb*) ;
 int FUNC_3 (int *,TYPE_3__*,int ) ;
 int FUNC_4 (union ccb*) ;

__attribute__((used)) static void
FUNC_5(union ccb *VAR_1)
{

 switch (VAR_1->ccb_h.func_code) {
 case 128:
 {
  FUNC_3(&VAR_1->cts,
        VAR_1->ccb_h.path,
                        VAR_0);
  break;
 }
 case 131:
 case 129:
  FUNC_1(VAR_1->ccb_h.path->periph, VAR_1);
  break;
 case 130:
  FUNC_2(VAR_1->ccb_h.path->periph,
         VAR_1->ccb_h.path, VAR_1->crcn.flags,
         VAR_1);
  break;
 case 132:
 {
  FUNC_0(VAR_1);
  break;
 }
 default:
  FUNC_4(VAR_1);
  break;
 }
}
