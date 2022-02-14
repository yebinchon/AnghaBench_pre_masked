
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

void FUNC_4(struct ixgbe_hw *VAR_2, u32 *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 FUNC_0("ixgbe_mdd_event_X550");


 VAR_7 = FUNC_1(VAR_2, VAR_0);
 switch (VAR_7 & VAR_1) {
 case 128:
  VAR_9 = 3;
  break;
 case 130:
 case 129:
  VAR_9 = 2;
  break;
 default:
  VAR_9 = 1;
  break;
 }


 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  VAR_4 = FUNC_1(VAR_2, FUNC_3(VAR_5));
  VAR_4 |= FUNC_1(VAR_2, FUNC_2(VAR_5));

  if (!VAR_4)
   continue;


  for (VAR_6 = 0; VAR_6 < 32 && VAR_4; VAR_6++) {

   if (!(VAR_4 & (1 << VAR_6)))
    continue;


   VAR_8 = VAR_6 + (VAR_5 * 32);


   VAR_10 = (VAR_8 >> VAR_9);


   VAR_11 = VAR_10 / 32;
   VAR_3[VAR_11] |= (1 << (VAR_10 % 32));
   VAR_4 &= ~(1 << VAR_6);
  }
 }
}
