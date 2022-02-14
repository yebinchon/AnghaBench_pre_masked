
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct ofw_pci_softc {struct rman sc_mem_rman; struct rman sc_pmem_rman; int sc_have_pmem; struct rman sc_io_rman; } ;


 int VAR_0 ;



__attribute__((used)) static struct rman *
FUNC_0(struct ofw_pci_softc *VAR_1, int VAR_2, u_int VAR_3)
{

 switch (VAR_2) {
 case 129:
  return (&VAR_1->sc_io_rman);
 case 128:
  if (VAR_1->sc_have_pmem && (VAR_3 & VAR_0))
   return (&VAR_1->sc_pmem_rman);
  else
   return (&VAR_1->sc_mem_rman);
 default:
  break;
 }

 return (((void*)0));
}
