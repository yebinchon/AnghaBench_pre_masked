
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uio {int uio_resid; } ;
struct fpgamgr_a10_softc {int bsh_data; int bst_data; } ;
struct cdev {struct fpgamgr_a10_softc* si_drv1; } ;


 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_0, struct uio *VAR_1, int VAR_2)
{
 struct fpgamgr_a10_softc *VAR_3;
 uint32_t VAR_4;

 VAR_3 = VAR_0->si_drv1;






 while (VAR_1->uio_resid >= 4) {
  FUNC_1(&VAR_4, 4, VAR_1);
  FUNC_0(VAR_3->bst_data, VAR_3->bsh_data,
      0x0, VAR_4);
 }

 switch (VAR_1->uio_resid) {
 case 3:
  FUNC_1(&VAR_4, 3, VAR_1);
  VAR_4 &= 0xffffff;
  FUNC_0(VAR_3->bst_data, VAR_3->bsh_data,
      0x0, VAR_4);
  break;
 case 2:
  FUNC_1(&VAR_4, 2, VAR_1);
  VAR_4 &= 0xffff;
  FUNC_0(VAR_3->bst_data, VAR_3->bsh_data,
      0x0, VAR_4);
  break;
 case 1:
  FUNC_1(&VAR_4, 1, VAR_1);
  VAR_4 &= 0xff;
  FUNC_0(VAR_3->bst_data, VAR_3->bsh_data,
      0x0, VAR_4);
  break;
 default:
  break;
 };

 return (0);
}
