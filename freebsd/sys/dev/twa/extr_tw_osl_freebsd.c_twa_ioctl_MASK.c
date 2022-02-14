
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct twa_softc {int ctlr_handle; } ;
struct thread {int dummy; } ;
struct cdev {scalar_t__ si_drv1; } ;
typedef scalar_t__ caddr_t ;
typedef int TW_INT8 ;
typedef int TW_INT32 ;




 int FUNC_0 (int *,int,scalar_t__) ;
 int FUNC_1 (int,struct twa_softc*,char*,...) ;
 int FUNC_2 (struct twa_softc*,int *) ;
 int FUNC_3 (struct twa_softc*) ;

__attribute__((used)) static TW_INT32
FUNC_4(struct cdev *VAR_0, u_long VAR_1, caddr_t VAR_2, TW_INT32 VAR_3, struct thread *VAR_4)
{
 struct twa_softc *VAR_5 = (struct twa_softc *)(VAR_0->si_drv1);
 TW_INT32 VAR_6;

 FUNC_1(5, VAR_5, "entered");

 switch (VAR_1) {
 case 129:
  FUNC_1(6, VAR_5, "ioctl: fw_passthru");
  VAR_6 = FUNC_2(VAR_5, (TW_INT8 *)VAR_2);
  break;

 case 128:

  FUNC_1(6, VAR_5, "ioctl: scan bus");
  VAR_6 = FUNC_3(VAR_5);
  break;

 default:
  FUNC_1(6, VAR_5, "ioctl: 0x%lx", VAR_1);
  VAR_6 = FUNC_0(&VAR_5->ctlr_handle, VAR_1, VAR_2);
  break;
 }
 return(VAR_6);
}
