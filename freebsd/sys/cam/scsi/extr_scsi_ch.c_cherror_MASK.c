
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int u_int32_t ;
struct ch_softc {int dummy; } ;
struct cam_periph {scalar_t__ softc; } ;


 int FUNC_0 (union ccb*,int ,int ) ;
 struct cam_periph* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(union ccb *VAR_0, u_int32_t VAR_1, u_int32_t VAR_2)
{
 struct ch_softc *VAR_3;
 struct cam_periph *VAR_4;

 VAR_4 = FUNC_1(VAR_0->ccb_h.path);
 VAR_3 = (struct ch_softc *)VAR_4->softc;

 return (FUNC_0(VAR_0, VAR_1, VAR_2));
}
