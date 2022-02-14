
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (void*,int ,int*,int) ;
 int FUNC_1 (void*,int ,int) ;
 scalar_t__ VAR_18 ;
 int FUNC_2 (char*,char*,char*,int *) ;
 int FUNC_3 (void*,char*,...) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_19)
{
 device_t VAR_20;
 uint8_t VAR_21;
 int VAR_22;

 VAR_20 = VAR_19;

 VAR_22 = FUNC_0(VAR_20, VAR_0, &VAR_21, 1);
 if (VAR_22 != 0)
  return;

 if (VAR_21) {
  if (VAR_18)
   FUNC_3(VAR_20, "AXP_IRQSTAT1 val: %x\n", VAR_21);
  if (VAR_21 & VAR_1)
   FUNC_2("PMU", "AC", "plugged", ((void*)0));
  if (VAR_21 & VAR_2)
   FUNC_2("PMU", "AC", "unplugged", ((void*)0));
  if (VAR_21 & VAR_3)
   FUNC_2("PMU", "USB", "plugged", ((void*)0));
  if (VAR_21 & VAR_4)
   FUNC_2("PMU", "USB", "unplugged", ((void*)0));

  FUNC_1(VAR_20, VAR_0, VAR_21);
 }

 VAR_22 = FUNC_0(VAR_20, VAR_5, &VAR_21, 1);
 if (VAR_22 != 0)
  return;

 if (VAR_21) {
  if (VAR_18)
   FUNC_3(VAR_20, "AXP_IRQSTAT2 val: %x\n", VAR_21);
  if (VAR_21 & VAR_7)
   FUNC_2("PMU", "Battery", "charged", ((void*)0));
  if (VAR_21 & VAR_6)
   FUNC_2("PMU", "Battery", "charging", ((void*)0));
  if (VAR_21 & VAR_9)
   FUNC_2("PMU", "Battery", "absent", ((void*)0));
  if (VAR_21 & VAR_8)
   FUNC_2("PMU", "Battery", "plugged", ((void*)0));

  FUNC_1(VAR_20, VAR_5, VAR_21);
 }

 VAR_22 = FUNC_0(VAR_20, VAR_10, &VAR_21, 1);
 if (VAR_22 != 0)
  return;

 if (VAR_21) {

  FUNC_1(VAR_20, VAR_10, VAR_21);
 }

 VAR_22 = FUNC_0(VAR_20, VAR_11, &VAR_21, 1);
 if (VAR_22 != 0)
  return;

 if (VAR_21) {
  if (VAR_18)
   FUNC_3(VAR_20, "AXP_IRQSTAT4 val: %x\n", VAR_21);
  if (VAR_21 & VAR_12)
   FUNC_2("PMU", "Battery", "shutdown threshold", ((void*)0));
  if (VAR_21 & VAR_13)
   FUNC_2("PMU", "Battery", "warning threshold", ((void*)0));

  FUNC_1(VAR_20, VAR_11, VAR_21);
 }

 VAR_22 = FUNC_0(VAR_20, VAR_14, &VAR_21, 1);
 if (VAR_22 != 0)
  return;

 if (VAR_21 != 0) {
  if ((VAR_21 & VAR_15) != 0) {
   if (VAR_18)
    FUNC_3(VAR_20, "Power button pressed\n");
   FUNC_4(VAR_17);
  }

  FUNC_1(VAR_20, VAR_14, VAR_21);
 }

 VAR_22 = FUNC_0(VAR_20, VAR_16, &VAR_21, 1);
 if (VAR_22 != 0)
  return;

 if (VAR_21) {

  FUNC_1(VAR_20, VAR_16, VAR_21);
 }
}
