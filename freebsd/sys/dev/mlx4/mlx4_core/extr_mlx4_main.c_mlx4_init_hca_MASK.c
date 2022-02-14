
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct mlx4_profile {int num_mcg; } ;
struct TYPE_3__ {int inta_pin; } ;
struct mlx4_priv {TYPE_1__ eq_table; } ;
struct mlx4_init_hca_param {int log_uar_sz; int hca_core_clock; scalar_t__ mw_enabled; void* uar_page_sz; } ;
struct mlx4_dev_cap {int flags2; int reserved_uars; int reserved_eqs; int max_eqs; } ;
struct TYPE_4__ {scalar_t__ dmfs_high_steer_mode; scalar_t__ steering_mode; int max_fmr_maps; int flags; int bmme_flags; int flags2; int qp1_proxy; int qp1_tunnel; int qp0_proxy; int qp0_tunnel; int qp0_qkey; int * rx_checksum_flags_port; int dmfs_high_rate_qpn_range; int * reserved_qps_cnt; int dmfs_high_rate_qpn_base; int hca_core_clock; int reserved_uars; int reserved_eqs; int num_eqs; int num_uars; int num_mpts; int function_caps; } ;
struct mlx4_dev {TYPE_2__ caps; int board_id; } ;
struct mlx4_config_dev_params {int rx_csum_flags_port_2; int rx_csum_flags_port_1; } ;
struct mlx4_adapter {int board_id; int inta_pin; } ;
typedef int init_hca ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 void* VAR_17 ;
 int FUNC_0 (struct mlx4_dev*,struct mlx4_dev_cap*) ;
 int FUNC_1 (struct mlx4_dev*,struct mlx4_dev_cap*) ;
 struct mlx4_profile VAR_18 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_19 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct mlx4_profile VAR_20 ;
 scalar_t__ FUNC_5 (struct mlx4_dev*) ;
 scalar_t__ FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct mlx4_init_hca_param*,int ,int) ;
 int FUNC_9 (struct mlx4_dev*,int ) ;
 int FUNC_10 (struct mlx4_dev*,struct mlx4_init_hca_param*) ;
 int FUNC_11 (struct mlx4_dev*,struct mlx4_adapter*) ;
 int FUNC_12 (struct mlx4_dev*,struct mlx4_init_hca_param*) ;
 int FUNC_13 (struct mlx4_dev*,struct mlx4_config_dev_params*) ;
 int FUNC_14 (struct mlx4_dev*,char*,...) ;
 int FUNC_15 (struct mlx4_dev*,struct mlx4_dev_cap*) ;
 int FUNC_16 (struct mlx4_dev*,char*) ;
 int FUNC_17 (struct mlx4_dev*) ;
 int FUNC_18 (struct mlx4_dev*) ;
 int FUNC_19 (struct mlx4_dev*,char*) ;
 int FUNC_20 (struct mlx4_dev*,struct mlx4_dev_cap*,struct mlx4_init_hca_param*,int) ;
 int FUNC_21 (struct mlx4_dev*) ;
 scalar_t__ FUNC_22 (struct mlx4_dev*) ;
 scalar_t__ FUNC_23 (struct mlx4_dev*) ;
 scalar_t__ FUNC_24 () ;
 int FUNC_25 (struct mlx4_dev*,struct mlx4_profile*,struct mlx4_dev_cap*,struct mlx4_init_hca_param*) ;
 int FUNC_26 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_27 (struct mlx4_dev*) ;
 int FUNC_28 (struct mlx4_dev*,struct mlx4_dev_cap*) ;
 int FUNC_29 (struct mlx4_dev*) ;
 int FUNC_30 (struct mlx4_dev*) ;
 int FUNC_31 (struct mlx4_dev*) ;
 scalar_t__ FUNC_32 (struct mlx4_dev*) ;
 int FUNC_33 (struct mlx4_dev*,char*) ;
 int FUNC_34 (struct mlx4_dev*) ;
 int FUNC_35 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_36(struct mlx4_dev *VAR_21)
{
 struct mlx4_priv *VAR_22 = FUNC_27(VAR_21);
 struct mlx4_adapter VAR_23;
 struct mlx4_dev_cap VAR_24 = {};
 struct mlx4_profile VAR_25;
 struct mlx4_init_hca_param VAR_26;
 u64 VAR_27;
 struct mlx4_config_dev_params VAR_28;
 int VAR_29;

 if (!FUNC_23(VAR_21)) {
  VAR_29 = FUNC_15(VAR_21, &VAR_24);
  if (VAR_29) {
   FUNC_16(VAR_21, "QUERY_DEV_CAP command failed, aborting\n");
   return VAR_29;
  }

  FUNC_0(VAR_21, &VAR_24);
  FUNC_1(VAR_21, &VAR_24);

  if (VAR_21->caps.dmfs_high_steer_mode == VAR_15 &&
      FUNC_22(VAR_21))
   VAR_21->caps.function_caps |= VAR_10;

  VAR_29 = FUNC_18(VAR_21);
  if (VAR_29)
   FUNC_16(VAR_21, "Fail to get physical port id\n");

  if (FUNC_22(VAR_21))
   FUNC_26(VAR_21);

  if (FUNC_24()) {
   FUNC_19(VAR_21, "Running from within kdump kernel. Using low memory profile\n");
   VAR_25 = VAR_20;
  } else {
   VAR_25 = VAR_18;
  }
  if (VAR_21->caps.steering_mode ==
      VAR_16)
   VAR_25.num_mcg = VAR_9;

  VAR_27 = FUNC_25(VAR_21, &VAR_25, &VAR_24,
          &VAR_26);
  if ((long long) VAR_27 < 0) {
   VAR_29 = VAR_27;
   return VAR_29;
  }

  VAR_21->caps.max_fmr_maps = (1 << (32 - FUNC_3(VAR_21->caps.num_mpts))) - 1;

  if (VAR_19) {
   VAR_26.log_uar_sz = FUNC_3(VAR_21->caps.num_uars) +
          VAR_17 - VAR_0;
   VAR_26.uar_page_sz = VAR_0 - 12;
  } else {
   VAR_26.log_uar_sz = FUNC_3(VAR_21->caps.num_uars);
   VAR_26.uar_page_sz = VAR_17 - 12;
  }

  VAR_26.mw_enabled = 0;
  if (VAR_21->caps.flags & VAR_8 ||
      VAR_21->caps.bmme_flags & VAR_5)
   VAR_26.mw_enabled = VAR_3;

  VAR_29 = FUNC_20(VAR_21, &VAR_24, &VAR_26, VAR_27);
  if (VAR_29)
   return VAR_29;

  VAR_29 = FUNC_10(VAR_21, &VAR_26);
  if (VAR_29) {
   FUNC_16(VAR_21, "INIT_HCA command failed, aborting\n");
   goto err_free_icm;
  }

  if (VAR_24.flags2 & VAR_6) {
   VAR_29 = FUNC_28(VAR_21, &VAR_24);
   if (VAR_29 < 0) {
    FUNC_16(VAR_21, "QUERY_FUNC command failed, aborting.\n");
    goto err_close;
   } else if (VAR_29 & VAR_12) {
    VAR_21->caps.num_eqs = VAR_24.max_eqs;
    VAR_21->caps.reserved_eqs = VAR_24.reserved_eqs;
    VAR_21->caps.reserved_uars = VAR_24.reserved_uars;
   }
  }





  if (VAR_21->caps.flags2 & VAR_7) {
   FUNC_8(&VAR_26, 0, sizeof(VAR_26));
   VAR_29 = FUNC_12(VAR_21, &VAR_26);
   if (VAR_29) {
    FUNC_16(VAR_21, "QUERY_HCA command failed, disable timestamp\n");
    VAR_21->caps.flags2 &= ~VAR_7;
   } else {
    VAR_21->caps.hca_core_clock =
     VAR_26.hca_core_clock;
   }




   if (!VAR_21->caps.hca_core_clock) {
    VAR_21->caps.flags2 &= ~VAR_7;
    FUNC_16(VAR_21,
      "HCA frequency is 0 - timestamping is not supported\n");
   } else if (FUNC_6(VAR_21)) {




    VAR_21->caps.flags2 &= ~VAR_7;
    FUNC_16(VAR_21, "Failed to map internal clock. Timestamping is not supported\n");
   }
  }

  if (VAR_21->caps.dmfs_high_steer_mode !=
      VAR_14) {
   if (FUNC_32(VAR_21))
    FUNC_33(VAR_21, "Optimized steering validation failed\n");

   if (VAR_21->caps.dmfs_high_steer_mode ==
       VAR_13) {
    VAR_21->caps.dmfs_high_rate_qpn_base =
     VAR_21->caps.reserved_qps_cnt[VAR_11];
    VAR_21->caps.dmfs_high_rate_qpn_range =
     VAR_4;
   }

   FUNC_14(VAR_21, "DMFS high rate steer mode is: %s\n",
     FUNC_2(
     VAR_21->caps.dmfs_high_steer_mode));
  }
 } else {
  VAR_29 = FUNC_21(VAR_21);
  if (VAR_29) {
   if (VAR_29 != -VAR_1)
    FUNC_16(VAR_21, "Failed to initialize slave\n");
   return VAR_29;
  }

  VAR_29 = FUNC_30(VAR_21);
  if (VAR_29) {
   FUNC_16(VAR_21, "Failed to obtain slave caps\n");
   goto err_close;
  }
 }

 if (FUNC_5(VAR_21))
  FUNC_14(VAR_21, "Failed to map blue flame area\n");


 if (!FUNC_23(VAR_21))
  FUNC_29(VAR_21);

 VAR_29 = FUNC_11(VAR_21, &VAR_23);
 if (VAR_29) {
  FUNC_16(VAR_21, "QUERY_ADAPTER command failed, aborting\n");
  goto unmap_bf;
 }


 VAR_29 = FUNC_13(VAR_21, &VAR_28);
 if (VAR_29 && VAR_29 != -VAR_2) {
  FUNC_16(VAR_21, "Failed to query CONFIG_DEV parameters\n");
 } else if (!VAR_29) {
  VAR_21->caps.rx_checksum_flags_port[1] = VAR_28.rx_csum_flags_port_1;
  VAR_21->caps.rx_checksum_flags_port[2] = VAR_28.rx_csum_flags_port_2;
 }
 VAR_22->eq_table.inta_pin = VAR_23.inta_pin;
 FUNC_7(VAR_21->board_id, VAR_23.board_id, sizeof VAR_21->board_id);

 return 0;

unmap_bf:
 FUNC_35(VAR_21);
 FUNC_34(VAR_21);

 if (FUNC_23(VAR_21)) {
  FUNC_4(VAR_21->caps.qp0_qkey);
  FUNC_4(VAR_21->caps.qp0_tunnel);
  FUNC_4(VAR_21->caps.qp0_proxy);
  FUNC_4(VAR_21->caps.qp1_tunnel);
  FUNC_4(VAR_21->caps.qp1_proxy);
 }

err_close:
 if (FUNC_23(VAR_21))
  FUNC_31(VAR_21);
 else
  FUNC_9(VAR_21, 0);

err_free_icm:
 if (!FUNC_23(VAR_21))
  FUNC_17(VAR_21);

 return VAR_29;
}
