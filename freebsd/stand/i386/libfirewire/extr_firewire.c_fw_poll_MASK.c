
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwohci_softc {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct fwohci_softc* VAR_3 ;
 int FUNC_0 (struct fwohci_softc*) ;

void
FUNC_1(void)
{
 struct fwohci_softc *VAR_4;
 int VAR_5;

 if (VAR_2 == 0)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 ++) {
  VAR_4 = &VAR_3[VAR_5];
  if (VAR_4->state < VAR_0)
   break;
  FUNC_0(VAR_4);
 }
}
