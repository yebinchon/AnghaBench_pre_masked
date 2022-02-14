
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flcdone; scalar_t__ flcerr; } ;
union ich8_hws_flash_status {TYPE_4__ hsf_status; void* regval; } ;
struct TYPE_6__ {int fldbcount; int flcycle; } ;
union ich8_hws_flash_ctrl {int regval; TYPE_2__ hsf_ctrl; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_5__ {int flash_base_addr; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_1__ nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 void* FUNC_3 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int FUNC_5 (struct e1000_hw*,int ,int) ;
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
 scalar_t__ VAR_10 ;
 int FUNC_8 (int) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_11, u32 VAR_12,
         u32 VAR_13)
{
 union ich8_hws_flash_status VAR_14;
 union ich8_hws_flash_ctrl VAR_15;
 u32 VAR_16;
 s32 VAR_17;
 u8 VAR_18 = 0;

 FUNC_0("e1000_write_flash_data32_ich8lan");

 if (VAR_11->mac.type >= VAR_10) {
  if (VAR_12 > VAR_8)
   return -VAR_0;
 }
 VAR_16 = ((VAR_8 & VAR_12) +
        VAR_11->nvm.flash_base_addr);
 do {
  FUNC_8(1);

  VAR_17 = FUNC_7(VAR_11);
  if (VAR_17 != VAR_1)
   break;




  if (VAR_11->mac.type >= VAR_10)
   VAR_15.regval = FUNC_2(VAR_11,
             VAR_7)
      >> 16;
  else
   VAR_15.regval = FUNC_3(VAR_11,
             VAR_6);

  VAR_15.hsf_ctrl.fldbcount = sizeof(u32) - 1;
  VAR_15.hsf_ctrl.flcycle = VAR_2;





  if (VAR_11->mac.type >= VAR_10)
   FUNC_4(VAR_11, VAR_7,
           VAR_15.regval << 16);
  else
   FUNC_5(VAR_11, VAR_6,
      VAR_15.regval);

  FUNC_4(VAR_11, VAR_4, VAR_16);

  FUNC_4(VAR_11, VAR_5, VAR_13);




  VAR_17 = FUNC_6(VAR_11,
            VAR_9);

  if (VAR_17 == VAR_1)
   break;






  VAR_14.regval = FUNC_3(VAR_11, VAR_7);

  if (VAR_14.hsf_status.flcerr)

   continue;
  if (!VAR_14.hsf_status.flcdone) {
   FUNC_1("Timeout error - flash cycle did not complete.\n");
   break;
  }
 } while (VAR_18++ < VAR_3);

 return VAR_17;
}
