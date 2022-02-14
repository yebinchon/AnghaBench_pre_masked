
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* ccb_req_ptr; struct mpt_softc* ccb_mpt_ptr; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct mpt_softc {int request_timeout_list; int request_pending_list; } ;
struct TYPE_7__ {int state; int ccb; int serno; } ;
typedef TYPE_2__ request_t ;


 int FUNC_0 (struct mpt_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct mpt_softc*,char*,TYPE_2__*,int ,union ccb*,int ) ;
 int FUNC_4 (struct mpt_softc*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 union ccb *VAR_4;
 struct mpt_softc *VAR_5;
 request_t *VAR_6;

 VAR_4 = (union ccb *)VAR_3;
 VAR_5 = VAR_4->ccb_h.ccb_mpt_ptr;

 FUNC_0(VAR_5);
 VAR_6 = VAR_4->ccb_h.ccb_req_ptr;
 FUNC_3(VAR_5, "request %p:%u timed out for ccb %p (req->ccb %p)\n", VAR_6,
     VAR_6->serno, VAR_4, VAR_6->ccb);

 if ((VAR_6->state & VAR_0) == VAR_0) {
  FUNC_2(&VAR_5->request_pending_list, VAR_6, VAR_2);
  FUNC_1(&VAR_5->request_timeout_list, VAR_6, VAR_2);
  VAR_6->state |= VAR_1;
  FUNC_4(VAR_5);
 }
}
