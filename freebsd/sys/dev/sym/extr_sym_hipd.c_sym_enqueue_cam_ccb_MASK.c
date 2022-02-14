
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status; int timeout; int sim_links; TYPE_2__* sym_hcb_ptr; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef TYPE_2__* hcb_p ;
typedef TYPE_3__* ccb_p ;
typedef int caddr_t ;
struct TYPE_7__ {int ch; scalar_t__ arg; union ccb* cam_ccb; } ;
struct TYPE_6__ {int cam_ccbq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(ccb_p VAR_4)
{
 hcb_p VAR_5;
 union ccb *VAR_6;

 VAR_6 = VAR_4->cam_ccb;
 VAR_5 = (hcb_p) VAR_4->arg;

 FUNC_0(!(VAR_6->ccb_h.status & VAR_1));
 VAR_6->ccb_h.status = VAR_0;

 FUNC_1(&VAR_4->ch, VAR_2 * VAR_6->ccb_h.timeout, 0, VAR_3,
     (caddr_t)VAR_6, 0);
 VAR_6->ccb_h.status |= VAR_1;
 VAR_6->ccb_h.sym_hcb_ptr = VAR_5;

 FUNC_2(FUNC_3(&VAR_6->ccb_h.sim_links), &VAR_5->cam_ccbq);
}
