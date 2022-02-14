
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fwohci_softc {int intstat; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct fwohci_softc*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, int VAR_1)
{
 struct fwohci_softc *VAR_2 = (struct fwohci_softc *)VAR_0;
 uint32_t VAR_3;

again:
 VAR_3 = FUNC_0(&VAR_2->intstat);
 if (VAR_3)
  FUNC_1(VAR_2, VAR_3, -1);
 else
  return;
 goto again;
}
