
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int flags; int len; struct mmc_data* data; int opcode; } ;
typedef struct mmc_data uint8_t ;
struct mmc_command {int flags; int len; struct mmc_command* data; int opcode; } ;
typedef int device_t ;
typedef int data ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mmc_data*,int ,int) ;
 int FUNC_1 (int ,int ,struct mmc_data*,int ) ;

int
FUNC_2(device_t VAR_6, device_t VAR_7, uint8_t *VAR_8)
{
 struct mmc_command VAR_9;
 struct mmc_data VAR_10;
 int VAR_11;

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));
 FUNC_0(&VAR_10, 0, sizeof(VAR_10));

 FUNC_0(VAR_8, 0, VAR_3);
 VAR_9.opcode = VAR_5;
 VAR_9.flags = VAR_4 | VAR_1;
 VAR_9.data = &VAR_10;

 VAR_10.data = VAR_8;
 VAR_10.len = VAR_3;
 VAR_10.flags = VAR_2;

 VAR_11 = FUNC_1(VAR_6, VAR_7, &VAR_9, VAR_0);
 return (VAR_11);
}
