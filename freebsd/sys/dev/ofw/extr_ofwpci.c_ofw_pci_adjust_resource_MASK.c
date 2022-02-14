
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct ofw_pci_softc {int sc_pci_domain; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,struct resource*,int ,int ) ;
 struct ofw_pci_softc* FUNC_2 (int ) ;
 struct rman* FUNC_3 (struct ofw_pci_softc*,int,int) ;
 int FUNC_4 (int ,int ,struct resource*,int ,int ) ;
 int FUNC_5 (struct resource*,int ,int ) ;
 int FUNC_6 (struct resource*) ;
 int FUNC_7 (struct resource*,struct rman*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2, device_t VAR_3, int VAR_4,
    struct resource *VAR_5, rman_res_t VAR_6, rman_res_t VAR_7)
{
 struct rman *VAR_8;
 struct ofw_pci_softc *VAR_9;

 VAR_9 = FUNC_2(VAR_2);






 VAR_8 = FUNC_3(VAR_9, VAR_4, FUNC_6(VAR_5));
 if (VAR_8 == ((void*)0)) {
  return (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7));
 }
 FUNC_0(FUNC_7(VAR_5, VAR_8), ("rman mismatch"));
 FUNC_0(!(FUNC_6(VAR_5) & VAR_1),
     ("active resources cannot be adjusted"));

 return (FUNC_5(VAR_5, VAR_6, VAR_7));
}
