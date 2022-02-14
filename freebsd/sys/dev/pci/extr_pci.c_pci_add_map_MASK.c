
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint16_t ;
typedef int u_long ;
struct resource_list {int dummy; } ;
struct resource {int dummy; } ;
struct pci_map {int pm_value; } ;
typedef int pci_addr_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int ,char*,int ,int ,int ,int ,int) ;
 struct pci_map* FUNC_4 (int ,int,int,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int ,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 struct pci_map* FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 char* FUNC_16 (int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int,int*,int*,int *) ;
 int FUNC_20 (int ,int ,int) ;
 int FUNC_21 (int ,struct pci_map*,int) ;
 int FUNC_22 (int ,int ,int ,int) ;
 int FUNC_23 (char*,...) ;
 int FUNC_24 (struct resource_list*,int,int,int,int,int) ;
 int FUNC_25 (struct resource_list*,int,int) ;
 struct resource* FUNC_26 (struct resource_list*,int ,int ,int,int*,int,int,int,int) ;
 int FUNC_27 (struct resource*) ;

__attribute__((used)) static int
FUNC_28(device_t VAR_13, device_t VAR_14, int VAR_15, struct resource_list *VAR_16,
    int VAR_17, int VAR_18)
{
 struct pci_map *VAR_19;
 pci_addr_t VAR_20, VAR_21, VAR_22;
 pci_addr_t VAR_23, VAR_24, VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 uint16_t VAR_32;
 struct resource *VAR_33;





 VAR_19 = FUNC_6(VAR_14, VAR_15);
 if (VAR_19 != ((void*)0)) {
  VAR_29 = FUNC_14(VAR_19->pm_value);
  VAR_26 = VAR_29 == 64 ? 2 : 1;
  return (VAR_26);
 }

 FUNC_19(VAR_14, VAR_15, &VAR_21, &VAR_22, ((void*)0));
 if (FUNC_1(VAR_21)) {
  VAR_31 = VAR_8;
  if (VAR_21 & VAR_1)
   VAR_18 = 1;
 } else
  VAR_31 = VAR_7;
 VAR_30 = FUNC_15(VAR_22);
 VAR_20 = FUNC_13(VAR_21);



 VAR_27 = VAR_20 == 0;

 VAR_29 = FUNC_14(VAR_21);
 VAR_26 = VAR_29 == 64 ? 2 : 1;
 if (FUNC_0(VAR_22) && (VAR_22 & VAR_0) != 0)
  return (VAR_26);
 if ((VAR_31 == VAR_8 && VAR_30 < 4) ||
     (VAR_31 == VAR_7 && VAR_30 < 2))
  return (VAR_26);


 VAR_19 = FUNC_4(VAR_14, VAR_15, VAR_21, VAR_30);
 if (VAR_9) {
  FUNC_23("\tmap[%02x]: type %s, range %2d, base %#jx, size %2d",
      VAR_15, FUNC_16(VAR_21), VAR_29, (uintmax_t)VAR_20, VAR_30);
  if (VAR_31 == VAR_7 && !FUNC_18(VAR_14))
   FUNC_23(", port disabled\n");
  else if (VAR_31 == VAR_8 && !FUNC_17(VAR_14))
   FUNC_23(", memory disabled\n");
  else
   FUNC_23(", enabled\n");
 }
 if (!VAR_17 && (VAR_27 || VAR_21 == VAR_22))
  return (VAR_26);
 if ((u_long)VAR_20 != VAR_20) {
  FUNC_3(VAR_13,
      "pci%d:%d:%d:%d bar %#x too many address bits",
      FUNC_9(VAR_14), FUNC_7(VAR_14), FUNC_11(VAR_14),
      FUNC_10(VAR_14), VAR_15);
  return (VAR_26);
 }
 if (VAR_12) {

  if (VAR_31 == VAR_7 && !FUNC_18(VAR_14)) {
   VAR_32 = FUNC_20(VAR_14, VAR_4, 2);
   VAR_32 |= VAR_3;
   FUNC_22(VAR_14, VAR_4, VAR_32, 2);
  }
  if (VAR_31 == VAR_8 && !FUNC_17(VAR_14)) {
   VAR_32 = FUNC_20(VAR_14, VAR_4, 2);
   VAR_32 |= VAR_2;
   FUNC_22(VAR_14, VAR_4, VAR_32, 2);
  }
 } else {
  if (VAR_31 == VAR_7 && !FUNC_18(VAR_14))
   return (VAR_26);
  if (VAR_31 == VAR_8 && !FUNC_17(VAR_14))
   return (VAR_26);
 }

 VAR_25 = (pci_addr_t)1 << VAR_30;
 VAR_28 = FUNC_2(VAR_30);
 if (VAR_18)
  VAR_28 |= VAR_6;
 if (VAR_27 || VAR_20 == FUNC_13(VAR_22) || VAR_10) {
  VAR_23 = 0;
  VAR_24 = ~0;
 } else {
  VAR_23 = VAR_20;
  VAR_24 = VAR_20 + VAR_25 - 1;
 }
 FUNC_24(VAR_16, VAR_31, VAR_15, VAR_23, VAR_24, VAR_25);







 VAR_33 = FUNC_26(VAR_16, VAR_13, VAR_14, VAR_31, &VAR_15, VAR_23, VAR_24, VAR_25,
     VAR_28);
 if ((VAR_11
  || FUNC_12(FUNC_8(VAR_14), VAR_5))
     && VAR_33 == ((void*)0) && (VAR_23 != 0 || VAR_24 != ~0)) {






  FUNC_25(VAR_16, VAR_31, VAR_15);
  FUNC_24(VAR_16, VAR_31, VAR_15, 0, ~0, VAR_25);
  VAR_33 = FUNC_26(VAR_16, VAR_13, VAR_14, VAR_31, &VAR_15, 0, ~0,
      VAR_25, VAR_28);
 }
 if (VAR_33 == ((void*)0)) {
  FUNC_25(VAR_16, VAR_31, VAR_15);
  FUNC_5(VAR_14, VAR_31);
  if (VAR_9)
   FUNC_3(VAR_13,
       "pci%d:%d:%d:%d bar %#x failed to allocate\n",
       FUNC_9(VAR_14), FUNC_7(VAR_14),
       FUNC_11(VAR_14), FUNC_10(VAR_14), VAR_15);
 } else {
  VAR_23 = FUNC_27(VAR_33);
  FUNC_21(VAR_14, VAR_19, VAR_23);
 }
 return (VAR_26);
}
