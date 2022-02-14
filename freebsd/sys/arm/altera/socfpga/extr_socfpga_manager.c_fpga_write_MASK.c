
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; } ;
struct fpgamgr_softc {int bsh_data; int bst_data; } ;
struct cdev {struct fpgamgr_softc* si_drv1; } ;


 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_0, struct uio *VAR_1, int VAR_2)
{
 struct fpgamgr_softc *VAR_3;
 int VAR_4;

 VAR_3 = VAR_0->si_drv1;






 while (VAR_1->uio_resid > 0) {
  FUNC_1(&VAR_4, 4, VAR_1);
  FUNC_0(VAR_3->bst_data, VAR_3->bsh_data,
      0x0, VAR_4);
 }

 return (0);
}
