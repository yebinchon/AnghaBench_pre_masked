
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* update ) (struct e1000_hw*) ;scalar_t__ (* write ) (struct e1000_hw*,int,int,int*) ;scalar_t__ (* read ) (struct e1000_hw*,int,int,int*) ;} ;
struct e1000_nvm_info {scalar_t__ type; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_2)
{
 struct e1000_nvm_info *VAR_3 = &VAR_2->nvm;
 s32 VAR_4;
 u16 VAR_5;

 FUNC_0("e1000_fix_nvm_checksum_82571");

 if (VAR_3->type != VAR_1)
  return VAR_0;




 VAR_4 = VAR_3->ops.read(VAR_2, 0x10, 1, &VAR_5);
 if (VAR_4)
  return VAR_4;

 if (!(VAR_5 & 0x10)) {







  VAR_4 = VAR_3->ops.read(VAR_2, 0x23, 1, &VAR_5);
  if (VAR_4)
   return VAR_4;

  if (!(VAR_5 & 0x8000)) {
   VAR_5 |= 0x8000;
   VAR_4 = VAR_3->ops.write(VAR_2, 0x23, 1, &VAR_5);
   if (VAR_4)
    return VAR_4;
   VAR_4 = VAR_3->ops.update(VAR_2);
   if (VAR_4)
    return VAR_4;
  }
 }

 return VAR_0;
}
