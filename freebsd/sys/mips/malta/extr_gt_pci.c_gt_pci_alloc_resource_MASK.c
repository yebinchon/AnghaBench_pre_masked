
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct gt_pci_softc {int sc_io; struct rman sc_io_rman; int sc_mem; struct rman sc_mem_rman; struct rman sc_irq_rman; } ;
typedef int rman_res_t ;
typedef int device_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;



 scalar_t__ FUNC_0 (int ,int,int,struct resource*) ;
 struct gt_pci_softc* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct resource*) ;
 int FUNC_3 (struct resource*) ;
 struct resource* FUNC_4 (struct rman*,int ,int ,int ,int,int ) ;
 int FUNC_5 (struct resource*,int ) ;
 int FUNC_6 (struct resource*,int ) ;
 int FUNC_7 (struct resource*,int) ;

__attribute__((used)) static struct resource *
FUNC_8(device_t VAR_2, device_t VAR_3, int VAR_4, int *VAR_5,
    rman_res_t VAR_6, rman_res_t VAR_7, rman_res_t VAR_8, u_int VAR_9)
{
 struct gt_pci_softc *VAR_10 = FUNC_1(VAR_2);
 struct resource *VAR_11 = ((void*)0);
 struct rman *VAR_12;
 bus_space_handle_t VAR_13 = 0;

 switch (VAR_4) {
 case 129:
  VAR_12 = &VAR_10->sc_irq_rman;
  break;
 case 128:
  VAR_12 = &VAR_10->sc_mem_rman;
  VAR_13 = VAR_10->sc_mem;
  break;
 case 130:
  VAR_12 = &VAR_10->sc_io_rman;
  VAR_13 = VAR_10->sc_io;
  break;
 default:
  return (((void*)0));
 }

 VAR_11 = FUNC_4(VAR_12, VAR_6, VAR_7, VAR_8, VAR_9, VAR_3);
 if (VAR_11 == ((void*)0))
  return (((void*)0));
 FUNC_7(VAR_11, *VAR_5);
 if (VAR_4 != 129) {
  VAR_13 += (FUNC_2(VAR_11));

  FUNC_6(VAR_11, VAR_1);
  FUNC_5(VAR_11, VAR_13);
  if (VAR_9 & VAR_0) {
   if (FUNC_0(VAR_3, VAR_4, *VAR_5, VAR_11)) {
    FUNC_3(VAR_11);
    return (((void*)0));
   }
  }
 }
 return (VAR_11);
}
