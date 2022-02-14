
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_dev {int steer_qpn_base; int steer_qpn_count; int ib_uc_qpns_bitmap; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int) ;

int FUNC_3(struct mlx4_ib_dev *VAR_0, int VAR_1, int *VAR_2)
{
 int VAR_3;

 FUNC_0(!VAR_0->ib_uc_qpns_bitmap);

 VAR_3 = FUNC_1(VAR_0->ib_uc_qpns_bitmap,
      VAR_0->steer_qpn_count,
      FUNC_2(VAR_1));
 if (VAR_3 < 0)
  return VAR_3;

 *VAR_2 = VAR_0->steer_qpn_base + VAR_3;
 return 0;
}
