
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (struct e1000_hw*,scalar_t__*) ;
 int FUNC_5 (struct e1000_hw*,scalar_t__*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_7)
{
 s32 VAR_8 = VAR_5;
 u32 VAR_9 = 0;
 u32 VAR_10 = FUNC_2(VAR_7, VAR_1);
 u32 VAR_11 = 10;
 bool VAR_12 = VAR_6;

 FUNC_0("e1000_get_i2c_ack");

 FUNC_5(VAR_7, &VAR_10);


 FUNC_6(VAR_3);


 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  FUNC_6(1);
  VAR_10 = FUNC_2(VAR_7, VAR_1);
  if (VAR_10 & VAR_2)
   break;
 }
 if (!(VAR_10 & VAR_2))
  return VAR_0;

 VAR_12 = FUNC_3(&VAR_10);
 if (VAR_12) {
  FUNC_1("I2C ack was not received.\n");
  VAR_8 = VAR_0;
 }

 FUNC_4(VAR_7, &VAR_10);


 FUNC_6(VAR_4);

 return VAR_8;
}
