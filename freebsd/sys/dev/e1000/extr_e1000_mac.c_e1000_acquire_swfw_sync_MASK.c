
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (int) ;

s32
FUNC_8(struct e1000_hw *VAR_3, u16 VAR_4)
{
 u32 VAR_5;
 u32 VAR_6 = VAR_4;
 u32 VAR_7 = VAR_4 << 16;
 s32 VAR_8 = VAR_1;
 s32 VAR_9 = 0, VAR_10 = 200;

 FUNC_1("e1000_acquire_swfw_sync");
 FUNC_0();
 while (VAR_9 < VAR_10) {
  if (FUNC_5(VAR_3)) {
   VAR_8 = -VAR_0;
   goto out;
  }

  VAR_5 = FUNC_3(VAR_3, VAR_2);
  if (!(VAR_5 & (VAR_7 | VAR_6)))
   break;





  FUNC_6(VAR_3);
  FUNC_7(5);
  VAR_9++;
 }

 if (VAR_9 == VAR_10) {
  FUNC_2("Driver can't access resource, SW_FW_SYNC timeout.\n");
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_5 |= VAR_6;
 FUNC_4(VAR_3, VAR_2, VAR_5);

 FUNC_6(VAR_3);

out:
 return VAR_8;
}
