
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fw_params_cmd {void* retval_len16; void* op_to_vfn; TYPE_1__* param; } ;
struct adapter {int dummy; } ;
typedef int c ;
typedef int __be32 ;
struct TYPE_2__ {int mnem; } ;


 int VAR_0 ;
 int FUNC_0 (struct fw_params_cmd) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct fw_params_cmd*,int ,int) ;
 int FUNC_6 (struct adapter*,unsigned int,struct fw_params_cmd*,int,int *,int) ;

int FUNC_7(struct adapter *VAR_4, unsigned int VAR_5,
     unsigned int VAR_6, unsigned int VAR_7,
     unsigned int VAR_8, const u32 *VAR_9,
     const u32 *VAR_10, int VAR_11)
{
 struct fw_params_cmd VAR_12;
 __be32 *VAR_13 = &VAR_12.param[0].mnem;

 if (VAR_8 > 7)
  return -VAR_0;

 FUNC_5(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.op_to_vfn = FUNC_4(FUNC_1(VAR_1) |
      VAR_2 | VAR_3 |
      FUNC_2(VAR_6) |
      FUNC_3(VAR_7));
 VAR_12.retval_len16 = FUNC_4(FUNC_0(VAR_12));

 while (VAR_8--) {
  *VAR_13++ = FUNC_4(*VAR_9++);
  *VAR_13++ = FUNC_4(*VAR_10++);
 }

 return FUNC_6(VAR_4, VAR_5, &VAR_12, sizeof(VAR_12), ((void*)0), VAR_11);
}
