
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; int * sym_hcb_ptr; int sim_links; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int hcb_p ;
typedef TYPE_2__* ccb_p ;
struct TYPE_5__ {int ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (union ccb*) ;

__attribute__((used)) static void FUNC_5(hcb_p VAR_2, union ccb *VAR_3, ccb_p VAR_4)
{

 FUNC_0(VAR_1);

 if (VAR_3->ccb_h.status & VAR_0) {
  FUNC_1(&VAR_4->ch);
  FUNC_3(FUNC_2(&VAR_3->ccb_h.sim_links));
  VAR_3->ccb_h.status &= ~VAR_0;
  VAR_3->ccb_h.sym_hcb_ptr = ((void*)0);
 }
 FUNC_4(VAR_3);
}
