
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_6)
{
 u32 VAR_7;
 bool VAR_8 = VAR_4;
 int VAR_9 = 0;

 FUNC_0("e1000_check_reset_block_ich8lan");

 do {
  VAR_7 = FUNC_1(VAR_6, VAR_1);
  if (!(VAR_7 & VAR_2)) {
   VAR_8 = VAR_5;
   FUNC_2(10);
   continue;
  }
  VAR_8 = VAR_4;
 } while (VAR_8 && (VAR_9++ < 30));
 return VAR_8 ? VAR_0 : VAR_3;
}
