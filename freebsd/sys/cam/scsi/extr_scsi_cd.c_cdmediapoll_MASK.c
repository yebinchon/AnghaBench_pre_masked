
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cd_softc {scalar_t__ state; int tur; scalar_t__ outstanding_cmds; int mediapoll_c; } ;
struct cam_periph {struct cd_softc* softc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (struct cam_periph*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct cam_periph*,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_4)
{
 struct cam_periph *VAR_5 = VAR_4;
 struct cd_softc *VAR_6 = VAR_5->softc;

 if (VAR_6->state == VAR_1 && !VAR_6->tur &&
     VAR_6->outstanding_cmds == 0) {
  if (FUNC_1(VAR_5) == 0) {
   VAR_6->tur = 1;
   FUNC_2(VAR_5, VAR_0);
  }
 }

 if (VAR_2 != 0)
  FUNC_0(&VAR_6->mediapoll_c, VAR_2 * VAR_3);
}
