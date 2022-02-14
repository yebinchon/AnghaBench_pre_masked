
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_sim {int dummy; } ;
struct ahc_softc {int dummy; } ;


 int FUNC_0 (struct ahc_softc*) ;
 scalar_t__ FUNC_1 (struct cam_sim*) ;

__attribute__((used)) static void
FUNC_2(struct cam_sim *VAR_0)
{
 struct ahc_softc *VAR_1;

 VAR_1 = (struct ahc_softc *)FUNC_1(VAR_0);
 FUNC_0(VAR_1);
}
