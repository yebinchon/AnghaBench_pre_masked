
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct targbh_softc {int init_level; int state; } ;
struct cam_periph {scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cam_periph*,struct targbh_softc*,int ,char*,int) ;
 int FUNC_1 (struct targbh_softc*,int ) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct cam_periph*) ;

__attribute__((used)) static void
FUNC_4(struct cam_periph *VAR_4)
{
 struct targbh_softc *VAR_5;

 VAR_5 = (struct targbh_softc *)VAR_4->softc;

 VAR_5->state = VAR_2;

 FUNC_3(VAR_4);

 switch (VAR_5->init_level) {
 case 0:
  FUNC_2("targdtor - impossible init level");
 case 1:

 default:

  FUNC_0(VAR_4, VAR_5, VAR_1, "targbh", VAR_3/2);
  FUNC_1(VAR_5, VAR_0);
  break;
 }
}
