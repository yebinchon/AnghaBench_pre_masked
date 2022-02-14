
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int enable_head_writeback; } ;
struct TYPE_3__ {int debug_mask; } ;
struct iavf_sc {scalar_t__ rx_itr; scalar_t__ tx_itr; TYPE_2__ vsi; TYPE_1__ hw; int dbg_mask; int dev; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_1(struct iavf_sc *VAR_8)
{
 device_t VAR_9 = VAR_8->dev;


 VAR_8->dbg_mask = VAR_3;
 VAR_8->hw.debug_mask = VAR_6;
 VAR_8->vsi.enable_head_writeback = !!(VAR_4);

 if (VAR_7 < 0 || VAR_7 > VAR_2) {
  FUNC_0(VAR_9, "Invalid tx_itr value of %d set!\n",
      VAR_7);
  FUNC_0(VAR_9, "tx_itr must be between %d and %d, "
      "inclusive\n",
      0, VAR_2);
  FUNC_0(VAR_9, "Using default value of %d instead\n",
      VAR_0);
  VAR_8->tx_itr = VAR_0;
 } else
  VAR_8->tx_itr = VAR_7;

 if (VAR_5 < 0 || VAR_5 > VAR_2) {
  FUNC_0(VAR_9, "Invalid rx_itr value of %d set!\n",
      VAR_5);
  FUNC_0(VAR_9, "rx_itr must be between %d and %d, "
      "inclusive\n",
      0, VAR_2);
  FUNC_0(VAR_9, "Using default value of %d instead\n",
      VAR_1);
  VAR_8->rx_itr = VAR_1;
 } else
  VAR_8->rx_itr = VAR_5;
}
