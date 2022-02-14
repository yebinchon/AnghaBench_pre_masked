
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {scalar_t__ (* update ) (struct e1000_hw*) ;scalar_t__ (* write ) (struct e1000_hw*,int,int,int*) ;scalar_t__ (* read ) (struct e1000_hw*,int,int,int*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct TYPE_6__ {int type; } ;
struct e1000_hw {TYPE_2__ nvm; TYPE_3__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_4)
{
 s32 VAR_5;
 u16 VAR_6;
 u16 VAR_7;
 u16 VAR_8;

 FUNC_0("e1000_validate_nvm_checksum_ich8lan");






 switch (VAR_4->mac.type) {
 case 129:
 case 128:
 case 130:
  VAR_7 = VAR_0;
  VAR_8 = VAR_1;
  break;
 default:
  VAR_7 = VAR_2;
  VAR_8 = VAR_3;
  break;
 }

 VAR_5 = VAR_4->nvm.ops.read(VAR_4, VAR_7, 1, &VAR_6);
 if (VAR_5)
  return VAR_5;

 if (!(VAR_6 & VAR_8)) {
  VAR_6 |= VAR_8;
  VAR_5 = VAR_4->nvm.ops.write(VAR_4, VAR_7, 1, &VAR_6);
  if (VAR_5)
   return VAR_5;
  VAR_5 = VAR_4->nvm.ops.update(VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 return FUNC_1(VAR_4);
}
