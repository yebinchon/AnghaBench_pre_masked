
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ spriv_ptr0; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct cam_periph {int dummy; } ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_2__ isc_session_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (union ccb*) ;

__attribute__((used)) static void
FUNC_3(struct cam_periph *VAR_1, union ccb *VAR_2)
{
     isc_session_t *VAR_3 = (isc_session_t *)VAR_2->ccb_h.spriv_ptr0;

     FUNC_0(8);

     FUNC_2(VAR_2);

     if(VAR_3->flags & VAR_0) {
   VAR_3->flags &= ~VAR_0;
   FUNC_1(VAR_3);
     }
}
