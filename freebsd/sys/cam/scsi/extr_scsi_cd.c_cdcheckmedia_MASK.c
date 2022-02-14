
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cd_softc {int flags; int toc; int state; } ;
struct cam_periph {scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cam_periph*) ;
 int FUNC_1 (int *,int ,int ,char*,int ) ;
 int FUNC_2 (struct cam_periph*,int ) ;

__attribute__((used)) static int
FUNC_3(struct cam_periph *VAR_7, int VAR_8)
{
 struct cd_softc *VAR_9;
 int VAR_10;

 VAR_9 = (struct cd_softc *)VAR_7->softc;
 VAR_10 = 0;

 if ((VAR_8 != 0)
  && ((VAR_9->flags & VAR_2) == 0)) {
  VAR_9->flags |= VAR_2;
 }
 if ((VAR_9->flags & VAR_1) == 0) {
  VAR_9->state = VAR_4;
  VAR_9->flags |= VAR_1;
  FUNC_2(VAR_7, VAR_0);
 }

 if (VAR_8 == 0)
  goto bailout;

 VAR_10 = FUNC_1(&VAR_9->toc, FUNC_0(VAR_7), VAR_6,"cdmedia",0);

 if (VAR_10 != 0)
  goto bailout;





 if ((VAR_9->flags & VAR_3) == 0)
  VAR_10 = VAR_5;
bailout:

 return (VAR_10);
}
