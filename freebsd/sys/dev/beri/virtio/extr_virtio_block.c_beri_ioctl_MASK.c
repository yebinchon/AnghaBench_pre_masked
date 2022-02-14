
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct md_ioctl {int dummy; } ;
struct cdev {struct beri_vtblk_softc* si_drv1; } ;
struct beri_vtblk_softc {int opened; int pio_recv; int * vnode; struct md_ioctl* mdio; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (char*,int) ;


 int FUNC_1 (int ,int ,struct beri_vtblk_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct beri_vtblk_softc*) ;
 int FUNC_4 (struct beri_vtblk_softc*,struct thread*) ;
 int FUNC_5 (struct beri_vtblk_softc*,struct thread*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3,
  int VAR_4, struct thread *VAR_5)
{
 struct beri_vtblk_softc *VAR_6;
 int VAR_7;

 VAR_6 = VAR_1->si_drv1;

 switch (VAR_2) {
 case 129:

  if (VAR_6->vnode != ((void*)0)) {

   return (1);
  }
  VAR_6->mdio = (struct md_ioctl *)VAR_3;
  FUNC_3(VAR_6);
  FUNC_0("opening file, td 0x%08x\n", (int)VAR_5);
  VAR_7 = FUNC_5(VAR_6, VAR_5);
  if (VAR_7)
   return (VAR_7);
  FUNC_1(VAR_6->pio_recv, VAR_0, VAR_6);
  VAR_6->opened = 1;
  break;
 case 128:
  if (VAR_6->vnode == ((void*)0)) {

   return (1);
  }
  VAR_6->opened = 0;
  FUNC_0("closing file, td 0x%08x\n", (int)VAR_5);
  VAR_7 = FUNC_4(VAR_6, VAR_5);
  if (VAR_7)
   return (VAR_7);
  FUNC_2(VAR_6->pio_recv);
  break;
 default:
  break;
 }

 return (0);
}
