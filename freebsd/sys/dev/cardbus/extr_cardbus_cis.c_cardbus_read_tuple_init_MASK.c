
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct resource* VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;







 int VAR_6 ;

 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct resource* FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (struct resource*,int) ;
 int FUNC_4 (struct resource*,int) ;
 int FUNC_5 (int ,int ,int,struct resource*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static struct resource *
FUNC_9(device_t VAR_11, device_t VAR_12, uint32_t *VAR_13,
    int *VAR_14)
{
 struct resource *VAR_15;
 uint32_t VAR_16;

 VAR_16 = *VAR_13 & VAR_6;
 switch (VAR_16) {
 case 129:
  FUNC_0((VAR_11, "CIS in PCI config space\n"));

  return (VAR_4);
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
  *VAR_14 = FUNC_1(VAR_16 - 135);
  FUNC_0((VAR_11, "CIS in BAR %#x\n", *VAR_14));
  break;
 case 128:
  *VAR_14 = VAR_8;
  FUNC_0((VAR_11, "CIS in option rom\n"));
  break;
 default:
  FUNC_6(VAR_11, "Unable to read CIS: Unknown space: %d\n",
      VAR_16);
  return (((void*)0));
 }


 VAR_15 = FUNC_2(VAR_12, VAR_10, VAR_14,
     FUNC_8(4096) | VAR_9);
 if (VAR_15 == ((void*)0)) {
  FUNC_6(VAR_11, "Unable to allocate resource "
      "to read CIS.\n");
  return (((void*)0));
 }
 FUNC_0((VAR_11, "CIS Mapped to %#jx\n",
     FUNC_7(VAR_15)));


 if (VAR_16 == 128) {
  uint32_t VAR_17;
  uint32_t VAR_18 = 0;
  uint32_t VAR_19;
  uint16_t VAR_20;
  int VAR_21 = 0;
  int VAR_22;

  VAR_22 = (*VAR_13 & VAR_7) >> 28;
  for (VAR_21 = 0;; VAR_21++) {
   VAR_20 = FUNC_4(VAR_15,
       VAR_18 + VAR_3);
   if (VAR_20 != 0xaa55) {
    FUNC_6(VAR_11, "Bad header in rom %d: "
        "[%x] %04x\n", VAR_21, VAR_18 +
        VAR_3, VAR_20);
    FUNC_5(VAR_11, VAR_12, *VAR_14,
        VAR_15);
    *VAR_14 = 0;
    return (((void*)0));
   }





   if (VAR_21 == VAR_22)
    break;


   VAR_19 = VAR_18 + FUNC_4(VAR_15,
       VAR_18 + VAR_2);
   VAR_17 = FUNC_4(VAR_15,
       VAR_19 + VAR_0);

   if (VAR_17 == 0) {




    FUNC_6(VAR_11, "Warning, size of Option "
        "ROM image %d is 0 bytes, assuming 512 "
        "bytes.\n", VAR_21);
    VAR_17 = 1;
   }


   VAR_17 <<= 9;

   if ((FUNC_3(VAR_15, VAR_19 +
       VAR_1) & 0x80) != 0) {
    FUNC_6(VAR_11, "Cannot find CIS in "
        "Option ROM\n");
    FUNC_5(VAR_11, VAR_12, *VAR_14,
        VAR_15);
    *VAR_14 = 0;
    return (((void*)0));
   }
   VAR_18 += VAR_17;
  }
  *VAR_13 = VAR_18 + (*VAR_13 & VAR_5);
 } else {
  *VAR_13 = *VAR_13 & VAR_5;
 }
 FUNC_0((VAR_11, "CIS offset is %#x\n", *VAR_13));

 return (VAR_15);
}
