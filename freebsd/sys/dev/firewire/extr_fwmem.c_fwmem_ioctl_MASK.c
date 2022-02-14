
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct fwmem_softc {int eui; } ;
struct fw_eui64 {int dummy; } ;
struct cdev {struct fwmem_softc* si_drv1; } ;
typedef int fw_proc ;
typedef int * caddr_t ;


 int VAR_0 ;


 int FUNC_0 (int *,int *,int) ;

int
FUNC_1(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4, fw_proc *VAR_5)
{
 struct fwmem_softc *VAR_6;
 int VAR_7 = 0;

 VAR_6 = VAR_1->si_drv1;
 switch (VAR_2) {
 case 128:
  FUNC_0(VAR_3, &VAR_6->eui, sizeof(struct fw_eui64));
  break;
 case 129:
  FUNC_0(&VAR_6->eui, VAR_3, sizeof(struct fw_eui64));
  break;
 default:
  VAR_7 = VAR_0;
 }
 return (VAR_7);
}
