
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int (* read ) (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ nvm; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;

s32 FUNC_3(struct e1000_hw *VAR_4, u16 VAR_5)
{
 s32 VAR_6 = VAR_1;
 u16 VAR_7 = 0;
 u16 VAR_8, VAR_9;

 FUNC_0("e1000_validate_nvm_checksum_with_offset");

 for (VAR_8 = VAR_5; VAR_8 < ((VAR_2 + VAR_5) + 1); VAR_8++) {
  VAR_6 = VAR_4->nvm.ops.read(VAR_4, VAR_8, 1, &VAR_9);
  if (VAR_6) {
   FUNC_1("NVM Read Error\n");
   goto out;
  }
  VAR_7 += VAR_9;
 }

 if (VAR_7 != (u16) VAR_3) {
  FUNC_1("NVM Checksum Invalid\n");
  VAR_6 = -VAR_0;
  goto out;
 }

out:
 return VAR_6;
}
