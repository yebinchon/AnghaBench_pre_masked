
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_22 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int FUNC_5 (struct e1000_hw*,int ,int,int) ;
 scalar_t__ VAR_23 ;
 int FUNC_6 (int) ;

s32 FUNC_7(struct e1000_hw *VAR_24, u8 *VAR_25, u32 VAR_26)
{
 u32 VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;

 FUNC_0("e1000_load_firmware");

 if (VAR_24->mac.type < VAR_23) {
  FUNC_1("Hardware doesn't support loading FW by the driver\n");
  return -VAR_0;
 }


 VAR_27 = FUNC_2(VAR_24, VAR_9);
 if (!(VAR_27 & VAR_11)) {
  FUNC_1("E1000_HOST_EN bit disabled.\n");
  return -VAR_0;
 }
 if (!(VAR_27 & VAR_14)) {
  FUNC_1("E1000_HICR_MEMORY_BASE_EN bit disabled.\n");
  return -VAR_0;
 }

 if (VAR_26 == 0 || VAR_26 & 0x3 || VAR_26 > VAR_18) {
  FUNC_1("Buffer length failure.\n");
  return -VAR_2;
 }


 VAR_30 = FUNC_2(VAR_24, VAR_21);


 VAR_27 = FUNC_2(VAR_24, VAR_9);
 VAR_27 |= VAR_13;
 FUNC_4(VAR_24, VAR_9, VAR_27);
 VAR_27 |= VAR_12;
 FUNC_4(VAR_24, VAR_9, VAR_27);
 FUNC_3(VAR_24);


 for (VAR_31 = 0; VAR_31 < (VAR_15 * 2); VAR_31++) {
  VAR_30 = FUNC_2(VAR_24, VAR_21);
  if (VAR_30 & VAR_20)
   break;
  FUNC_6(1);
 }


 if (VAR_31 == VAR_15) {
  FUNC_1("FW reset failed.\n");
  return -VAR_1;
 }


 for (VAR_31 = 0; VAR_31 < VAR_15; VAR_31++) {
  VAR_29 = FUNC_2(VAR_24, VAR_3);
  if ((VAR_29 & VAR_4) &&
      ((VAR_29 & VAR_6) >> VAR_7 ==
      VAR_5))
   break;
  FUNC_6(1);
 }


 if (VAR_31 == VAR_15) {
  FUNC_1("FW reset failed.\n");
  return -VAR_1;
 }


 VAR_26 >>= 2;




 for (VAR_31 = 0; VAR_31 < VAR_26; VAR_31++) {
  if (!(VAR_31 % VAR_17)) {

   VAR_28 = VAR_16 +
    ((VAR_17 << 2) *
    (VAR_31 / VAR_17));

   FUNC_4(VAR_24, VAR_8, VAR_28);
  }

  FUNC_5(VAR_24, VAR_19,
         VAR_31 % VAR_17,
         *((u32 *)VAR_25 + VAR_31));
 }


 VAR_27 = FUNC_2(VAR_24, VAR_9);
 FUNC_4(VAR_24, VAR_9, VAR_27 | VAR_10);

 for (VAR_31 = 0; VAR_31 < VAR_15; VAR_31++) {
  VAR_27 = FUNC_2(VAR_24, VAR_9);
  if (!(VAR_27 & VAR_10))
   break;
  FUNC_6(1);
 }


 if (VAR_31 == VAR_15) {
  FUNC_1("New FW did not start within timeout period.\n");
  return -VAR_1;
 }

 return VAR_22;
}
