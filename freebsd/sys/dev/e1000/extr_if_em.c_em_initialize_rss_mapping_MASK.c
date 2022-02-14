
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct e1000_hw {int dummy; } ;
struct adapter {int rx_num_queues; struct e1000_hw hw; } ;
typedef int rss_key ;
typedef int reta ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_7 ;
 int FUNC_4 (int *,int,int ) ;

__attribute__((used)) static void
FUNC_5(struct adapter *VAR_8)
{
 uint8_t VAR_9[4 * VAR_7];
 uint32_t VAR_10 = 0;
 struct e1000_hw *VAR_11 = &VAR_8->hw;
 int VAR_12;




 FUNC_4(VAR_9, sizeof(VAR_9), 0);
 for (VAR_12 = 0; VAR_12 < VAR_7; ++VAR_12) {
  uint32_t VAR_13 = 0;

  VAR_13 = FUNC_3(VAR_9, VAR_12);
  FUNC_2(VAR_11,FUNC_1(VAR_12), VAR_13);
 }





 for (VAR_12 = 0; VAR_12 < sizeof(VAR_10); ++VAR_12) {
  uint32_t VAR_14;

  VAR_14 = (VAR_12 % VAR_8->rx_num_queues) << 7;
  VAR_10 |= VAR_14 << (8 * VAR_12);
 }

 for (VAR_12 = 0; VAR_12 < 32; ++VAR_12)
  FUNC_2(VAR_11, FUNC_0(VAR_12), VAR_10);

 FUNC_2(VAR_11, VAR_0, VAR_1 |
   VAR_3 |
   VAR_2 |
   VAR_6 |
   VAR_5 |
   VAR_4);
}
