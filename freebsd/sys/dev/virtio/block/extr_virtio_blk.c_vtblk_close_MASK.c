
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {int dummy; } ;
struct disk {struct vtblk_softc* d_drv1; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct disk *VAR_1)
{
 struct vtblk_softc *VAR_2;

 if ((VAR_2 = VAR_1->d_drv1) == ((void*)0))
  return (VAR_0);

 return (0);
}
