
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwohci_softc {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct fwohci_softc*) ;
 struct fwohci_softc* VAR_3 ;

__attribute__((used)) static int
FUNC_1(void)
{
 int VAR_4, VAR_5;
 struct fwohci_softc *VAR_6;

 if (VAR_2)
  return (0);

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4 ++) {
  VAR_6 = &VAR_3[VAR_4];
  FUNC_0(VAR_4, VAR_6);
  if (VAR_6->state == VAR_0)
   break;
  VAR_5 ++;
  break;
 }
 VAR_2 = 1;

 return (0);
}
