
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int target_id; struct pvscsi_softc* ccb_pvscsi_sc; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct pvscsi_softc {int dev; int lock; } ;
struct pvscsi_hcb {int recovery; int callout; union ccb* ccb; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ,void (*) (void*),struct pvscsi_hcb*,int ) ;
 int FUNC_1 (int ,char*,struct pvscsi_hcb*,union ccb*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct pvscsi_softc*,int ,union ccb*) ;
 int FUNC_4 (struct pvscsi_softc*) ;
 int FUNC_5 (struct pvscsi_softc*) ;
 int FUNC_6 (struct pvscsi_softc*,int ) ;
 int FUNC_7 (struct pvscsi_softc*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_4)
{
 struct pvscsi_hcb *VAR_5;
 struct pvscsi_softc *VAR_6;
 union ccb *VAR_7;

 VAR_5 = VAR_4;
 VAR_7 = VAR_5->ccb;

 if (VAR_7 == ((void*)0)) {

  return;
 }

 VAR_6 = VAR_7->ccb_h.ccb_pvscsi_sc;
 FUNC_2(&VAR_6->lock, VAR_0);

 FUNC_1(VAR_6->dev, "Command timed out hcb=%p ccb=%p.\n", VAR_5, VAR_7);

 switch (VAR_5->recovery) {
 case 128:
  VAR_5->recovery = 131;
  FUNC_3(VAR_6, VAR_7->ccb_h.target_id, VAR_7);
  FUNC_0(&VAR_5->callout, VAR_1 * VAR_3,
      0, FUNC_8, VAR_5, 0);
  break;
 case 131:
  VAR_5->recovery = 129;
  FUNC_7(VAR_6);
  FUNC_6(VAR_6, VAR_7->ccb_h.target_id);
  FUNC_0(&VAR_5->callout, VAR_2 * VAR_3,
      0, FUNC_8, VAR_5, 0);
  break;
 case 129:
  VAR_5->recovery = 130;
  FUNC_7(VAR_6);
  FUNC_5(VAR_6);
  FUNC_0(&VAR_5->callout, VAR_2 * VAR_3,
      0, FUNC_8, VAR_5, 0);
  break;
 case 130:
  FUNC_7(VAR_6);
  FUNC_4(VAR_6);
  break;
 };
}
