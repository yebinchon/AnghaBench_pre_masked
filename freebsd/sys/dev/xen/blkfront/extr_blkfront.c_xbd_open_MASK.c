
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbd_softc {int xbd_users; int xbd_flags; } ;
struct disk {int d_unit; struct xbd_softc* d_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(struct disk *VAR_2)
{
 struct xbd_softc *VAR_3 = VAR_2->d_drv1;

 if (VAR_3 == ((void*)0)) {
  FUNC_0("xbd%d: not found", VAR_2->d_unit);
  return (VAR_0);
 }

 VAR_3->xbd_flags |= VAR_1;
 VAR_3->xbd_users++;
 return (0);
}
