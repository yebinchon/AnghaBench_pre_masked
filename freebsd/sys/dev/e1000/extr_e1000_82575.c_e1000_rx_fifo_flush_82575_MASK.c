
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int) ;
 int VAR_13 ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (int) ;

void FUNC_7(struct e1000_hw *VAR_15)
{
 u32 VAR_16, VAR_17, VAR_18[4], VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23;

 FUNC_0("e1000_rx_fifo_flush_82575");


 VAR_19 = FUNC_2(VAR_15, VAR_7);
 VAR_19 |= VAR_8;
 FUNC_5(VAR_15, VAR_7, VAR_19);

 if (VAR_15->mac.type != VAR_14 ||
     !(FUNC_2(VAR_15, VAR_0) & VAR_1))
  return;


 for (VAR_22 = 0; VAR_22 < 4; VAR_22++) {
  VAR_18[VAR_22] = FUNC_2(VAR_15, FUNC_3(VAR_22));
  FUNC_5(VAR_15, FUNC_3(VAR_22),
    VAR_18[VAR_22] & ~VAR_13);
 }

 for (VAR_23 = 0; VAR_23 < 10; VAR_23++) {
  FUNC_6(1);
  VAR_21 = 0;
  for (VAR_22 = 0; VAR_22 < 4; VAR_22++)
   VAR_21 |= FUNC_2(VAR_15, FUNC_3(VAR_22));
  if (!(VAR_21 & VAR_13))
   break;
 }

 if (VAR_23 == 10)
  FUNC_1("Queue disable timed out after 10ms\n");





 FUNC_5(VAR_15, VAR_7, VAR_19 & ~VAR_9);

 VAR_17 = FUNC_2(VAR_15, VAR_10);
 FUNC_5(VAR_15, VAR_10, 0);

 VAR_16 = FUNC_2(VAR_15, VAR_3);
 VAR_20 = VAR_16 & ~(VAR_4 | VAR_6);
 VAR_20 |= VAR_5;

 FUNC_5(VAR_15, VAR_3, VAR_20);
 FUNC_5(VAR_15, VAR_3, VAR_20 | VAR_4);
 FUNC_4(VAR_15);
 FUNC_6(2);




 for (VAR_22 = 0; VAR_22 < 4; VAR_22++)
  FUNC_5(VAR_15, FUNC_3(VAR_22), VAR_18[VAR_22]);
 FUNC_5(VAR_15, VAR_3, VAR_16);
 FUNC_4(VAR_15);

 FUNC_5(VAR_15, VAR_10, VAR_17);
 FUNC_5(VAR_15, VAR_7, VAR_19);


 FUNC_2(VAR_15, VAR_12);
 FUNC_2(VAR_15, VAR_11);
 FUNC_2(VAR_15, VAR_2);
}
