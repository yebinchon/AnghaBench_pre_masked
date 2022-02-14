
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rx_pb_size; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;



void FUNC_4(struct ixgbe_hw *VAR_4, int VAR_5, u32 VAR_6,
        int VAR_7)
{
 u32 VAR_8 = VAR_4->mac.rx_pb_size;
 int VAR_9 = 0;
 u32 VAR_10, VAR_11, VAR_12;


 VAR_8 -= VAR_6;

 if (!VAR_5)
  VAR_5 = 1;




 switch (VAR_7) {
 case 128:



  VAR_10 = (VAR_8 * 5) / (VAR_5 * 4);
  VAR_8 -= VAR_10 * (VAR_5 / 2);
  VAR_10 <<= VAR_1;
  for (; VAR_9 < (VAR_5 / 2); VAR_9++)
   FUNC_3(VAR_4, FUNC_0(VAR_9), VAR_10);


 case 129:
  VAR_10 = (VAR_8 / (VAR_5 - VAR_9)) << VAR_1;
  for (; VAR_9 < VAR_5; VAR_9++)
   FUNC_3(VAR_4, FUNC_0(VAR_9), VAR_10);
  break;
 default:
  break;
 }


 VAR_11 = VAR_2 / VAR_5;
 VAR_12 = (VAR_11 / 1024) - VAR_3;
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  FUNC_3(VAR_4, FUNC_1(VAR_9), VAR_11);
  FUNC_3(VAR_4, FUNC_2(VAR_9), VAR_12);
 }


 for (; VAR_9 < VAR_0; VAR_9++) {
  FUNC_3(VAR_4, FUNC_0(VAR_9), 0);
  FUNC_3(VAR_4, FUNC_1(VAR_9), 0);
  FUNC_3(VAR_4, FUNC_2(VAR_9), 0);
 }
}
