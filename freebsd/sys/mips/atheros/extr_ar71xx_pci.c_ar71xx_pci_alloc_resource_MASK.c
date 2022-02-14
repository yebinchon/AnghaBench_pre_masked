
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct ar71xx_pci_softc {struct rman sc_mem_rman; struct rman sc_irq_rman; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int ,int,int,struct resource*) ;
 struct ar71xx_pci_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct resource*) ;
 struct resource* FUNC_3 (struct rman*,int ,int ,int ,int,int ) ;
 int FUNC_4 (struct resource*,int) ;

__attribute__((used)) static struct resource *
FUNC_5(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
    rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8)
{

 struct ar71xx_pci_softc *VAR_9 = FUNC_1(VAR_1);
 struct resource *VAR_10;
 struct rman *VAR_11;

 switch (VAR_3) {
 case 129:
  VAR_11 = &VAR_9->sc_irq_rman;
  break;
 case 128:
  VAR_11 = &VAR_9->sc_mem_rman;
  break;
 default:
  return (((void*)0));
 }

 VAR_10 = FUNC_3(VAR_11, VAR_5, VAR_6, VAR_7, VAR_8, VAR_2);

 if (VAR_10 == ((void*)0))
  return (((void*)0));

 FUNC_4(VAR_10, *VAR_4);

 if (VAR_8 & VAR_0) {
  if (FUNC_0(VAR_2, VAR_3, *VAR_4, VAR_10)) {
   FUNC_2(VAR_10);
   return (((void*)0));
  }
 }
 return (VAR_10);
}
