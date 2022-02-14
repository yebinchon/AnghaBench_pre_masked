
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nda_softc {int flags; } ;
struct disk {scalar_t__ d_drv1; } ;
struct cam_periph {scalar_t__ softc; int path; } ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct cam_periph*,int) ;
 int FUNC_3 (struct cam_periph*) ;
 int FUNC_4 (struct cam_periph*) ;
 int FUNC_5 (struct cam_periph*) ;
 int FUNC_6 (struct cam_periph*) ;

__attribute__((used)) static int
FUNC_7(struct disk *VAR_6)
{
 struct cam_periph *VAR_7;
 struct nda_softc *VAR_8;
 int VAR_9;

 VAR_7 = (struct cam_periph *)VAR_6->d_drv1;
 if (FUNC_1(VAR_7) != 0) {
  return(VAR_2);
 }

 FUNC_3(VAR_7);
 if ((VAR_9 = FUNC_2(VAR_7, VAR_5|VAR_4)) != 0) {
  FUNC_6(VAR_7);
  FUNC_4(VAR_7);
  return (VAR_9);
 }

 FUNC_0(VAR_7->path, VAR_1 | VAR_0,
     ("ndaopen\n"));

 VAR_8 = (struct nda_softc *)VAR_7->softc;
 VAR_8->flags |= VAR_3;

 FUNC_5(VAR_7);
 FUNC_6(VAR_7);
 return (0);
}
