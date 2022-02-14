
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct davinci_audio_dev {int num_serializer; scalar_t__* serial_dir; int txnumevt; int rxnumevt; scalar_t__ base; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,int,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_6(struct davinci_audio_dev *VAR_19, int VAR_20)
{
 int VAR_21;
 u8 VAR_22 = 0;
 u8 VAR_23 = 0;


 FUNC_4(VAR_19->base + VAR_2, VAR_10);


 FUNC_5(VAR_19->base + VAR_1, 0x00000000);

 if (VAR_20 == VAR_16) {
  FUNC_5(VAR_19->base + VAR_6, 0xFFFFFFFF);
  FUNC_2(VAR_19->base + VAR_8,
    VAR_17);
 } else {
  FUNC_5(VAR_19->base + VAR_5, 0xFFFFFFFF);
  FUNC_2(VAR_19->base + VAR_3,
    VAR_13);
 }

 for (VAR_21 = 0; VAR_21 < VAR_19->num_serializer; VAR_21++) {
  FUNC_4(VAR_19->base + FUNC_1(VAR_21),
     VAR_19->serial_dir[VAR_21]);
  if (VAR_19->serial_dir[VAR_21] == VAR_18) {
   FUNC_4(VAR_19->base + VAR_0,
     FUNC_0(VAR_21));
   VAR_22++;
  } else if (VAR_19->serial_dir[VAR_21] == VAR_14) {
   FUNC_2(VAR_19->base + VAR_0,
     FUNC_0(VAR_21));
   VAR_23++;
  }
 }

 if (VAR_19->txnumevt && VAR_20 == VAR_16) {
  if (VAR_19->txnumevt * VAR_22 > 64)
   VAR_19->txnumevt = 1;

  FUNC_3(VAR_19->base + VAR_7, VAR_22,
        VAR_11);
  FUNC_3(VAR_19->base + VAR_7,
    ((VAR_19->txnumevt * VAR_22) << 8), VAR_12);
  FUNC_4(VAR_19->base + VAR_7, VAR_9);
 }

 if (VAR_19->rxnumevt && VAR_20 == VAR_15) {
  if (VAR_19->rxnumevt * VAR_23 > 64)
   VAR_19->rxnumevt = 1;

  FUNC_3(VAR_19->base + VAR_4, VAR_23,
        VAR_11);
  FUNC_3(VAR_19->base + VAR_4,
    ((VAR_19->rxnumevt * VAR_23) << 8), VAR_12);
  FUNC_4(VAR_19->base + VAR_4, VAR_9);
 }
}
