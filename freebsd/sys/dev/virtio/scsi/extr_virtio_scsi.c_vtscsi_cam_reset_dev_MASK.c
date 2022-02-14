
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccb_hdr {int status; } ;
union ccb {struct ccb_hdr ccb_h; } ;
struct vtscsi_softc {int dummy; } ;
struct vtscsi_request {union ccb* vsr_ccb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vtscsi_request* FUNC_0 (struct vtscsi_softc*) ;
 int FUNC_1 (struct vtscsi_softc*,int ,char*,int,struct vtscsi_request*,union ccb*) ;
 int FUNC_2 (struct vtscsi_softc*,struct vtscsi_request*) ;
 int FUNC_3 (struct vtscsi_softc*,struct vtscsi_request*) ;
 int FUNC_4 (struct vtscsi_softc*,int ) ;
 int FUNC_5 (union ccb*) ;

__attribute__((used)) static void
FUNC_6(struct vtscsi_softc *VAR_5, union ccb *VAR_6)
{
 struct ccb_hdr *VAR_7;
 struct vtscsi_request *VAR_8;
 int VAR_9;

 VAR_7 = &VAR_6->ccb_h;

 VAR_8 = FUNC_0(VAR_5);
 if (VAR_8 == ((void*)0)) {
  VAR_9 = VAR_2;
  FUNC_4(VAR_5, VAR_4);
  goto fail;
 }

 VAR_8->vsr_ccb = VAR_6;

 VAR_9 = FUNC_3(VAR_5, VAR_8);
 if (VAR_9 == 0)
  return;

 FUNC_2(VAR_5, VAR_8);

fail:
 FUNC_1(VAR_5, VAR_3, "error=%d req=%p ccb=%p\n",
     VAR_9, VAR_8, VAR_6);

 if (VAR_9 == VAR_2)
  VAR_7->status = VAR_1;
 else
  VAR_7->status = VAR_0;

 FUNC_5(VAR_6);
}
