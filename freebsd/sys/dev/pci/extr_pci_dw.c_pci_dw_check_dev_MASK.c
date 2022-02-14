
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct pci_dw_softc {scalar_t__ bus_start; scalar_t__ bus_end; scalar_t__ root_bus; int dev; } ;


 int FUNC_0 (int ,int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool
FUNC_1(struct pci_dw_softc *VAR_3, u_int VAR_4, u_int VAR_5, u_int VAR_6,
    u_int VAR_7)
{
 bool VAR_8;
 int VAR_9;

 if (VAR_4 < VAR_3->bus_start || VAR_4 > VAR_3->bus_end || VAR_5 > VAR_2 ||
     VAR_6 > VAR_0 || VAR_7 > VAR_1)
  return (0);


 if (VAR_4 != VAR_3->root_bus) {
  VAR_9 = FUNC_0(VAR_3->dev, &VAR_8);
  if (VAR_9 != 0 || !VAR_8)
   return (0);
  return (1);
 }


 if (VAR_5 > 0 || VAR_6 > 0)
  return (0);
 return (1);
}
