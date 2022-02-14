
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct ofw_pci_softc {int sc_pci_domain; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int,struct resource*) ;
 int FUNC_2 (int ,int ,int,int,struct resource*) ;
 struct ofw_pci_softc* FUNC_3 (int ) ;
 struct rman* FUNC_4 (struct ofw_pci_softc*,int,int) ;
 int FUNC_5 (int ,int ,int,struct resource*) ;
 int FUNC_6 (struct resource*) ;
 int FUNC_7 (struct resource*,struct rman*) ;
 int FUNC_8 (struct resource*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2, device_t VAR_3, int VAR_4, int VAR_5,
    struct resource *VAR_6)
{
 struct ofw_pci_softc *VAR_7;
 struct rman *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3(VAR_2);







 VAR_8 = FUNC_4(VAR_7, VAR_4, FUNC_6(VAR_6));
 if (VAR_8 == ((void*)0)) {
  return (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6));
 }
 FUNC_0(FUNC_7(VAR_6, VAR_8), ("rman mismatch"));

 if (FUNC_6(VAR_6) & VAR_1) {
  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
  if (VAR_9 != 0)
   return (VAR_9);
 }
 return (FUNC_8(VAR_6));
}
