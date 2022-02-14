
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int rval; void* raddr; void* paddr_mmd; } ;
struct TYPE_4__ {TYPE_1__ mdio; } ;
struct fw_ldst_cmd {TYPE_2__ u; void* cycles_to_len16; void* op_to_addrspace; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fw_ldst_cmd) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (int ) ;
 void* FUNC_6 (unsigned int) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (struct fw_ldst_cmd*,int ,int) ;
 int FUNC_9 (struct adapter*,unsigned int,struct fw_ldst_cmd*,int,struct fw_ldst_cmd*) ;

int FUNC_10(struct adapter *VAR_4, unsigned int VAR_5, unsigned int VAR_6,
        unsigned int VAR_7, unsigned int VAR_8, unsigned int *VAR_9)
{
 int VAR_10;
 u32 VAR_11;
 struct fw_ldst_cmd VAR_12;

 FUNC_8(&VAR_12, 0, sizeof(VAR_12));
 VAR_11 = FUNC_2(VAR_0);
 VAR_12.op_to_addrspace = FUNC_7(FUNC_1(VAR_1) |
     VAR_3 | VAR_2 |
     VAR_11);
 VAR_12.cycles_to_len16 = FUNC_7(FUNC_0(VAR_12));
 VAR_12.u.mdio.paddr_mmd = FUNC_6(FUNC_4(VAR_6) |
      FUNC_3(VAR_7));
 VAR_12.u.mdio.raddr = FUNC_6(VAR_8);

 VAR_10 = FUNC_9(VAR_4, VAR_5, &VAR_12, sizeof(VAR_12), &VAR_12);
 if (VAR_10 == 0)
  *VAR_9 = FUNC_5(VAR_12.u.mdio.rval);
 return VAR_10;
}
