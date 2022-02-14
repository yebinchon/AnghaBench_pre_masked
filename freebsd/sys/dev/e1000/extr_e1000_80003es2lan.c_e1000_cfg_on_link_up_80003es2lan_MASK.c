
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_3)
{
 s32 VAR_4 = VAR_0;
 u16 VAR_5;
 u16 VAR_6;

 FUNC_0("e1000_configure_on_link_up");

 if (VAR_3->phy.media_type == VAR_2) {
  VAR_4 = FUNC_3(VAR_3, &VAR_5,
            &VAR_6);
  if (VAR_4)
   return VAR_4;

  if (VAR_5 == VAR_1)
   VAR_4 = FUNC_1(VAR_3);
  else
   VAR_4 = FUNC_2(VAR_3, VAR_6);
 }

 return VAR_4;
}
