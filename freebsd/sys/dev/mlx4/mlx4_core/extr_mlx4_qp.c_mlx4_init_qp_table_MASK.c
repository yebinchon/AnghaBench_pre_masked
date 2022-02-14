
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_qp_table {int lock; } ;
struct TYPE_5__ {int dmfs_high_rate_qpn_base; int dmfs_high_rate_qpn_range; scalar_t__* reserved_qps_cnt; int num_qps; int* reserved_qps_base; int num_ports; scalar_t__* qp1_proxy; scalar_t__* qp1_tunnel; scalar_t__* qp0_proxy; scalar_t__* qp0_tunnel; } ;
struct TYPE_4__ {scalar_t__ base_sqpn; scalar_t__ base_proxy_sqpn; scalar_t__ base_tunnel_sqpn; } ;
struct mlx4_dev {TYPE_2__ caps; TYPE_1__ phys_caps; int qp_table_tree; } ;
struct TYPE_6__ {struct mlx4_qp_table qp_table; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_2 (int,int,int ) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (struct mlx4_dev*,scalar_t__) ;
 int FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*,int,int,int,int,int) ;
 int FUNC_7 (struct mlx4_dev*,char*) ;
 scalar_t__ FUNC_8 (struct mlx4_dev*) ;
 scalar_t__ FUNC_9 (struct mlx4_dev*) ;
 int FUNC_10 (struct mlx4_dev*) ;
 int FUNC_11 (struct mlx4_dev*) ;
 TYPE_3__* FUNC_12 (struct mlx4_dev*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int,int) ;

int FUNC_16(struct mlx4_dev *VAR_8)
{
 struct mlx4_qp_table *VAR_9 = &FUNC_12(VAR_8)->qp_table;
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 u32 VAR_16 = VAR_8->caps.dmfs_high_rate_qpn_base +
   VAR_8->caps.dmfs_high_rate_qpn_range;

 FUNC_14(&VAR_9->lock);
 FUNC_1(&VAR_8->qp_table_tree, VAR_2);
 if (FUNC_9(VAR_8))
  return 0;
 for (VAR_13 = 0; VAR_13 <= VAR_7; VAR_13++)
  VAR_14 += VAR_8->caps.reserved_qps_cnt[VAR_13];

 if (VAR_14 < VAR_16)
  VAR_14 = VAR_16;


 VAR_15 =
  FUNC_13(VAR_14 + 1);
 VAR_8->phys_caps.base_sqpn = FUNC_0(VAR_15, 8);

 {
  int VAR_17[VAR_6];
  int VAR_18, VAR_19;
  int VAR_20 = VAR_8->caps.num_qps;

  for (VAR_18 = 1; VAR_18 < VAR_6; ++VAR_18)
   VAR_17[VAR_18] = VAR_18;

  for (VAR_18 = VAR_6; VAR_18 > VAR_7; --VAR_18) {
   for (VAR_19 = VAR_7 + 2; VAR_19 < VAR_18; ++VAR_19) {
    if (VAR_8->caps.reserved_qps_cnt[VAR_17[VAR_19]] >
        VAR_8->caps.reserved_qps_cnt[VAR_17[VAR_19 - 1]])
     FUNC_15(VAR_17[VAR_19], VAR_17[VAR_19 - 1]);
   }
  }

  for (VAR_18 = VAR_7 + 1; VAR_18 < VAR_6; ++VAR_18) {
   VAR_20 -= VAR_8->caps.reserved_qps_cnt[VAR_17[VAR_18]];
   VAR_8->caps.reserved_qps_base[VAR_17[VAR_18]] = VAR_20;
   VAR_11 +=
    VAR_8->caps.reserved_qps_cnt[VAR_17[VAR_18]];
  }
 }
 VAR_12 = FUNC_11(VAR_8);
 if (VAR_12 + VAR_11 > VAR_8->caps.num_qps) {
  FUNC_7(VAR_8, "Number of reserved QPs is higher than number of QPs\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_6(VAR_8, VAR_12, VAR_12,
    VAR_15,
    VAR_14,
    VAR_16);

 if (VAR_10)
  return VAR_10;

 if (FUNC_8(VAR_8)) {

  VAR_8->phys_caps.base_proxy_sqpn = VAR_8->phys_caps.base_sqpn + 8;
  VAR_8->phys_caps.base_tunnel_sqpn = VAR_8->phys_caps.base_sqpn + 8 + 8 * VAR_5;



  VAR_8->caps.qp0_tunnel = FUNC_2(VAR_8->caps.num_ports, sizeof (u32), VAR_3);
  VAR_8->caps.qp0_proxy = FUNC_2(VAR_8->caps.num_ports, sizeof (u32), VAR_3);
  VAR_8->caps.qp1_tunnel = FUNC_2(VAR_8->caps.num_ports, sizeof (u32), VAR_3);
  VAR_8->caps.qp1_proxy = FUNC_2(VAR_8->caps.num_ports, sizeof (u32), VAR_3);

  if (!VAR_8->caps.qp0_tunnel || !VAR_8->caps.qp0_proxy ||
      !VAR_8->caps.qp1_tunnel || !VAR_8->caps.qp1_proxy) {
   VAR_10 = -VAR_1;
   goto err_mem;
  }

  for (VAR_13 = 0; VAR_13 < VAR_8->caps.num_ports; VAR_13++) {
   VAR_8->caps.qp0_proxy[VAR_13] = VAR_8->phys_caps.base_proxy_sqpn +
    8 * FUNC_10(VAR_8) + VAR_13;
   VAR_8->caps.qp0_tunnel[VAR_13] = VAR_8->caps.qp0_proxy[VAR_13] + 8 * VAR_5;
   VAR_8->caps.qp1_proxy[VAR_13] = VAR_8->phys_caps.base_proxy_sqpn +
    8 * FUNC_10(VAR_8) + VAR_4 + VAR_13;
   VAR_8->caps.qp1_tunnel[VAR_13] = VAR_8->caps.qp1_proxy[VAR_13] + 8 * VAR_5;
  }
 }


 VAR_10 = FUNC_4(VAR_8, VAR_8->phys_caps.base_sqpn);
 if (VAR_10)
  goto err_mem;

 return VAR_10;

err_mem:
 FUNC_3(VAR_8->caps.qp0_tunnel);
 FUNC_3(VAR_8->caps.qp0_proxy);
 FUNC_3(VAR_8->caps.qp1_tunnel);
 FUNC_3(VAR_8->caps.qp1_proxy);
 VAR_8->caps.qp0_tunnel = VAR_8->caps.qp0_proxy =
  VAR_8->caps.qp1_tunnel = VAR_8->caps.qp1_proxy = ((void*)0);
 FUNC_5(VAR_8);
 return VAR_10;
}
