
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* read ) (struct e1000_hw*,int ,int,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int,int*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_3)
{
 s32 VAR_4;
 u16 VAR_5 = 1;
 u16 VAR_6, VAR_7;
 u16 VAR_8;

 FUNC_0("e1000_validate_nvm_checksum_82580");

 VAR_4 = VAR_3->nvm.ops.read(VAR_3, VAR_2, 1, &VAR_7);
 if (VAR_4) {
  FUNC_1("NVM Read Error\n");
  goto out;
 }

 if (VAR_7 & VAR_1) {


  VAR_5 = 4;
 }

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_8 = FUNC_2(VAR_6);
  VAR_4 = FUNC_3(VAR_3,
          VAR_8);
  if (VAR_4 != VAR_0)
   goto out;
 }

out:
 return VAR_4;
}
