
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct resource {int dummy; } ;
struct generic_pcie_core_softc {TYPE_1__* ranges; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ phys_base; scalar_t__ pci_base; } ;


 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (int ) ;
 struct generic_pcie_core_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (struct resource*) ;
 scalar_t__ FUNC_5 (struct resource*) ;
 scalar_t__ FUNC_6 (struct resource*) ;
 int FUNC_7 (struct resource*,scalar_t__) ;
 int FUNC_8 (struct resource*,scalar_t__) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2, device_t VAR_3, int VAR_4,
    int VAR_5, struct resource *VAR_6)
{
 struct generic_pcie_core_softc *VAR_7;
 uint64_t VAR_8;
 uint64_t VAR_9;
 uint64_t VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_7 = FUNC_2(VAR_2);

 if ((VAR_12 = FUNC_4(VAR_6)) != 0)
  return (VAR_12);

 switch (VAR_4) {
 case 130:
 case 128:
  VAR_11 = 0;
  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
   VAR_9 = VAR_7->ranges[VAR_13].pci_base;
   VAR_8 = VAR_7->ranges[VAR_13].phys_base;
   VAR_10 = VAR_7->ranges[VAR_13].size;

   if ((FUNC_6(VAR_6) >= VAR_9) && (FUNC_6(VAR_6) < (VAR_9 + VAR_10))) {
    VAR_11 = 1;
    break;
   }
  }
  if (VAR_11) {
   FUNC_8(VAR_6, FUNC_6(VAR_6) - VAR_9 + VAR_8);
   FUNC_7(VAR_6, FUNC_5(VAR_6) - VAR_9 + VAR_8);
   VAR_12 = FUNC_0(FUNC_1(VAR_2),
       VAR_3, VAR_4, VAR_5, VAR_6);
  } else {
   FUNC_3(VAR_2,
       "Failed to activate %s resource\n",
       VAR_4 == 130 ? "IOPORT" : "MEMORY");
   VAR_12 = VAR_0;
  }
  break;
 case 129:
  VAR_12 = FUNC_0(FUNC_1(VAR_2), VAR_3,
      VAR_4, VAR_5, VAR_6);
  break;
 default:
  break;
 }

 return (VAR_12);
}
