
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct vtscsi_softc {int dummy; } ;
struct vtscsi_request {union ccb* vsr_ccb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vtscsi_request* FUNC_0 (struct vtscsi_softc*) ;
 int FUNC_1 (struct vtscsi_softc*,struct vtscsi_request*) ;
 int FUNC_2 (struct vtscsi_softc*,struct vtscsi_request*) ;
 int FUNC_3 (struct vtscsi_softc*,int ) ;

__attribute__((used)) static int
FUNC_4(struct vtscsi_softc *VAR_3, union ccb *VAR_4)
{
 struct vtscsi_request *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 == ((void*)0)) {
  VAR_4->ccb_h.status = VAR_0;
  FUNC_3(VAR_3, VAR_2);
  return (VAR_1);
 }

 VAR_5->vsr_ccb = VAR_4;

 VAR_6 = FUNC_2(VAR_3, VAR_5);
 if (VAR_6)
  FUNC_1(VAR_3, VAR_5);

 return (VAR_6);
}
