
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ccb {int ccb_h; } ;
struct amr_softc {int amr_cam_ccbq; } ;
struct TYPE_2__ {int tqe; } ;


 int FUNC_0 (int *,int *,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static __inline void
FUNC_1(struct amr_softc *VAR_1, union ccb *VAR_2)
{

 FUNC_0(&VAR_1->amr_cam_ccbq, &VAR_2->ccb_h, VAR_0.tqe);
}
