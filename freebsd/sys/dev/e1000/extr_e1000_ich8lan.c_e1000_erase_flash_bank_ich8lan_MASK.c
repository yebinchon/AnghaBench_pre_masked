
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int berasesz; int flcdone; scalar_t__ flcerr; } ;
union ich8_hws_flash_status {TYPE_3__ hsf_status; void* regval; } ;
struct TYPE_4__ {int flcycle; } ;
union ich8_hws_flash_ctrl {int regval; TYPE_1__ hsf_ctrl; } ;
typedef scalar_t__ u32 ;
struct e1000_nvm_info {int flash_bank_size; scalar_t__ flash_base_addr; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ mac; struct e1000_nvm_info nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 void* FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_5 (struct e1000_hw*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_13, u32 VAR_14)
{
 struct e1000_nvm_info *VAR_15 = &VAR_13->nvm;
 union ich8_hws_flash_status VAR_16;
 union ich8_hws_flash_ctrl VAR_17;
 u32 VAR_18;

 u32 VAR_19 = VAR_15->flash_bank_size * 2;
 s32 VAR_20;
 s32 VAR_21 = 0;
 s32 VAR_22, VAR_23, VAR_24;

 FUNC_0("e1000_erase_flash_bank_ich8lan");

 VAR_16.regval = FUNC_2(VAR_13, VAR_7);
 switch (VAR_16.hsf_status.berasesz) {
 case 0:

  VAR_24 = VAR_8;
  VAR_23 = VAR_19 / VAR_8;
  break;
 case 1:
  VAR_24 = VAR_9;
  VAR_23 = 1;
  break;
 case 2:
  VAR_24 = VAR_11;
  VAR_23 = 1;
  break;
 case 3:
  VAR_24 = VAR_10;
  VAR_23 = 1;
  break;
 default:
  return -VAR_0;
 }


 VAR_18 = VAR_13->nvm.flash_base_addr;
 VAR_18 += (VAR_14) ? VAR_19 : 0;

 for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++) {
  do {
   u32 VAR_25 = VAR_4;


   VAR_20 = FUNC_6(VAR_13);
   if (VAR_20)
    return VAR_20;




   if (VAR_13->mac.type >= VAR_12)
    VAR_17.regval =
        FUNC_1(VAR_13,
        VAR_7)>>16;
   else
    VAR_17.regval =
        FUNC_2(VAR_13,
          VAR_6);

   VAR_17.hsf_ctrl.flcycle = VAR_2;
   if (VAR_13->mac.type >= VAR_12)
    FUNC_3(VAR_13, VAR_7,
            VAR_17.regval << 16);
   else
    FUNC_4(VAR_13, VAR_6,
       VAR_17.regval);





   VAR_18 += (VAR_22 * VAR_24);
   FUNC_3(VAR_13, VAR_5,
           VAR_18);

   VAR_20 = FUNC_5(VAR_13, VAR_25);
   if (VAR_20 == VAR_1)
    break;





   VAR_16.regval = FUNC_2(VAR_13,
            VAR_7);
   if (VAR_16.hsf_status.flcerr)

    continue;
   else if (!VAR_16.hsf_status.flcdone)
    return VAR_20;
  } while (++VAR_21 < VAR_3);
 }

 return VAR_1;
}
