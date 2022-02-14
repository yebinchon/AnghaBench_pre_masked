
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int ctrl_to_fn; int r; int * data; int select_naccess; } ;
struct TYPE_4__ {TYPE_1__ pcie; } ;
struct fw_ldst_cmd {TYPE_2__ u; void* cycles_to_len16; void* op_to_addrspace; } ;
struct adapter {int mbox; int pf; } ;
typedef int ldst_cmd ;


 int FUNC_0 (struct adapter*,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fw_ldst_cmd) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (struct fw_ldst_cmd*,int ,int) ;
 int FUNC_9 (struct adapter*,int) ;
 int FUNC_10 (struct adapter*,int ,struct fw_ldst_cmd*,int,struct fw_ldst_cmd*) ;

u32 FUNC_11(struct adapter *VAR_5, int VAR_6, int VAR_7)
{





 if (VAR_7 != 0) {
  struct fw_ldst_cmd VAR_8;
  int VAR_9;

  FUNC_8(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.op_to_addrspace =
   FUNC_7(FUNC_2(VAR_1) |
        VAR_3 |
        VAR_2 |
        FUNC_3(VAR_0));
  VAR_8.cycles_to_len16 = FUNC_7(FUNC_1(VAR_8));
  VAR_8.u.pcie.select_naccess = FUNC_5(1);
  VAR_8.u.pcie.ctrl_to_fn =
   (VAR_4 | FUNC_4(VAR_5->pf));
  VAR_8.u.pcie.r = VAR_6;





  VAR_9 = FUNC_10(VAR_5, VAR_5->mbox, &VAR_8, sizeof(VAR_8),
     &VAR_8);
  if (VAR_9 == 0)
   return FUNC_6(VAR_8.u.pcie.data[0]);

  FUNC_0(VAR_5, "Firmware failed to return "
   "Configuration Space register %d, err = %d\n",
   VAR_6, -VAR_9);
 }





 return FUNC_9(VAR_5, VAR_6);
}
