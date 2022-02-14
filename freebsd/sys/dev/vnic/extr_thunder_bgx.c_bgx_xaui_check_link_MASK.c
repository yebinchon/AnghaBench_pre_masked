
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;
struct lmac {int lmacid; struct bgx* bgx; } ;
struct bgx {int lmac_type; int dev; scalar_t__ use_training; } ;


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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned long VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_0 (struct bgx*,int,int ,int,int ) ;
 int FUNC_1 (struct bgx*,int,int ,int) ;
 int FUNC_2 (struct bgx*,int,int ) ;
 int FUNC_3 (struct bgx*,int,int ,unsigned long) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct lmac *VAR_26)
{
 struct bgx *VAR_27 = VAR_26->bgx;
 int VAR_28 = VAR_26->lmacid;
 int VAR_29 = VAR_27->lmac_type;
 uint64_t VAR_30;

 FUNC_1(VAR_27, VAR_28, VAR_11, VAR_22);
 if (VAR_27->use_training) {
  VAR_30 = FUNC_2(VAR_27, VAR_28, VAR_10);
  if ((VAR_30 & (1UL << 13)) == 0) {
   VAR_30 = (1UL << 13) | (1UL << 14);
   FUNC_3(VAR_27, VAR_28, VAR_10, VAR_30);
   VAR_30 = FUNC_2(VAR_27, VAR_28, VAR_6);
   VAR_30 |= (1UL << 0);
   FUNC_3(VAR_27, VAR_28, VAR_6, VAR_30);
   return (VAR_14);
  }
 }


 if (FUNC_0(VAR_27, VAR_28, VAR_9,
     VAR_21, VAR_25) != 0) {
  FUNC_4(VAR_27->dev, "BGX SPU reset not completed\n");
  return (VAR_14);
 }

 if ((VAR_29 == VAR_0) || (VAR_29 == VAR_2) ||
     (VAR_29 == VAR_1) || (VAR_29 == VAR_3)) {
  if (FUNC_0(VAR_27, VAR_28, VAR_7,
      VAR_19, VAR_15)) {
   FUNC_4(VAR_27->dev,
       "SPU_BR_STATUS_BLK_LOCK not completed\n");
   return (VAR_14);
  }
 } else {
  if (FUNC_0(VAR_27, VAR_28, VAR_8,
      VAR_20, VAR_15) != 0) {
   FUNC_4(VAR_27->dev,
       "SPU_BX_STATUS_RX_ALIGN not completed\n");
   return (VAR_14);
  }
 }


 FUNC_1(VAR_27, VAR_28, VAR_13, VAR_24);
 if (FUNC_2(VAR_27, VAR_28, VAR_13) & VAR_24) {
  FUNC_4(VAR_27->dev, "Receive fault, retry training\n");
  if (VAR_27->use_training) {
   VAR_30 = FUNC_2(VAR_27, VAR_28, VAR_10);
   if ((VAR_30 & (1UL << 13)) == 0) {
    VAR_30 = (1UL << 13) | (1UL << 14);
    FUNC_3(VAR_27, VAR_28, VAR_10, VAR_30);
    VAR_30 = FUNC_2(VAR_27, VAR_28,
        VAR_6);
    VAR_30 |= (1UL << 0);
    FUNC_3(VAR_27, VAR_28,
        VAR_6, VAR_30);
    return (VAR_14);
   }
  }
  return (VAR_14);
 }


 if (FUNC_0(VAR_27, VAR_28, VAR_5,
     VAR_18, VAR_25) != 0) {
  FUNC_4(VAR_27->dev, "SMU RX link not okay\n");
  return (VAR_14);
 }


 if (FUNC_0(VAR_27, VAR_28, VAR_4,
     VAR_16, VAR_15) != 0) {
  FUNC_4(VAR_27->dev, "SMU RX not idle\n");
  return (VAR_14);
 }


 if (FUNC_0(VAR_27, VAR_28, VAR_4,
     VAR_17, VAR_15) != 0) {
  FUNC_4(VAR_27->dev, "SMU TX not idle\n");
  return (VAR_14);
 }

 if ((FUNC_2(VAR_27, VAR_28, VAR_13) &
     VAR_24) != 0) {
  FUNC_4(VAR_27->dev, "Receive fault\n");
  return (VAR_14);
 }


 FUNC_1(VAR_27, VAR_28, VAR_12, VAR_23);
 if (FUNC_0(VAR_27, VAR_28, VAR_12,
     VAR_23, VAR_15) != 0) {
  FUNC_4(VAR_27->dev, "SPU receive link down\n");
  return (VAR_14);
 }

 VAR_30 = FUNC_2(VAR_27, VAR_28, VAR_11);
 VAR_30 &= ~VAR_22;
 FUNC_3(VAR_27, VAR_28, VAR_11, VAR_30);
 return (0);
}
