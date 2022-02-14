
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct xbd_softc {int dummy; } ;
struct thread {int dummy; } ;
struct disk {struct xbd_softc* d_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct disk *VAR_2, u_long VAR_3, void *VAR_4, int VAR_5, struct thread *VAR_6)
{
 struct xbd_softc *VAR_7 = VAR_2->d_drv1;

 if (VAR_7 == ((void*)0))
  return (VAR_1);

 return (VAR_0);
}
