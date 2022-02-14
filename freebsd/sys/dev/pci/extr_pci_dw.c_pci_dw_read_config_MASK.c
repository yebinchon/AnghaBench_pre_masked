
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct resource {int dummy; } ;
struct pci_dw_softc {scalar_t__ root_bus; scalar_t__ sub_bus; struct resource* cfg_res; int cfg_size; int cfg_pa; struct resource* dbi_res; } ;
typedef int device_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct resource*,scalar_t__) ;
 int FUNC_4 (struct resource*,scalar_t__) ;
 int FUNC_5 (struct resource*,scalar_t__) ;
 struct pci_dw_softc* FUNC_6 (int ) ;
 int FUNC_7 (struct pci_dw_softc*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct pci_dw_softc*,int,int,int ,int,int ) ;

__attribute__((used)) static uint32_t
FUNC_9(device_t VAR_5, u_int VAR_6, u_int VAR_7,
    u_int VAR_8, u_int VAR_9, int VAR_10)
{
 struct pci_dw_softc *VAR_11;
 struct resource *VAR_12;
 uint32_t VAR_13;
 uint64_t VAR_14;
 int VAR_15, VAR_16;

 VAR_11 = FUNC_6(VAR_5);

 if (!FUNC_7(VAR_11, VAR_6, VAR_7, VAR_8, VAR_9))
  return (0xFFFFFFFFU);

 if ((VAR_7 > VAR_4) || (VAR_8 > VAR_2) ||
     (VAR_9 > VAR_3))
  return (0xFFFFFFFFU);

 if (VAR_6 == VAR_11->root_bus) {
  VAR_12 = (VAR_11->dbi_res);
 } else {
  VAR_14 = FUNC_0(VAR_6) | FUNC_2(VAR_7) |
      FUNC_1(VAR_8);
  if (VAR_6 == VAR_11->sub_bus)
   VAR_15 = VAR_0;
  else
   VAR_15 = VAR_1;
  VAR_16 = FUNC_8(VAR_11, 1, VAR_15,
      VAR_11->cfg_pa, VAR_14, VAR_11->cfg_size);
  if (VAR_16 != 0)
   return (0xFFFFFFFFU);
  VAR_12 = VAR_11->cfg_res;
 }

 switch (VAR_10) {
 case 1:
  VAR_13 = FUNC_3(VAR_12, VAR_9);
  break;
 case 2:
  VAR_13 = FUNC_4(VAR_12, VAR_9);
  break;
 case 4:
  VAR_13 = FUNC_5(VAR_12, VAR_9);
  break;
 default:
  VAR_13 = 0xFFFFFFFFU;
 }

 return (VAR_13);

}
