
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
struct ixgbe_hic_drv_info2 {TYPE_3__ hdr; int driver_string; void* ver_sub; void* ver_build; void* ver_min; void* ver_maj; void* port_num; } ;
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
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (void**,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int *,int,int ,int ) ;
 int FUNC_3 (int ,char const*,int) ;

s32 FUNC_4(struct ixgbe_hw *VAR_11, u8 VAR_12, u8 VAR_13,
         u8 VAR_14, u8 VAR_15, u16 VAR_16, const char *VAR_17)
{
 struct ixgbe_hic_drv_info2 VAR_18;
 s32 VAR_19 = VAR_9;
 int VAR_20;

 FUNC_0("ixgbe_set_fw_drv_ver_x550");

 if ((VAR_16 == 0) || (VAR_17 == ((void*)0)) ||
    (VAR_16 > sizeof(VAR_18.driver_string)))
  return VAR_7;

 VAR_18.hdr.cmd = VAR_0;
 VAR_18.hdr.buf_len = VAR_1 + VAR_16;
 VAR_18.hdr.cmd_or_resp.cmd_resv = VAR_2;
 VAR_18.port_num = (u8)VAR_11->bus.func;
 VAR_18.ver_maj = VAR_12;
 VAR_18.ver_min = VAR_13;
 VAR_18.ver_build = VAR_14;
 VAR_18.ver_sub = VAR_15;
 VAR_18.hdr.checksum = 0;
 FUNC_3(VAR_18.driver_string, VAR_17, VAR_16);
 VAR_18.hdr.checksum = FUNC_1((u8 *)&VAR_18,
    (VAR_3 + VAR_18.hdr.buf_len));

 for (VAR_20 = 0; VAR_20 <= VAR_4; VAR_20++) {
  VAR_19 = FUNC_2(VAR_11, (u32 *)&VAR_18,
             sizeof(VAR_18),
             VAR_8,
             VAR_10);
  if (VAR_19 != VAR_9)
   continue;

  if (VAR_18.hdr.cmd_or_resp.ret_status ==
      VAR_5)
   VAR_19 = VAR_9;
  else
   VAR_19 = VAR_6;

  break;
 }

 return VAR_19;
}
