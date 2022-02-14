
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_1)
{
 s32 VAR_2 = VAR_0;
 u16 VAR_3;
 u16 VAR_4;

 FUNC_0("e1000_update_nvm_checksum_i350");

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_4 = FUNC_1(VAR_3);
  VAR_2 = FUNC_2(VAR_1, VAR_4);
  if (VAR_2 != VAR_0)
   goto out;
 }

out:
 return VAR_2;
}
