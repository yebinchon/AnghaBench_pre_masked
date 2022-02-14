
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct mtk_pci_softc {struct rman sc_mem_rman; struct rman sc_io_rman; struct rman sc_irq_rman; } ;
typedef int rman_res_t ;
typedef int device_t ;



 int VAR_0 ;



 scalar_t__ FUNC_0 (int ,int,int,struct resource*) ;
 struct mtk_pci_softc* FUNC_1 (int ) ;
 struct resource* FUNC_2 (int ,int ,int*,int ,int ,int ,int) ;
 int FUNC_3 (struct resource*) ;
 struct resource* FUNC_4 (struct rman*,int ,int ,int ,int,int ) ;
 int FUNC_5 (struct resource*,int) ;

__attribute__((used)) static struct resource *
FUNC_6(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
 rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8)
{
 struct mtk_pci_softc *VAR_9 = FUNC_1(VAR_1);
 struct resource *VAR_10;
 struct rman *VAR_11;

 switch (VAR_3) {
 case 131:
  return FUNC_2(0, VAR_2, VAR_4, VAR_5, VAR_6, VAR_7,
         VAR_8);
 case 129:
  VAR_11 = &VAR_9->sc_irq_rman;
  break;
 case 130:
  VAR_11 = &VAR_9->sc_io_rman;
  break;
 case 128:
  VAR_11 = &VAR_9->sc_mem_rman;
  break;
 default:
  return (((void*)0));
 }

 VAR_10 = FUNC_4(VAR_11, VAR_5, VAR_6, VAR_7, VAR_8, VAR_2);

 if (VAR_10 == ((void*)0))
  return (((void*)0));

 FUNC_5(VAR_10, *VAR_4);

 if ((VAR_8 & VAR_0) && VAR_3 != 129) {
  if (FUNC_0(VAR_2, VAR_3, *VAR_4, VAR_10)) {
   FUNC_3(VAR_10);
   return (((void*)0));
  }
 }

 return (VAR_10);
}
