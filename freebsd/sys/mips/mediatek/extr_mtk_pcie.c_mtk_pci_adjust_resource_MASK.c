
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct mtk_pci_softc {struct rman sc_mem_rman; struct rman sc_io_rman; struct rman sc_irq_rman; } ;
typedef int rman_res_t ;
typedef int device_t ;






 int FUNC_0 (int ,int ,int,struct resource*,int ,int ) ;
 struct mtk_pci_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct resource*,int ,int ) ;
 int FUNC_3 (struct resource*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, device_t VAR_1, int VAR_2,
    struct resource *VAR_3, rman_res_t VAR_4, rman_res_t VAR_5)
{
 struct mtk_pci_softc *VAR_6 = FUNC_1(VAR_0);
 struct rman *VAR_7;

 switch (VAR_2) {
 case 131:
  return FUNC_2(0, VAR_1, VAR_3, VAR_4, VAR_5);
 case 129:
  VAR_7 = &VAR_6->sc_irq_rman;
  break;
 case 130:
  VAR_7 = &VAR_6->sc_io_rman;
  break;
 case 128:
  VAR_7 = &VAR_6->sc_mem_rman;
  break;
 default:
  VAR_7 = ((void*)0);
  break;
 }

 if (VAR_7 != ((void*)0))
  return (FUNC_3(VAR_3, VAR_4, VAR_5));

 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5));
}
