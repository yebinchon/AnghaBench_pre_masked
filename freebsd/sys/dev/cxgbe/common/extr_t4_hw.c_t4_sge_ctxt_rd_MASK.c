
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int ctxt_data5; int ctxt_data4; int ctxt_data3; int ctxt_data2; int ctxt_data1; int ctxt_data0; void* physid; } ;
struct TYPE_4__ {TYPE_1__ idctxt; } ;
struct fw_ldst_cmd {TYPE_2__ u; void* cycles_to_len16; void* op_to_addrspace; } ;
struct adapter {int dummy; } ;
typedef enum ctxt_type { ____Placeholder_ctxt_type } ctxt_type ;
typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (struct fw_ldst_cmd) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (struct fw_ldst_cmd*,int ,int) ;
 int FUNC_6 (struct adapter*,unsigned int,struct fw_ldst_cmd*,int,struct fw_ldst_cmd*) ;

int FUNC_7(struct adapter *VAR_10, unsigned int VAR_11, unsigned int VAR_12,
     enum ctxt_type VAR_13, u32 *VAR_14)
{
 int VAR_15;
 struct fw_ldst_cmd VAR_16;

 if (VAR_13 == VAR_0)
  VAR_15 = VAR_4;
 else if (VAR_13 == VAR_2)
  VAR_15 = VAR_6;
 else if (VAR_13 == VAR_1)
  VAR_15 = VAR_5;
 else
  VAR_15 = VAR_3;

 FUNC_5(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.op_to_addrspace = FUNC_4(FUNC_1(VAR_7) |
     VAR_9 | VAR_8 |
     FUNC_2(VAR_15));
 VAR_16.cycles_to_len16 = FUNC_4(FUNC_0(VAR_16));
 VAR_16.u.idctxt.physid = FUNC_4(VAR_12);

 VAR_15 = FUNC_6(VAR_10, VAR_11, &VAR_16, sizeof(VAR_16), &VAR_16);
 if (VAR_15 == 0) {
  VAR_14[0] = FUNC_3(VAR_16.u.idctxt.ctxt_data0);
  VAR_14[1] = FUNC_3(VAR_16.u.idctxt.ctxt_data1);
  VAR_14[2] = FUNC_3(VAR_16.u.idctxt.ctxt_data2);
  VAR_14[3] = FUNC_3(VAR_16.u.idctxt.ctxt_data3);
  VAR_14[4] = FUNC_3(VAR_16.u.idctxt.ctxt_data4);
  VAR_14[5] = FUNC_3(VAR_16.u.idctxt.ctxt_data5);
 }
 return VAR_15;
}
