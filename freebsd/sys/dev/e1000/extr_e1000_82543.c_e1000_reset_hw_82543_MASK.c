
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int (* reload ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ nvm; TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int FUNC_5 (struct e1000_hw*,int ,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (struct e1000_hw*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_10)
{
 u32 VAR_11;
 s32 VAR_12 = VAR_5;

 FUNC_0("e1000_reset_hw_82543");

 FUNC_1("Masking off all interrupts\n");
 FUNC_4(VAR_10, VAR_3, 0xffffffff);

 FUNC_4(VAR_10, VAR_4, 0);
 FUNC_4(VAR_10, VAR_6, VAR_7);
 FUNC_3(VAR_10);

 FUNC_6(VAR_10, VAR_8);





 FUNC_7(10);

 VAR_11 = FUNC_2(VAR_10, VAR_0);

 FUNC_1("Issuing a global reset to 82543/82544 MAC\n");
 if (VAR_10->mac.type == VAR_9) {
  FUNC_4(VAR_10, VAR_0, VAR_11 | VAR_1);
 } else {




  FUNC_5(VAR_10, VAR_0, VAR_11 | VAR_1);
 }





 VAR_10->nvm.ops.reload(VAR_10);
 FUNC_7(2);


 FUNC_4(VAR_10, VAR_3, 0xffffffff);
 FUNC_2(VAR_10, VAR_2);

 return VAR_12;
}
