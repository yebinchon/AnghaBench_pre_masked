
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {int vtblk_flags; } ;
struct disk {struct vtblk_softc* d_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct disk *VAR_2)
{
 struct vtblk_softc *VAR_3;

 if ((VAR_3 = VAR_2->d_drv1) == ((void*)0))
  return (VAR_0);

 return (VAR_3->vtblk_flags & VAR_1 ? VAR_0 : 0);
}
