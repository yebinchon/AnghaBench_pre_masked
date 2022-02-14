
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccb_hdr {int func_code; int status; } ;
union ccb {int ccg; struct ccb_hdr ccb_h; } ;
struct vtscsi_softc {int vtscsi_flags; } ;
struct cam_sim {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vtscsi_softc*) ;
 int FUNC_1 (int *,int) ;
 struct vtscsi_softc* FUNC_2 (struct cam_sim*) ;
 int FUNC_3 (struct vtscsi_softc*,union ccb*) ;
 int FUNC_4 (struct vtscsi_softc*,union ccb*) ;
 int FUNC_5 (struct vtscsi_softc*,struct cam_sim*,union ccb*) ;
 int FUNC_6 (struct vtscsi_softc*,union ccb*) ;
 int FUNC_7 (struct vtscsi_softc*,union ccb*) ;
 int FUNC_8 (struct vtscsi_softc*,struct cam_sim*,union ccb*) ;
 int FUNC_9 (struct vtscsi_softc*,int ,char*,union ccb*,int) ;
 int FUNC_10 (union ccb*) ;

__attribute__((used)) static void
FUNC_11(struct cam_sim *VAR_5, union ccb *VAR_6)
{
 struct vtscsi_softc *VAR_7;
 struct ccb_hdr *VAR_8;

 VAR_7 = FUNC_2(VAR_5);
 VAR_8 = &VAR_6->ccb_h;

 FUNC_0(VAR_7);

 if (VAR_7->vtscsi_flags & VAR_4) {





  VAR_8->status = VAR_1;
  FUNC_10(VAR_6);
  return;
 }

 switch (VAR_8->func_code) {
 case 129:
  FUNC_8(VAR_7, VAR_5, VAR_6);
  break;

 case 128:
  VAR_8->status = VAR_0;
  FUNC_10(VAR_6);
  break;

 case 133:
  FUNC_4(VAR_7, VAR_6);
  break;

 case 131:
  FUNC_6(VAR_7, VAR_6);
  break;

 case 130:
  FUNC_7(VAR_7, VAR_6);
  break;

 case 135:
  FUNC_3(VAR_7, VAR_6);
  break;

 case 134:
  FUNC_1(&VAR_6->ccg, 1);
  FUNC_10(VAR_6);
  break;

 case 132:
  FUNC_5(VAR_7, VAR_5, VAR_6);
  break;

 default:
  FUNC_9(VAR_7, VAR_3,
      "invalid ccb=%p func=%#x\n", VAR_6, VAR_8->func_code);

  VAR_8->status = VAR_2;
  FUNC_10(VAR_6);
  break;
 }
}
