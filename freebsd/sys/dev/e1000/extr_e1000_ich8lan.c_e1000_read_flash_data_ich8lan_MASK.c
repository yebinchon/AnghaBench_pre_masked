
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flcdone; scalar_t__ flcerr; } ;
union ich8_hws_flash_status {TYPE_3__ hsf_status; void* regval; } ;
struct TYPE_5__ {int fldbcount; int flcycle; } ;
union ich8_hws_flash_ctrl {void* regval; TYPE_2__ hsf_ctrl; } ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int flash_base_addr; } ;
struct e1000_hw {TYPE_1__ nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 void* FUNC_3 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int FUNC_5 (struct e1000_hw*,int ,void*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ) ;
 scalar_t__ FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_10, u32 VAR_11,
      u8 VAR_12, u16 *VAR_13)
{
 union ich8_hws_flash_status VAR_14;
 union ich8_hws_flash_ctrl VAR_15;
 u32 VAR_16;
 u32 VAR_17 = 0;
 s32 VAR_18 = -VAR_0;
 u8 VAR_19 = 0;

 FUNC_0("e1000_read_flash_data_ich8lan");

 if (VAR_12 < 1 || VAR_12 > 2 || VAR_11 > VAR_8)
  return -VAR_0;
 VAR_16 = ((VAR_8 & VAR_11) +
        VAR_10->nvm.flash_base_addr);

 do {
  FUNC_8(1);

  VAR_18 = FUNC_7(VAR_10);
  if (VAR_18 != VAR_1)
   break;
  VAR_15.regval = FUNC_3(VAR_10, VAR_6);


  VAR_15.hsf_ctrl.fldbcount = VAR_12 - 1;
  VAR_15.hsf_ctrl.flcycle = VAR_2;
  FUNC_5(VAR_10, VAR_6, VAR_15.regval);
  FUNC_4(VAR_10, VAR_4, VAR_16);

  VAR_18 = FUNC_6(VAR_10,
      VAR_9);






  if (VAR_18 == VAR_1) {
   VAR_17 = FUNC_2(VAR_10, VAR_5);
   if (VAR_12 == 1)
    *VAR_13 = (u8)(VAR_17 & 0x000000FF);
   else if (VAR_12 == 2)
    *VAR_13 = (u16)(VAR_17 & 0x0000FFFF);
   break;
  } else {





   VAR_14.regval = FUNC_3(VAR_10,
             VAR_7);
   if (VAR_14.hsf_status.flcerr) {

    continue;
   } else if (!VAR_14.hsf_status.flcdone) {
    FUNC_1("Timeout error - flash cycle did not complete.\n");
    break;
   }
  }
 } while (VAR_19++ < VAR_3);

 return VAR_18;
}
