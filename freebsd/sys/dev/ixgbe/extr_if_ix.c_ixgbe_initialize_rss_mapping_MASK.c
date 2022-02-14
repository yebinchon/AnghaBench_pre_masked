
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct adapter {int feat_en; int num_rx_queues; int iov_mode; struct ixgbe_hw hw; } ;
typedef int rss_key ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (int**,int,int ) ;
 int FUNC_5 (int ) ;




 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct adapter *VAR_21)
{
 struct ixgbe_hw *VAR_22 = &VAR_21->hw;
 u32 VAR_23 = 0, VAR_24, VAR_25[10];
 int VAR_26, VAR_27, VAR_28;
 int VAR_29, VAR_30;
 u32 VAR_31;

 if (VAR_21->feat_en & VAR_0) {

  FUNC_8((uint8_t *)&VAR_25);
 } else {

  FUNC_4(&VAR_25, sizeof(VAR_25), 0);
 }


 VAR_28 = 0x1;
 VAR_27 = 128;
 switch (VAR_21->hw.mac.type) {
 case 131:
  VAR_28 = 0x11;
  break;
 case 130:
 case 128:
 case 129:
  VAR_27 = 512;
  break;
 default:
  break;
 }


 for (VAR_29 = 0, VAR_30 = 0; VAR_29 < VAR_27; VAR_29++, VAR_30++) {
  if (VAR_30 == VAR_21->num_rx_queues)
   VAR_30 = 0;

  if (VAR_21->feat_en & VAR_0) {





   VAR_26 = FUNC_6(VAR_29);
   VAR_26 = VAR_26 % VAR_21->num_rx_queues;
  } else
   VAR_26 = (VAR_30 * VAR_28);





  VAR_23 = VAR_23 >> 8;
  VAR_23 = VAR_23 | (((uint32_t)VAR_26) << 24);
  if ((VAR_29 & 3) == 3) {
   if (VAR_29 < 128)
    FUNC_3(VAR_22, FUNC_1(VAR_29 >> 2), VAR_23);
   else
    FUNC_3(VAR_22, FUNC_0((VAR_29 >> 2) - 32),
        VAR_23);
   VAR_23 = 0;
  }
 }


 for (VAR_29 = 0; VAR_29 < 10; VAR_29++)
  FUNC_3(VAR_22, FUNC_2(VAR_29), VAR_25[VAR_29]);


 if (VAR_21->feat_en & VAR_0)
  VAR_31 = FUNC_7();
 else {





  VAR_31 = VAR_12
                  | VAR_15
                  | VAR_13
                  | VAR_16
                  | VAR_14
                  | VAR_17;
 }

 VAR_24 = VAR_2;
 if (VAR_31 & VAR_12)
  VAR_24 |= VAR_3;
 if (VAR_31 & VAR_15)
  VAR_24 |= VAR_4;
 if (VAR_31 & VAR_13)
  VAR_24 |= VAR_6;
 if (VAR_31 & VAR_16)
  VAR_24 |= VAR_10;
 if (VAR_31 & VAR_14)
  VAR_24 |= VAR_7;
 if (VAR_31 & VAR_17)
  VAR_24 |= VAR_8;
 if (VAR_31 & VAR_18)
  VAR_24 |= VAR_5;
 if (VAR_31 & VAR_19)
  VAR_24 |= VAR_11;
 if (VAR_31 & VAR_20)
  VAR_24 |= VAR_9;
 VAR_24 |= FUNC_5(VAR_21->iov_mode);
 FUNC_3(VAR_22, VAR_1, VAR_24);
}
