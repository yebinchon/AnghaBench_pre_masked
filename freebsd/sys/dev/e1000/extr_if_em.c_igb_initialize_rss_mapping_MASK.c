
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct adapter {int rx_num_queues; struct e1000_hw hw; } ;
typedef int rss_key ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int FUNC_3 (struct e1000_hw*,int ,int,int) ;
 int FUNC_4 (int**,int,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct adapter *VAR_11)
{
 struct e1000_hw *VAR_12 = &VAR_11->hw;
 int VAR_13;
 int VAR_14;
 u32 VAR_15;
 u32 VAR_16[10], VAR_17, VAR_18 = 0;


 if (VAR_11->hw.mac.type == VAR_10)
  VAR_18 = 6;
 VAR_15 = 0;
 for (VAR_13 = 0; VAR_13 < 128; VAR_13++) {
  VAR_14 = (VAR_13 % VAR_11->rx_num_queues);


  VAR_14 = VAR_14 << VAR_18;





  VAR_15 = VAR_15 >> 8;
  VAR_15 = VAR_15 | ( ((uint32_t) VAR_14) << 24);
  if ((VAR_13 & 3) == 3) {
   FUNC_2(VAR_12, FUNC_0(VAR_13 >> 2), VAR_15);
   VAR_15 = 0;
  }
 }







 VAR_17 = VAR_1;





 FUNC_4(&VAR_16, sizeof(VAR_16), 0);

 for (VAR_13 = 0; VAR_13 < 10; VAR_13++)
  FUNC_3(VAR_12, FUNC_1(0), VAR_13, VAR_16[VAR_13]);




 VAR_17 |= (VAR_2 |
     VAR_3);
 VAR_17 |= (VAR_5 |
     VAR_6);
 VAR_17 |=( VAR_4 |
     VAR_8);
 VAR_17 |=( VAR_9 |
     VAR_7);

 FUNC_2(VAR_12, VAR_0, VAR_17);
}
