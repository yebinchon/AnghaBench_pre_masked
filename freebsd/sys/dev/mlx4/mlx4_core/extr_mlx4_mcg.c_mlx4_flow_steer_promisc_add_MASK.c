
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct mlx4_net_trans_rule {int allow_loopback; int promisc_mode; size_t port; int list; int qpn; int exclusive; int queue_mode; } ;
struct mlx4_dev {scalar_t__* regid_promisc_array; scalar_t__* regid_allmulti_array; } ;
typedef enum mlx4_net_trans_promisc_mode { ____Placeholder_mlx4_net_trans_promisc_mode } mlx4_net_trans_promisc_mode ;


 int FUNC_0 (int *) ;


 int VAR_0 ;
 int FUNC_1 (struct mlx4_dev*,char*,size_t) ;
 int FUNC_2 (struct mlx4_dev*,struct mlx4_net_trans_rule*,scalar_t__*) ;

int FUNC_3(struct mlx4_dev *VAR_1, u8 VAR_2,
    u32 VAR_3, enum mlx4_net_trans_promisc_mode VAR_4)
{
 struct mlx4_net_trans_rule VAR_5 = {
  .queue_mode = VAR_0,
  .exclusive = 0,
  .allow_loopback = 1,
 };

 u64 *VAR_6;

 switch (VAR_4) {
 case 129:
  VAR_6 = &VAR_1->regid_promisc_array[VAR_2];
  break;
 case 128:
  VAR_6 = &VAR_1->regid_allmulti_array[VAR_2];
  break;
 default:
  return -1;
 }

 if (*VAR_6 != 0)
  return -1;

 VAR_5.promisc_mode = VAR_4;
 VAR_5.port = VAR_2;
 VAR_5.qpn = VAR_3;
 FUNC_0(&VAR_5.list);
 FUNC_1(VAR_1, "going promisc on %x\n", VAR_2);

 return FUNC_2(VAR_1, &VAR_5, VAR_6);
}
