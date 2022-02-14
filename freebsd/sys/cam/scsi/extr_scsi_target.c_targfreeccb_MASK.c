
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int func_code; union ccb* targ_descr; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct targ_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;

 int FUNC_1 (union ccb*) ;


 int FUNC_2 (union ccb*,int ) ;
 int FUNC_3 (union ccb*) ;

__attribute__((used)) static void
FUNC_4(struct targ_softc *VAR_2, union ccb *VAR_3)
{
 FUNC_0(VAR_0, ("targfreeccb descr %p and\n",
   VAR_3->ccb_h.targ_descr));
 FUNC_2(VAR_3->ccb_h.targ_descr, VAR_1);

 switch (VAR_3->ccb_h.func_code) {
 case 130:
 case 128:
 case 129:
  FUNC_0(VAR_0, ("freeing ccb %p\n", VAR_3));
  FUNC_2(VAR_3, VAR_1);
  break;
 default:

  if (FUNC_1(VAR_3)) {
   FUNC_0(VAR_0,
     ("returning queued ccb %p\n", VAR_3));
   FUNC_3(VAR_3);
  } else {
   FUNC_0(VAR_0,
     ("freeing ccb %p\n", VAR_3));
   FUNC_2(VAR_3, VAR_1);
  }
  break;
 }
}
