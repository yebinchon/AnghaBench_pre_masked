
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_5416 {int ah_rx_chainmask; } ;
struct ath_hal {int dummy; } ;
typedef int int16_t ;


 struct ath_hal_5416* FUNC_0 (struct ath_hal*) ;
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
 int FUNC_1 (struct ath_hal*,int ,char*,int) ;
 int VAR_12 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ath_hal*,int ) ;

__attribute__((used)) static void
FUNC_4(struct ath_hal *VAR_13, int16_t VAR_14[])
{
 struct ath_hal_5416 *VAR_15 = FUNC_0(VAR_13);
 int16_t VAR_16;





 VAR_14[0] = VAR_14[1] = VAR_14[2] = 0;
 VAR_14[3] = VAR_14[4] = VAR_14[5] = 0;

 switch (VAR_15->ah_rx_chainmask) {
        case 0x7:
  VAR_16 = FUNC_2(FUNC_3(VAR_13, VAR_5), VAR_8);
  if (VAR_16 & 0x100)
   VAR_16 = 0 - ((VAR_16 ^ 0x1ff) + 1);
  FUNC_1(VAR_13, VAR_12,
      "NF calibrated [ctl] [chain 2] is %d\n", VAR_16);
  VAR_14[2] = VAR_16;

  VAR_16 = FUNC_2(FUNC_3(VAR_13, VAR_6), VAR_7);
  if (VAR_16 & 0x100)
   VAR_16 = 0 - ((VAR_16 ^ 0x1ff) + 1);
  FUNC_1(VAR_13, VAR_12,
      "NF calibrated [ext] [chain 2] is %d\n", VAR_16);
  VAR_14[5] = VAR_16;

        case 0x3:
        case 0x5:
  VAR_16 = FUNC_2(FUNC_3(VAR_13, VAR_1), VAR_4);
  if (VAR_16 & 0x100)
   VAR_16 = 0 - ((VAR_16 ^ 0x1ff) + 1);
  FUNC_1(VAR_13, VAR_12,
      "NF calibrated [ctl] [chain 1] is %d\n", VAR_16);
  VAR_14[1] = VAR_16;


  VAR_16 = FUNC_2(FUNC_3(VAR_13, VAR_2), VAR_3);
  if (VAR_16 & 0x100)
   VAR_16 = 0 - ((VAR_16 ^ 0x1ff) + 1);
  FUNC_1(VAR_13, VAR_12,
      "NF calibrated [ext] [chain 1] is %d\n", VAR_16);
  VAR_14[4] = VAR_16;

        case 0x1:
  VAR_16 = FUNC_2(FUNC_3(VAR_13, VAR_0), VAR_11);
  if (VAR_16 & 0x100)
   VAR_16 = 0 - ((VAR_16 ^ 0x1ff) + 1);
  FUNC_1(VAR_13, VAR_12,
      "NF calibrated [ctl] [chain 0] is %d\n", VAR_16);
  VAR_14[0] = VAR_16;

  VAR_16 = FUNC_2(FUNC_3(VAR_13, VAR_9), VAR_10);
  if (VAR_16 & 0x100)
   VAR_16 = 0 - ((VAR_16 ^ 0x1ff) + 1);
  FUNC_1(VAR_13, VAR_12,
      "NF calibrated [ext] [chain 0] is %d\n", VAR_16);
  VAR_14[3] = VAR_16;

  break;
 }
}
