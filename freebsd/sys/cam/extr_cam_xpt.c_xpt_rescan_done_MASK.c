
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* cbfcnp ) (struct cam_periph*,union ccb*) ;int (* ppriv_ptr1 ) (struct cam_periph*,union ccb*) ;int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct cam_periph {int dummy; } ;


 int FUNC_0 (struct cam_periph*,union ccb*) ;
 int FUNC_1 (union ccb*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct cam_periph *VAR_0, union ccb *VAR_1)
{

 if (VAR_1->ccb_h.ppriv_ptr1 == ((void*)0)) {
  FUNC_2(VAR_1->ccb_h.path);
  FUNC_1(VAR_1);
 } else {
  VAR_1->ccb_h.cbfcnp = VAR_1->ccb_h.ppriv_ptr1;
  (*VAR_1->ccb_h.cbfcnp)(VAR_0, VAR_1);
 }
 FUNC_3();
}
