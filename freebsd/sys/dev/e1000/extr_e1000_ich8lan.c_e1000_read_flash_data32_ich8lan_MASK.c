
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flcdone; scalar_t__ flcerr; } ;
union ich8_hws_flash_status {TYPE_4__ hsf_status; int regval; } ;
struct TYPE_7__ {int fldbcount; int flcycle; } ;
union ich8_hws_flash_ctrl {int regval; TYPE_3__ hsf_ctrl; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_6__ {int flash_base_addr; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ nvm; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int FUNC_3 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int) ;

__attribute__((used)) static s32 FUNC_8(struct e1000_hw *VAR_10, u32 VAR_11,
        u32 *VAR_12)
{
 union ich8_hws_flash_status VAR_13;
 union ich8_hws_flash_ctrl VAR_14;
 u32 VAR_15;
 s32 VAR_16 = -VAR_0;
 u8 VAR_17 = 0;

 FUNC_0("e1000_read_flash_data_ich8lan");

  if (VAR_11 > VAR_7 ||
      VAR_10->mac.type < VAR_9)
   return -VAR_0;
 VAR_15 = ((VAR_7 & VAR_11) +
        VAR_10->nvm.flash_base_addr);

 do {
  FUNC_7(1);

  VAR_16 = FUNC_6(VAR_10);
  if (VAR_16 != VAR_1)
   break;



  VAR_14.regval = FUNC_2(VAR_10, VAR_6)>>16;


  VAR_14.hsf_ctrl.fldbcount = sizeof(u32) - 1;
  VAR_14.hsf_ctrl.flcycle = VAR_2;



  FUNC_4(VAR_10, VAR_6,
          (u32)VAR_14.regval << 16);
  FUNC_4(VAR_10, VAR_4, VAR_15);

  VAR_16 = FUNC_5(VAR_10,
      VAR_8);






  if (VAR_16 == VAR_1) {
   *VAR_12 = FUNC_2(VAR_10, VAR_5);
   break;
  } else {





   VAR_13.regval = FUNC_3(VAR_10,
             VAR_6);
   if (VAR_13.hsf_status.flcerr) {

    continue;
   } else if (!VAR_13.hsf_status.flcdone) {
    FUNC_1("Timeout error - flash cycle did not complete.\n");
    break;
   }
  }
 } while (VAR_17++ < VAR_3);

 return VAR_16;
}
