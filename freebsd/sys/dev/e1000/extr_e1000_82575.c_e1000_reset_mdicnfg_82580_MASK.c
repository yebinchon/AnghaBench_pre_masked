
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int func; } ;
struct TYPE_8__ {scalar_t__ (* read ) (struct e1000_hw*,scalar_t__,int,int*) ;} ;
struct TYPE_7__ {TYPE_4__ ops; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ bus; TYPE_3__ nvm; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,scalar_t__,int,int*) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_8)
{
 s32 VAR_9 = VAR_3;
 u32 VAR_10;
 u16 VAR_11 = 0;

 FUNC_0("e1000_reset_mdicnfg_82580");

 if (VAR_8->mac.type != VAR_7)
  goto out;
 if (!FUNC_5(VAR_8))
  goto out;

 VAR_9 = VAR_8->nvm.ops.read(VAR_8, VAR_4 +
       FUNC_4(VAR_8->bus.func), 1,
       &VAR_11);
 if (VAR_9) {
  FUNC_1("NVM Read Error\n");
  goto out;
 }

 VAR_10 = FUNC_2(VAR_8, VAR_0);
 if (VAR_11 & VAR_6)
  VAR_10 |= VAR_2;
 if (VAR_11 & VAR_5)
  VAR_10 |= VAR_1;
 FUNC_3(VAR_8, VAR_0, VAR_10);
out:
 return VAR_9;
}
