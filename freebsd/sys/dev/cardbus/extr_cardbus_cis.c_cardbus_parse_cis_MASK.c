
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct tuple_callbacks {int dummy; } ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ,int ,struct resource*,scalar_t__,scalar_t__*,int*,int*,int *) ;
 int FUNC_2 (int ,int ,int,struct resource*) ;
 struct resource* FUNC_3 (int ,int ,scalar_t__*,int*) ;
 int FUNC_4 (int ,int ,int,int,int *,scalar_t__,scalar_t__*,struct tuple_callbacks*,void*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (int ,int ,int) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;

int
FUNC_9(device_t VAR_11, device_t VAR_12,
    struct tuple_callbacks *VAR_13, void *VAR_14)
{
 uint8_t *VAR_15;
 int VAR_16 = VAR_2;
 int VAR_17;
 int VAR_18;
 uint32_t VAR_19, VAR_20;
 struct resource *VAR_21;
 int VAR_22;

 VAR_15 = FUNC_7(VAR_5, VAR_6, VAR_7 | VAR_8);
 VAR_18 = VAR_10;
 if ((VAR_19 = FUNC_8(VAR_12, VAR_9, 4)) == 0) {
  FUNC_0((VAR_11, "Warning: CIS pointer is 0: (no CIS)\n"));
  FUNC_6(VAR_15, VAR_6);
  return (0);
 }
 FUNC_0((VAR_11, "CIS pointer is %#x\n", VAR_19));
 VAR_20 = 0;
 VAR_21 = FUNC_3(VAR_11, VAR_12, &VAR_19, &VAR_22);
 if (VAR_21 == ((void*)0)) {
  FUNC_5(VAR_11, "Unable to allocate resources for CIS\n");
  FUNC_6(VAR_15, VAR_6);
  return (VAR_4);
 }

 do {
  if (FUNC_1(VAR_11, VAR_12, VAR_21, VAR_19, &VAR_20,
      &VAR_16, &VAR_17, VAR_15) != 0) {
   FUNC_5(VAR_11, "Failed to read CIS.\n");
   FUNC_2(VAR_11, VAR_12, VAR_22, VAR_21);
   FUNC_6(VAR_15, VAR_6);
   return (VAR_4);
  }

  if (VAR_18 && VAR_16 != VAR_1) {
   FUNC_5(VAR_11, "Expecting link target, got 0x%x\n",
       VAR_16);
   FUNC_2(VAR_11, VAR_12, VAR_22, VAR_21);
   FUNC_6(VAR_15, VAR_6);
   return (VAR_3);
  }
  VAR_18 = FUNC_4(VAR_11, VAR_12, VAR_16, VAR_17,
      VAR_15, VAR_19, &VAR_20, VAR_13, VAR_14);
  if (VAR_18 != 0) {
   FUNC_5(VAR_11, "Parsing failed with %d\n",
       VAR_18);
   FUNC_2(VAR_11, VAR_12, VAR_22, VAR_21);
   FUNC_6(VAR_15, VAR_6);
   return (VAR_18);
  }
 } while (VAR_16 != VAR_0);
 FUNC_2(VAR_11, VAR_12, VAR_22, VAR_21);
 FUNC_6(VAR_15, VAR_6);
 return (0);
}
