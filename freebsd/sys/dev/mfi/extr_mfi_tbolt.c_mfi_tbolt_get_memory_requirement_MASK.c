
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mfi_softc {int raid_io_msg_size; int mfi_max_fw_cmds; int reply_size; } ;


 int VAR_0 ;
 int VAR_1 ;

uint32_t
FUNC_0(struct mfi_softc *VAR_2)
{
 uint32_t VAR_3;
 VAR_3 = VAR_1;
 VAR_3 += VAR_2->raid_io_msg_size * (VAR_2->mfi_max_fw_cmds + 1);
 VAR_3 += VAR_2->reply_size * VAR_2->mfi_max_fw_cmds;

 VAR_3 += VAR_0 * VAR_2->mfi_max_fw_cmds;
 return VAR_3;
}
