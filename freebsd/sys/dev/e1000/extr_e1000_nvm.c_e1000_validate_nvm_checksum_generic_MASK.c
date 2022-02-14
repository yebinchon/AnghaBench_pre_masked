
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ (* read ) (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;

s32 FUNC_3(struct e1000_hw *VAR_4)
{
 s32 VAR_5;
 u16 VAR_6 = 0;
 u16 VAR_7, VAR_8;

 FUNC_0("e1000_validate_nvm_checksum_generic");

 for (VAR_7 = 0; VAR_7 < (VAR_2 + 1); VAR_7++) {
  VAR_5 = VAR_4->nvm.ops.read(VAR_4, VAR_7, 1, &VAR_8);
  if (VAR_5) {
   FUNC_1("NVM Read Error\n");
   return VAR_5;
  }
  VAR_6 += VAR_8;
 }

 if (VAR_6 != (u16) VAR_3) {
  FUNC_1("NVM Checksum Invalid\n");
  return -VAR_0;
 }

 return VAR_1;
}
