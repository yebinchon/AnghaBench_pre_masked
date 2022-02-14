
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flcerr; scalar_t__ flcdone; } ;
union ich8_hws_flash_status {TYPE_3__ hsf_status; void* regval; } ;
struct TYPE_4__ {int flcgo; } ;
union ich8_hws_flash_ctrl {int regval; TYPE_1__ hsf_ctrl; } ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 void* FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_5, u32 VAR_6)
{
 union ich8_hws_flash_ctrl VAR_7;
 union ich8_hws_flash_status VAR_8;
 u32 VAR_9 = 0;

 FUNC_0("e1000_flash_cycle_ich8lan");


 if (VAR_5->mac.type >= VAR_4)
  VAR_7.regval = FUNC_1(VAR_5, VAR_3)>>16;
 else
  VAR_7.regval = FUNC_2(VAR_5, VAR_2);
 VAR_7.hsf_ctrl.flcgo = 1;

 if (VAR_5->mac.type >= VAR_4)
  FUNC_3(VAR_5, VAR_3,
          VAR_7.regval << 16);
 else
  FUNC_4(VAR_5, VAR_2, VAR_7.regval);


 do {
  VAR_8.regval = FUNC_2(VAR_5, VAR_3);
  if (VAR_8.hsf_status.flcdone)
   break;
  FUNC_5(1);
 } while (VAR_9++ < VAR_6);

 if (VAR_8.hsf_status.flcdone && !VAR_8.hsf_status.flcerr)
  return VAR_1;

 return -VAR_0;
}
