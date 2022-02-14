
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ mac; } ;
struct adapter {int dmac; TYPE_1__* shared; struct e1000_hw hw; int dev; } ;
typedef int device_t ;
struct TYPE_3__ {int isc_max_frame_size; } ;


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
 int FUNC_0 (struct e1000_hw*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct e1000_hw*,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;

__attribute__((used)) static void
FUNC_3(struct adapter *VAR_22, u32 VAR_23)
{
 device_t VAR_24 = VAR_22->dev;
 struct e1000_hw *VAR_25 = &VAR_22->hw;
 u32 VAR_26, VAR_27 = ~VAR_3;
 u16 VAR_28;
 u16 VAR_29;

 if (VAR_25->mac.type == VAR_19)
  return;

 VAR_29 = VAR_22->shared->isc_max_frame_size;
 if (VAR_25->mac.type > VAR_18) {

  if (VAR_22->dmac == 0) {
   FUNC_1(VAR_25, VAR_0, VAR_27);
   return;
  } else
   FUNC_2(VAR_24, "DMA Coalescing enabled\n");


  FUNC_1(VAR_25, VAR_7, 0);

  VAR_28 = 64 * VAR_23 - VAR_29 / 16;
  if (VAR_28 < 64 * (VAR_23 - 6))
   VAR_28 = 64 * (VAR_23 - 6);
  VAR_27 = FUNC_0(VAR_25, VAR_8);
  VAR_27 &= ~VAR_9;
  VAR_27 |= ((VAR_28 << VAR_10)
      & VAR_9);
  FUNC_1(VAR_25, VAR_8, VAR_27);


  VAR_26 = VAR_23 - VAR_29 / 512;
  if (VAR_26 < VAR_23 - 10)
   VAR_26 = VAR_23 - 10;
  VAR_27 = FUNC_0(VAR_25, VAR_0);
  VAR_27 &= ~VAR_1;
  VAR_27 |= ((VAR_26 << VAR_2)
      & VAR_1);


  VAR_27 |= (VAR_3 | VAR_4);







  if (VAR_25->mac.type == VAR_21) {
   int VAR_30 = FUNC_0(VAR_25, VAR_13);
   if ((VAR_30 & VAR_14) &&
       (!(VAR_30 & VAR_15)))
    VAR_27 |= ((VAR_22->dmac * 5) >> 6);
   else
    VAR_27 |= (VAR_22->dmac >> 5);
  } else {
   VAR_27 |= (VAR_22->dmac >> 5);
  }

  FUNC_1(VAR_25, VAR_0, VAR_27);

  FUNC_1(VAR_25, VAR_5, 0);


  VAR_27 = FUNC_0(VAR_25, VAR_6);
  if (VAR_25->mac.type == VAR_20)
   VAR_27 |= VAR_16;




  if (VAR_25->mac.type == VAR_21) {
   int VAR_31 = FUNC_0(VAR_25, VAR_13);
   if ((VAR_31 & VAR_14) &&
       (!(VAR_31 & VAR_15)))
    VAR_27 |= 0xA;
   else
    VAR_27 |= 0x4;
  } else {
   VAR_27 |= 0x4;
  }

  FUNC_1(VAR_25, VAR_6, VAR_27);


  FUNC_1(VAR_25, VAR_7, (VAR_17 -
      (2 * VAR_29)) >> 6);


  VAR_27 = FUNC_0(VAR_25, VAR_11);
  VAR_27 &= ~VAR_12;
  FUNC_1(VAR_25, VAR_11, VAR_27);

 } else if (VAR_25->mac.type == VAR_18) {
  u32 VAR_32 = FUNC_0(VAR_25, VAR_11);
  FUNC_1(VAR_25, VAR_11,
      VAR_32 & ~VAR_12);
  FUNC_1(VAR_25, VAR_0, 0);
 }
}
