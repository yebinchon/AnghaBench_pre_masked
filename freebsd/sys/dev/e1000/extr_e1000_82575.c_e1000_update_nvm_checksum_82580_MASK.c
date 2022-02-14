
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* write ) (struct e1000_hw*,int ,int,int*) ;scalar_t__ (* read ) (struct e1000_hw*,int ,int,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int,int*) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_2)
{
 s32 VAR_3;
 u16 VAR_4, VAR_5;
 u16 VAR_6;

 FUNC_0("e1000_update_nvm_checksum_82580");

 VAR_3 = VAR_2->nvm.ops.read(VAR_2, VAR_1, 1, &VAR_5);
 if (VAR_3) {
  FUNC_1("NVM Read Error while updating checksum compatibility bit.\n");
  goto out;
 }

 if (!(VAR_5 & VAR_0)) {

  VAR_5 = VAR_5 | VAR_0;
  VAR_3 = VAR_2->nvm.ops.write(VAR_2, VAR_1, 1,
         &VAR_5);
  if (VAR_3) {
   FUNC_1("NVM Write Error while updating checksum compatibility bit.\n");
   goto out;
  }
 }

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_6 = FUNC_2(VAR_4);
  VAR_3 = FUNC_3(VAR_2, VAR_6);
  if (VAR_3)
   goto out;
 }

out:
 return VAR_3;
}
