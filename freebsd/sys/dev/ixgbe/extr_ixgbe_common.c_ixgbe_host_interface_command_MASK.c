
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_3__ mac; } ;
struct TYPE_4__ {scalar_t__ ret_status; } ;
struct ixgbe_hic_hdr {int cmd; int buf_len; TYPE_1__ cmd_or_resp; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int*,int,int) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ) ;
 int FUNC_7 (struct ixgbe_hw*,int ) ;

s32 FUNC_8(struct ixgbe_hw *VAR_4, u32 *VAR_5,
     u32 VAR_6, u32 VAR_7, bool VAR_8)
{
 u32 VAR_9 = sizeof(struct ixgbe_hic_hdr);
 struct ixgbe_hic_hdr *VAR_10 = (struct ixgbe_hic_hdr *)VAR_5;
 u16 VAR_11;
 s32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;

 FUNC_0("ixgbe_host_interface_command");

 if (VAR_6 == 0 || VAR_6 > VAR_3) {
  FUNC_2("Buffer length failure buffersize=%d.\n", VAR_6);
  return VAR_0;
 }


 VAR_12 = VAR_4->mac.ops.acquire_swfw_sync(VAR_4, VAR_2);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_12)
  goto rel_out;

 if (!VAR_8)
  goto rel_out;


 VAR_14 = VAR_9 >> 2;


 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_5[VAR_13] = FUNC_4(VAR_4, VAR_1, VAR_13);
  FUNC_3(&VAR_5[VAR_13]);
 }






 if (VAR_10->cmd == 0x30) {
  for (; VAR_13 < VAR_14 + 2; VAR_13++) {
   VAR_5[VAR_13] = FUNC_4(VAR_4, VAR_1,
         VAR_13);
   FUNC_3(&VAR_5[VAR_13]);
  }
  VAR_11 = (((u16)(VAR_10->cmd_or_resp.ret_status) << 3)
      & 0xF00) | VAR_10->buf_len;
  VAR_9 += (2 << 2);
 } else {
  VAR_11 = VAR_10->buf_len;
 }
 if (!VAR_11)
  goto rel_out;

 if (VAR_6 < VAR_11 + VAR_9) {
  FUNC_1("Buffer not large enough for reply message.\n");
  VAR_12 = VAR_0;
  goto rel_out;
 }


 VAR_14 = (VAR_11 + 3) >> 2;


 for (; VAR_13 <= VAR_14; VAR_13++) {
  VAR_5[VAR_13] = FUNC_4(VAR_4, VAR_1, VAR_13);
  FUNC_3(&VAR_5[VAR_13]);
 }

rel_out:
 VAR_4->mac.ops.release_swfw_sync(VAR_4, VAR_2);

 return VAR_12;
}
