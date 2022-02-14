
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct mmc_command {int arg; int flags; int* resp; int opcode; } ;
typedef int device_t ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mmc_command*,int ,int) ;
 int FUNC_1 (int ,int ,struct mmc_command*,int ) ;

int
FUNC_2(device_t VAR_4, device_t VAR_5, uint16_t VAR_6, uint32_t *VAR_7)
{
 struct mmc_command VAR_8;
 int VAR_9;

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.opcode = VAR_3;
 VAR_8.arg = (uint32_t)VAR_6 << 16;
 VAR_8.flags = VAR_2 | VAR_1;
 VAR_9 = FUNC_1(VAR_4, VAR_5, &VAR_8, VAR_0);
 *VAR_7 = VAR_8.resp[0];
 return (VAR_9);
}
