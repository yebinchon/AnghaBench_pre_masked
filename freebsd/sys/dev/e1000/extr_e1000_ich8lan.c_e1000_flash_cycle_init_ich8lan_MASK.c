
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flcerr; int dael; int flcdone; int flcinprog; int fldesvalid; } ;
union ich8_hws_flash_status {int regval; TYPE_1__ hsf_status; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 void* FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_5)
{
 union ich8_hws_flash_status VAR_6;
 s32 VAR_7 = -VAR_0;

 FUNC_0("e1000_flash_cycle_init_ich8lan");

 VAR_6.regval = FUNC_2(VAR_5, VAR_2);


 if (!VAR_6.hsf_status.fldesvalid) {
  FUNC_1("Flash descriptor invalid.  SW Sequencing must be used.\n");
  return -VAR_0;
 }


 VAR_6.hsf_status.flcerr = 1;
 VAR_6.hsf_status.dael = 1;
 if (VAR_5->mac.type >= VAR_4)
  FUNC_3(VAR_5, VAR_2,
          VAR_6.regval & 0xFFFF);
 else
  FUNC_4(VAR_5, VAR_2, VAR_6.regval);
 if (!VAR_6.hsf_status.flcinprog) {




  VAR_6.hsf_status.flcdone = 1;
  if (VAR_5->mac.type >= VAR_4)
   FUNC_3(VAR_5, VAR_2,
           VAR_6.regval & 0xFFFF);
  else
   FUNC_4(VAR_5, VAR_2,
      VAR_6.regval);
  VAR_7 = VAR_1;
 } else {
  s32 VAR_8;




  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   VAR_6.regval = FUNC_2(VAR_5,
             VAR_2);
   if (!VAR_6.hsf_status.flcinprog) {
    VAR_7 = VAR_1;
    break;
   }
   FUNC_5(1);
  }
  if (VAR_7 == VAR_1) {



   VAR_6.hsf_status.flcdone = 1;
   if (VAR_5->mac.type >= VAR_4)
    FUNC_3(VAR_5, VAR_2,
            VAR_6.regval & 0xFFFF);
   else
    FUNC_4(VAR_5, VAR_2,
       VAR_6.regval);
  } else {
   FUNC_1("Flash controller busy, cannot get access\n");
  }
 }

 return VAR_7;
}
