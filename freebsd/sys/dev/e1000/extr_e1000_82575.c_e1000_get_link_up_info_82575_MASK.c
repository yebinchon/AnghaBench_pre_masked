
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct e1000_hw*,int *,int *) ;
 int FUNC_2 (struct e1000_hw*,int *,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_1, u16 *VAR_2,
     u16 *VAR_3)
{
 s32 VAR_4;

 FUNC_0("e1000_get_link_up_info_82575");

 if (VAR_1->phy.media_type != VAR_0)
  VAR_4 = FUNC_1(VAR_1, VAR_2,
              VAR_3);
 else
  VAR_4 = FUNC_2(VAR_1, VAR_2,
            VAR_3);

 return VAR_4;
}
