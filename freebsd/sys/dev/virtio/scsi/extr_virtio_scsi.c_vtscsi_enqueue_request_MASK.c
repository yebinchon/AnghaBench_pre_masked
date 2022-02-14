
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int vtscsi_req_free; int vtscsi_sim; } ;
struct vtscsi_request {int vsr_uresp; int vsr_ureq; scalar_t__ vsr_flags; int vsr_state; int * vsr_ptr0; int * vsr_complete; int * vsr_ccb; struct vtscsi_softc* vsr_softc; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,struct vtscsi_request*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;
 int VAR_3 ;
 int FUNC_3 (struct vtscsi_softc*,int ,char*,struct vtscsi_request*) ;
 scalar_t__ FUNC_4 (struct vtscsi_softc*,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(struct vtscsi_softc *VAR_4, struct vtscsi_request *VAR_5)
{

 FUNC_0(VAR_5->vsr_softc == VAR_4,
     ("non-matching request vsr_softc %p/%p", VAR_5->vsr_softc, VAR_4));

 FUNC_3(VAR_4, VAR_2, "req=%p\n", VAR_5);


 if (FUNC_4(VAR_4, VAR_0) != 0)
  FUNC_5(VAR_4->vtscsi_sim, 1);

 VAR_5->vsr_ccb = ((void*)0);
 VAR_5->vsr_complete = ((void*)0);
 VAR_5->vsr_ptr0 = ((void*)0);
 VAR_5->vsr_state = VAR_1;
 VAR_5->vsr_flags = 0;

 FUNC_2(&VAR_5->vsr_ureq, sizeof(VAR_5->vsr_ureq));
 FUNC_2(&VAR_5->vsr_uresp, sizeof(VAR_5->vsr_uresp));






 FUNC_1(&VAR_4->vtscsi_req_free, VAR_5, VAR_3);
}
