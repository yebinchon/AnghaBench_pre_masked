
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int* high_water; int* low_water; int pause_time; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_2__ fc; TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 int FUNC_4 (int) ;
 int VAR_13 ;
 int FUNC_5 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ VAR_14 ;

s32 FUNC_6(struct ixgbe_hw *VAR_15, u8 VAR_16, u8 *VAR_17)
{
 u32 VAR_18, VAR_19, VAR_20, VAR_21;
 u8 VAR_22 = 0;


 FUNC_5(VAR_15, VAR_2, VAR_3);


 VAR_21 = FUNC_3(VAR_15, VAR_7);
 VAR_21 |= VAR_8;






 VAR_21 &= ~(VAR_11 | VAR_9);

 if (VAR_15->mac.type >= VAR_14)
  VAR_21 |= VAR_16 << VAR_12;

 if (VAR_16)
  VAR_21 |= VAR_10;

 FUNC_5(VAR_15, VAR_7, VAR_21);

 for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++) {
  if (VAR_17[VAR_18] > VAR_22)
   VAR_22 = VAR_17[VAR_18];
 }



 for (VAR_18 = 0; VAR_18 <= VAR_22; VAR_18++) {
  int VAR_23 = 0;

  for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++) {
   if ((VAR_17[VAR_19] == VAR_18) && (VAR_16 & (1 << VAR_19))) {
    VAR_23 = 1;
    break;
   }
  }

  if (VAR_23) {
   VAR_21 = (VAR_15->fc.high_water[VAR_18] << 10) | VAR_4;
   VAR_20 = (VAR_15->fc.low_water[VAR_18] << 10) | VAR_5;
   FUNC_5(VAR_15, FUNC_1(VAR_18), VAR_20);
  } else {







   VAR_21 = FUNC_3(VAR_15, FUNC_4(VAR_18)) - 24576;
   FUNC_5(VAR_15, FUNC_1(VAR_18), 0);
  }

  FUNC_5(VAR_15, FUNC_0(VAR_18), VAR_21);
 }

 for (; VAR_18 < VAR_0; VAR_18++) {
  FUNC_5(VAR_15, FUNC_1(VAR_18), 0);
  FUNC_5(VAR_15, FUNC_0(VAR_18), 0);
 }


 VAR_21 = VAR_15->fc.pause_time | (VAR_15->fc.pause_time << 16);
 for (VAR_18 = 0; VAR_18 < (VAR_0 / 2); VAR_18++)
  FUNC_5(VAR_15, FUNC_2(VAR_18), VAR_21);


 FUNC_5(VAR_15, VAR_6, VAR_15->fc.pause_time / 2);

 return VAR_13;
}
