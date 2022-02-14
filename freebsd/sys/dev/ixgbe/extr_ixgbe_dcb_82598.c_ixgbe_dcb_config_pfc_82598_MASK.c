
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int* low_water; int* high_water; int pause_time; } ;
struct ixgbe_hw {TYPE_1__ fc; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;

s32 FUNC_5(struct ixgbe_hw *VAR_11, u8 VAR_12)
{
 u32 VAR_13, VAR_14;
 u8 VAR_15;


 VAR_14 = FUNC_3(VAR_11, VAR_7);
 VAR_14 &= ~VAR_8;
 VAR_14 |= VAR_9;
 FUNC_4(VAR_11, VAR_7, VAR_14);


 VAR_14 = FUNC_3(VAR_11, VAR_4);
 VAR_14 &= ~(VAR_6 | VAR_5);

 if (VAR_12)
  VAR_14 |= VAR_6;

 FUNC_4(VAR_11, VAR_4, VAR_14);


 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
  if (!(VAR_12 & (1 << VAR_15))) {
   FUNC_4(VAR_11, FUNC_1(VAR_15), 0);
   FUNC_4(VAR_11, FUNC_0(VAR_15), 0);
   continue;
  }

  VAR_13 = (VAR_11->fc.low_water[VAR_15] << 10) | VAR_2;
  VAR_14 = (VAR_11->fc.high_water[VAR_15] << 10) | VAR_1;
  FUNC_4(VAR_11, FUNC_1(VAR_15), VAR_13);
  FUNC_4(VAR_11, FUNC_0(VAR_15), VAR_14);
 }


 VAR_14 = VAR_11->fc.pause_time | (VAR_11->fc.pause_time << 16);
 for (VAR_15 = 0; VAR_15 < (VAR_0 / 2); VAR_15++)
  FUNC_4(VAR_11, FUNC_2(VAR_15), VAR_14);


 FUNC_4(VAR_11, VAR_3, VAR_11->fc.pause_time / 2);

 return VAR_10;
}
