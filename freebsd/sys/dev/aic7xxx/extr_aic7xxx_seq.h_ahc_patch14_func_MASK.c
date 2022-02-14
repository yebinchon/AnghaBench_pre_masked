
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int bugs; scalar_t__ pci_cachesize; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct ahc_softc *VAR_1)
{
 return ((VAR_1->bugs & VAR_0) != 0 && VAR_1->pci_cachesize != 0);
}
