
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int current_mode; int high_water; scalar_t__ send_xon; int low_water; } ;
struct e1000_hw {TYPE_1__ fc; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct e1000_hw*,int ,int ) ;
 int VAR_4 ;

s32 FUNC_2(struct e1000_hw *VAR_5)
{
 u32 VAR_6 = 0, VAR_7 = 0;

 FUNC_0("e1000_set_fc_watermarks_generic");







 if (VAR_5->fc.current_mode & VAR_4) {




  VAR_6 = VAR_5->fc.low_water;
  if (VAR_5->fc.send_xon)
   VAR_6 |= VAR_2;

  VAR_7 = VAR_5->fc.high_water;
 }
 FUNC_1(VAR_5, VAR_1, VAR_6);
 FUNC_1(VAR_5, VAR_0, VAR_7);

 return VAR_3;
}
