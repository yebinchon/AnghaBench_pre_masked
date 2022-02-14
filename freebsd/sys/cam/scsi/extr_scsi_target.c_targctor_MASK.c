
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct targ_softc {int path; struct cam_periph* periph; } ;
struct cam_periph {int path; struct targ_softc* softc; } ;
typedef int cam_status ;


 int VAR_0 ;

__attribute__((used)) static cam_status
FUNC_0(struct cam_periph *VAR_1, void *VAR_2)
{
 struct targ_softc *VAR_3;


 VAR_3 = (struct targ_softc *)VAR_2;
 VAR_1->softc = VAR_3;
 VAR_3->periph = VAR_1;
 VAR_3->path = VAR_1->path;
 return (VAR_0);
}
