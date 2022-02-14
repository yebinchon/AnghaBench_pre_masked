
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nda_softc {scalar_t__ state; int cam_iosched; } ;
struct cam_periph {scalar_t__ softc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct cam_periph*) ;

__attribute__((used)) static void
FUNC_1(struct cam_periph *VAR_1)
{
 struct nda_softc *VAR_2 = (struct nda_softc *)VAR_1->softc;

 if (VAR_2->state != VAR_0)
  return;

 FUNC_0(VAR_2->cam_iosched, VAR_1);
}
