
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_softc {int vtpci_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vtpci_softc*,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_1(struct vtpci_softc *VAR_5)
{
 int VAR_6;

 if (VAR_4 != 0 ||
     VAR_5->vtpci_flags & VAR_2)
  return (VAR_0);

 VAR_6 = FUNC_0(VAR_5, 1);
 if (VAR_6)
  return (VAR_6);

 VAR_5->vtpci_flags |= VAR_1 | VAR_3;

 return (0);
}
