
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ch_softc {int device_stats; } ;
struct cam_periph {scalar_t__ softc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ch_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(struct cam_periph *VAR_1)
{
 struct ch_softc *VAR_2;

 VAR_2 = (struct ch_softc *)VAR_1->softc;

 FUNC_0(VAR_2->device_stats);

 FUNC_1(VAR_2, VAR_0);
}
