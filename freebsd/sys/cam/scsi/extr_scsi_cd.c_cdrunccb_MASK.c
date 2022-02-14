
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int u_int32_t ;
struct cd_softc {TYPE_2__* disk; } ;
struct cam_periph {scalar_t__ softc; } ;
struct TYPE_4__ {int d_devstat; } ;


 int FUNC_0 (union ccb*,int (*) (union ccb*,int ,int ),int ,int ,int ) ;
 struct cam_periph* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(union ccb *VAR_0, int (*VAR_1)(union ccb *VAR_2,
           u_int32_t VAR_3,
           u_int32_t VAR_4),
  u_int32_t VAR_5, u_int32_t VAR_6)
{
 struct cd_softc *VAR_7;
 struct cam_periph *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_0->ccb_h.path);
 VAR_7 = (struct cd_softc *)VAR_8->softc;

 VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_5, VAR_6,
      VAR_7->disk->d_devstat);

 return(VAR_9);
}
