
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puc_softc {scalar_t__ sc_msi; } ;
typedef int device_t ;


 struct puc_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct puc_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0);

 VAR_2 = FUNC_2(VAR_0);

 if (VAR_2 != 0)
  return (VAR_2);

 if (VAR_1->sc_msi)
  VAR_2 = FUNC_1(VAR_0);

 return (VAR_2);
}
