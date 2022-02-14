
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int pid; unsigned int did; unsigned int boffset; unsigned int blen; int data; } ;
struct TYPE_4__ {TYPE_1__ i2c; } ;
struct fw_ldst_cmd {TYPE_2__ u; void* cycles_to_len16; void* op_to_addrspace; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fw_ldst_cmd) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *,int ,unsigned int) ;
 int FUNC_5 (struct fw_ldst_cmd*,int ,int) ;
 int FUNC_6 (struct adapter*,unsigned int,struct fw_ldst_cmd*,int,struct fw_ldst_cmd*) ;

int FUNC_7(struct adapter *VAR_5, unsigned int VAR_6,
       int VAR_7, unsigned int VAR_8,
       unsigned int VAR_9, unsigned int VAR_10,
       u8 *VAR_11)
{
 u32 VAR_12;
 struct fw_ldst_cmd VAR_13;
 int VAR_14;

 if (VAR_7 >= 4 ||
     VAR_8 >= 256 ||
     VAR_9 >= 256 ||
     VAR_10 > sizeof VAR_13.u.i2c.data)
  return -VAR_0;

 FUNC_5(&VAR_13, 0, sizeof VAR_13);
 VAR_12 = FUNC_2(VAR_1);
 VAR_13.op_to_addrspace =
  FUNC_3(FUNC_1(VAR_2) |
       VAR_4 |
       VAR_3 |
       VAR_12);
 VAR_13.cycles_to_len16 = FUNC_3(FUNC_0(VAR_13));
 VAR_13.u.i2c.pid = (VAR_7 < 0 ? 0xff : VAR_7);
 VAR_13.u.i2c.did = VAR_8;
 VAR_13.u.i2c.boffset = VAR_9;
 VAR_13.u.i2c.blen = VAR_10;
 VAR_14 = FUNC_6(VAR_5, VAR_6, &VAR_13, sizeof VAR_13, &VAR_13);
 if (!VAR_14)
  FUNC_4(VAR_11, VAR_13.u.i2c.data, VAR_10);
 return VAR_14;
}
