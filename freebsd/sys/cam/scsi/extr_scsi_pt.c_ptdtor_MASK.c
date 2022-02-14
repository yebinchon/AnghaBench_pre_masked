
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_softc {int dev; int device_stats; } ;
struct cam_periph {scalar_t__ softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct cam_periph*) ;
 int FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pt_softc*,int ) ;

__attribute__((used)) static void
FUNC_5(struct cam_periph *VAR_1)
{
 struct pt_softc *VAR_2;

 VAR_2 = (struct pt_softc *)VAR_1->softc;

 FUNC_3(VAR_2->device_stats);
 FUNC_1(VAR_1);
 FUNC_2(VAR_2->dev);
 FUNC_0(VAR_1);
 FUNC_4(VAR_2, VAR_0);
}
