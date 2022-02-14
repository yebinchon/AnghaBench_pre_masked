
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
typedef int uint32_t ;
typedef int u_long ;
struct uio {scalar_t__ uio_offset; int uio_resid; } ;
struct terasic_mtl_softc {int mtl_reg_res; } ;
struct cdev {struct terasic_mtl_softc* si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,struct uio*) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_1, struct uio *VAR_2, int VAR_3)
{
 struct terasic_mtl_softc *VAR_4;
 u_long VAR_5, VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 if (VAR_2->uio_offset < 0 || VAR_2->uio_offset % 4 != 0 ||
     VAR_2->uio_resid % 4 != 0)
  return (VAR_0);
 VAR_4 = VAR_1->si_drv1;
 VAR_6 = FUNC_1(VAR_4->mtl_reg_res);
 VAR_8 = 0;
 if ((VAR_2->uio_offset + VAR_2->uio_resid < 0) ||
     (VAR_2->uio_offset + VAR_2->uio_resid > VAR_6))
  return (VAR_0);
 while (VAR_2->uio_resid > 0) {
  VAR_5 = VAR_2->uio_offset;
  if (VAR_5 + sizeof(VAR_7) > VAR_6)
   return (VAR_0);
  VAR_7 = FUNC_0(VAR_4->mtl_reg_res, VAR_5);
  VAR_8 = FUNC_2(&VAR_7, sizeof(VAR_7), VAR_2);
  if (VAR_8)
   return (VAR_8);
 }
 return (VAR_8);
}
