
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psci_softc {int dummy; } ;
typedef scalar_t__ (* psci_initfn_t ) (int ,int) ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct psci_softc* FUNC_1 (int ) ;
 struct psci_softc* VAR_1 ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, psci_initfn_t VAR_3, int VAR_4)
{
 struct psci_softc *VAR_5 = FUNC_1(VAR_2);

 if (VAR_1 != ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_3 != ((void*)0), ("PSCI init function cannot be NULL"));
 if (VAR_3(VAR_2, VAR_4))
  return (VAR_0);

 VAR_1 = VAR_5;

 return (0);
}
