
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwohci_softc {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct fwohci_softc*) ;
 int FUNC_1 (struct fwohci_softc*) ;
 int FUNC_2 (struct fwohci_softc*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(struct fwohci_softc *VAR_3)
{
 int VAR_4;

 if (VAR_3->state < VAR_1) {
  FUNC_3("fwohci not enabled\n");
  return(VAR_0);
 }
 FUNC_0(VAR_3);
 FUNC_1(VAR_3);
 VAR_4 = 0;
 while (VAR_3->state< VAR_2) {
  FUNC_2(VAR_3);
  VAR_4 ++;
  if (VAR_4 > 1000) {
   FUNC_3("give up to wait bus initialize\n");
   return (-1);
  }
 }
 FUNC_3("poll count = %d\n", VAR_4);
 return (0);
}
