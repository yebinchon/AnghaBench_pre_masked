
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct psci_softc {scalar_t__* psci_fnids; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct psci_softc *VAR_2)
{
 uint32_t VAR_3;


 VAR_3 = VAR_2->psci_fnids[VAR_0];
 if (VAR_3)
  return (FUNC_0(VAR_3, 0, 0, 0));

 return (VAR_1);
}
