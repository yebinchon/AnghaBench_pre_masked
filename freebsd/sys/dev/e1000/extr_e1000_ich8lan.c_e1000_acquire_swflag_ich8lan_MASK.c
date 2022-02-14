
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct e1000_hw*,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct e1000_hw*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_7)
{
 u32 VAR_8, VAR_9 = VAR_5;
 s32 VAR_10 = VAR_4;

 FUNC_1("e1000_acquire_swflag_ich8lan");

 FUNC_0(VAR_7);

 while (VAR_9) {
  VAR_8 = FUNC_4(VAR_7, VAR_1);
  if (!(VAR_8 & VAR_2))
   break;

  FUNC_6(1);
  VAR_9--;
 }

 if (!VAR_9) {
  FUNC_2("SW has already locked the resource.\n");
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_9 = VAR_6;

 VAR_8 |= VAR_2;
 FUNC_5(VAR_7, VAR_1, VAR_8);

 while (VAR_9) {
  VAR_8 = FUNC_4(VAR_7, VAR_1);
  if (VAR_8 & VAR_2)
   break;

  FUNC_6(1);
  VAR_9--;
 }

 if (!VAR_9) {
  FUNC_3("Failed to acquire the semaphore, FW or HW has it: FWSM=0x%8.8x EXTCNF_CTRL=0x%8.8x)\n",
     FUNC_4(VAR_7, VAR_3), VAR_8);
  VAR_8 &= ~VAR_2;
  FUNC_5(VAR_7, VAR_1, VAR_8);
  VAR_10 = -VAR_0;
  goto out;
 }

out:
 return VAR_10;
}
