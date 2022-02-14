
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cd_softc {int flags; int disk; int mediapoll_c; int sysctl_ctx; } ;
struct cam_periph {int path; scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cd_softc*,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void
FUNC_7(struct cam_periph *VAR_2)
{
 struct cd_softc *VAR_3;

 VAR_3 = (struct cd_softc *)VAR_2->softc;

 FUNC_2(VAR_2);
 if ((VAR_3->flags & VAR_0) != 0
     && FUNC_5(&VAR_3->sysctl_ctx) != 0) {
  FUNC_6(VAR_2->path, "can't remove sysctl context\n");
 }

 FUNC_0(&VAR_3->mediapoll_c);
 FUNC_3(VAR_3->disk);
 FUNC_4(VAR_3, VAR_1);
 FUNC_1(VAR_2);
}
