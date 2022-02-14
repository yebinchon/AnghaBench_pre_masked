
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_eq_ctrl_cmd {void* cmpliqid_eqid; void* alloc_to_len16; void* op_to_vfn; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int VAR_0 ;
 int FUNC_0 (struct fw_eq_ctrl_cmd) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct fw_eq_ctrl_cmd*,int ,int) ;
 int FUNC_7 (struct adapter*,unsigned int,struct fw_eq_ctrl_cmd*,int,int *) ;

int FUNC_8(struct adapter *VAR_4, unsigned int VAR_5, unsigned int VAR_6,
      unsigned int VAR_7, unsigned int VAR_8)
{
 struct fw_eq_ctrl_cmd VAR_9;

 FUNC_6(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.op_to_vfn = FUNC_5(FUNC_1(VAR_0) |
      VAR_2 | VAR_1 |
      FUNC_3(VAR_6) |
      FUNC_4(VAR_7));
 VAR_9.alloc_to_len16 = FUNC_5(VAR_3 | FUNC_0(VAR_9));
 VAR_9.cmpliqid_eqid = FUNC_5(FUNC_2(VAR_8));
 return FUNC_7(VAR_4, VAR_5, &VAR_9, sizeof(VAR_9), ((void*)0));
}
