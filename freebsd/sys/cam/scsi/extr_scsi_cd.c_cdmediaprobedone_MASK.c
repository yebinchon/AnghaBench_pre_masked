
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cd_softc {int flags; int toc; } ;
struct cam_periph {scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct cam_periph *VAR_2)
{
 struct cd_softc *VAR_3;

 VAR_3 = (struct cd_softc *)VAR_2->softc;

 VAR_3->flags &= ~VAR_0;

 if ((VAR_3->flags & VAR_1) != 0) {
  VAR_3->flags &= ~VAR_1;
  FUNC_0(&VAR_3->toc);
 }
}
