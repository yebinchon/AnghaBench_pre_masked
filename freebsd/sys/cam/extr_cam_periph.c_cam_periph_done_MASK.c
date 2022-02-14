
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cbfcnp; int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct cam_periph {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct cam_periph *VAR_2, union ccb *VAR_3)
{


 FUNC_1(VAR_3->ccb_h.path, VAR_0);
 VAR_3->ccb_h.cbfcnp = VAR_1;
 FUNC_0(&VAR_3->ccb_h.cbfcnp);
}
