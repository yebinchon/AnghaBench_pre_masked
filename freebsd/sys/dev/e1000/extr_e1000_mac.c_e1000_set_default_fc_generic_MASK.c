
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_10__ {int requested_mode; } ;
struct TYPE_8__ {scalar_t__ (* read ) (struct e1000_hw*,int,int,int*) ;} ;
struct TYPE_9__ {TYPE_3__ ops; } ;
struct TYPE_7__ {int func; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_5__ fc; TYPE_4__ nvm; TYPE_2__ bus; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int,int,int*) ;

s32 FUNC_5(struct e1000_hw *VAR_8)
{
 s32 VAR_9;
 u16 VAR_10;
 u16 VAR_11 = 0;

 FUNC_0("e1000_set_default_fc_generic");
 if (VAR_8->mac.type == VAR_7) {
  VAR_11 = FUNC_2(VAR_8->bus.func);
  VAR_9 = VAR_8->nvm.ops.read(VAR_8,
        VAR_1 +
        VAR_11,
        1, &VAR_10);
 } else {
  VAR_9 = VAR_8->nvm.ops.read(VAR_8,
        VAR_1,
        1, &VAR_10);
 }


 if (VAR_9) {
  FUNC_1("NVM Read Error\n");
  return VAR_9;
 }

 if (!(VAR_10 & VAR_3))
  VAR_8->fc.requested_mode = VAR_5;
 else if ((VAR_10 & VAR_3) ==
   VAR_2)
  VAR_8->fc.requested_mode = VAR_6;
 else
  VAR_8->fc.requested_mode = VAR_4;

 return VAR_0;
}
