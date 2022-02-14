
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ func; } ;
struct ixgbe_hw {TYPE_1__ bus; } ;
struct TYPE_5__ {scalar_t__ ret_status; int cmd_resv; } ;
struct TYPE_6__ {TYPE_2__ cmd_or_resp; scalar_t__ buf_len; scalar_t__ checksum; int cmd; } ;
struct ixgbe_hic_drv_info {TYPE_3__ hdr; scalar_t__ pad2; scalar_t__ pad; void* ver_sub; void* ver_build; void* ver_min; void* ver_maj; void* port_num; } ;
typedef scalar_t__ s32 ;
typedef int fw_cmd ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (void**,scalar_t__) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int *,int,int ,int ) ;

s32 FUNC_4(struct ixgbe_hw *VAR_10, u8 VAR_11, u8 VAR_12,
     u8 VAR_13, u8 VAR_14, u16 VAR_15,
     const char *VAR_16)
{
 struct ixgbe_hic_drv_info VAR_17;
 int VAR_18;
 s32 VAR_19 = VAR_8;

 FUNC_0("ixgbe_set_fw_drv_ver_generic");
 FUNC_1(VAR_15, VAR_16);

 VAR_17.hdr.cmd = VAR_0;
 VAR_17.hdr.buf_len = VAR_1;
 VAR_17.hdr.cmd_or_resp.cmd_resv = VAR_2;
 VAR_17.port_num = (u8)VAR_10->bus.func;
 VAR_17.ver_maj = VAR_11;
 VAR_17.ver_min = VAR_12;
 VAR_17.ver_build = VAR_13;
 VAR_17.ver_sub = VAR_14;
 VAR_17.hdr.checksum = 0;
 VAR_17.pad = 0;
 VAR_17.pad2 = 0;
 VAR_17.hdr.checksum = FUNC_2((u8 *)&VAR_17,
    (VAR_3 + VAR_17.hdr.buf_len));

 for (VAR_18 = 0; VAR_18 <= VAR_4; VAR_18++) {
  VAR_19 = FUNC_3(VAR_10, (u32 *)&VAR_17,
             sizeof(VAR_17),
             VAR_7,
             VAR_9);
  if (VAR_19 != VAR_8)
   continue;

  if (VAR_17.hdr.cmd_or_resp.ret_status ==
      VAR_5)
   VAR_19 = VAR_8;
  else
   VAR_19 = VAR_6;

  break;
 }

 return VAR_19;
}
