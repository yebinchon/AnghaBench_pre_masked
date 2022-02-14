
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* cfg_on_link_up ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {scalar_t__ media_type; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct e1000_hw*,int *,int *) ;
 int FUNC_2 (struct e1000_hw*,int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_1, u16 *VAR_2,
           u16 *VAR_3)
{
 s32 VAR_4;

 FUNC_0("e1000_get_link_up_info_80003es2lan");

 if (VAR_1->phy.media_type == VAR_0) {
  VAR_4 = FUNC_1(VAR_1, VAR_2,
            VAR_3);
  VAR_1->phy.ops.cfg_on_link_up(VAR_1);
 } else {
  VAR_4 = FUNC_2(VAR_1,
          VAR_2,
          VAR_3);
 }

 return VAR_4;
}
