
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int enable_head_writeback; } ;
struct TYPE_3__ {int debug_mask; } ;
struct ixl_pf {int enable_vf_loopback; int i2c_access_method; scalar_t__ rx_itr; scalar_t__ tx_itr; int dynamic_tx_itr; int dynamic_rx_itr; TYPE_2__ vsi; TYPE_1__ hw; int dbg_mask; int enable_tx_fc_filter; int dev; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static void
FUNC_1(struct ixl_pf *VAR_13)
{
 device_t VAR_14 = VAR_13->dev;


 VAR_13->enable_tx_fc_filter = VAR_7;
 VAR_13->dbg_mask = VAR_3;
 VAR_13->hw.debug_mask = VAR_11;
 VAR_13->vsi.enable_head_writeback = !!(VAR_6);
 VAR_13->enable_vf_loopback = !!(VAR_8);





 if (VAR_9 > 3 || VAR_9 < 0)
  VAR_13->i2c_access_method = 0;
 else
  VAR_13->i2c_access_method = VAR_9;

 if (VAR_12 < 0 || VAR_12 > VAR_2) {
  FUNC_0(VAR_14, "Invalid tx_itr value of %d set!\n",
      VAR_12);
  FUNC_0(VAR_14, "tx_itr must be between %d and %d, "
      "inclusive\n",
      0, VAR_2);
  FUNC_0(VAR_14, "Using default value of %d instead\n",
      VAR_0);
  VAR_13->tx_itr = VAR_0;
 } else
  VAR_13->tx_itr = VAR_12;

 if (VAR_10 < 0 || VAR_10 > VAR_2) {
  FUNC_0(VAR_14, "Invalid rx_itr value of %d set!\n",
      VAR_10);
  FUNC_0(VAR_14, "rx_itr must be between %d and %d, "
      "inclusive\n",
      0, VAR_2);
  FUNC_0(VAR_14, "Using default value of %d instead\n",
      VAR_1);
  VAR_13->rx_itr = VAR_1;
 } else
  VAR_13->rx_itr = VAR_10;
}
