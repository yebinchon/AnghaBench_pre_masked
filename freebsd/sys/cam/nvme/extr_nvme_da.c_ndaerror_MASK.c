
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int u_int32_t ;
struct nda_softc {int errors; int timeouts; } ;
struct cam_periph {scalar_t__ softc; } ;
 int VAR_0 ;

 int FUNC_0 (union ccb*,int ,int ) ;
 struct cam_periph* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(union ccb *VAR_1, u_int32_t VAR_2, u_int32_t VAR_3)
{
 struct nda_softc *VAR_4;
 struct cam_periph *VAR_5;

 VAR_5 = FUNC_1(VAR_1->ccb_h.path);
 VAR_4 = (struct nda_softc *)VAR_5->softc;

 switch (VAR_1->ccb_h.status & VAR_0) {
 case 133:



  break;
 case 131:
 case 130:
 case 129:
 case 128:
 case 132:
 case 134:



  break;
 default:
  break;
 }

 return(FUNC_0(VAR_1, VAR_2, VAR_3));
}
