
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_6__ {scalar_t__ lan_id; } ;
struct TYPE_4__ {int set_lben; } ;
struct ixgbe_hw {TYPE_3__ bus; TYPE_1__ mac; } ;
struct TYPE_5__ {int checksum; int buf_len; int cmd; } ;
struct ixgbe_hic_disable_rxen {scalar_t__ port_number; TYPE_2__ hdr; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int*,int,int ,int ) ;

void FUNC_4(struct ixgbe_hw *VAR_10)
{
 u32 VAR_11, VAR_12;
 s32 VAR_13;
 struct ixgbe_hic_disable_rxen VAR_14;

 FUNC_0("ixgbe_enable_rx_dma_x550");

 VAR_11 = FUNC_1(VAR_10, VAR_7);
 if (VAR_11 & VAR_8) {
  VAR_12 = FUNC_1(VAR_10, VAR_5);
  if (VAR_12 & VAR_6) {
   VAR_12 &= ~VAR_6;
   FUNC_2(VAR_10, VAR_5, VAR_12);
   VAR_10->mac.set_lben = VAR_9;
  } else {
   VAR_10->mac.set_lben = VAR_0;
  }

  VAR_14.hdr.cmd = VAR_2;
  VAR_14.hdr.buf_len = VAR_3;
  VAR_14.hdr.checksum = VAR_1;
  VAR_14.port_number = (u8)VAR_10->bus.lan_id;

  VAR_13 = FUNC_3(VAR_10, (u32 *)&VAR_14,
     sizeof(struct ixgbe_hic_disable_rxen),
     VAR_4, VAR_9);


  if (VAR_13) {
   VAR_11 = FUNC_1(VAR_10, VAR_7);
   if (VAR_11 & VAR_8) {
    VAR_11 &= ~VAR_8;
    FUNC_2(VAR_10, VAR_7, VAR_11);
   }
  }
 }
}
