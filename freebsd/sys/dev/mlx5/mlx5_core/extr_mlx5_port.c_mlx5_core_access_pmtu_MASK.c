
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_pmtu_reg {void* oper_mtu; void* admin_mtu; void* max_mtu; void* local_port; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,void*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,void*,int ,void*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct mlx5_core_dev*,void*,int,void*,int,int ,int ,int) ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (struct mlx5_core_dev*,void*) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_8(struct mlx5_core_dev *VAR_7,
     struct mlx5_pmtu_reg *VAR_8, int VAR_9)
{
 int VAR_10 = FUNC_2(VAR_6);
 void *VAR_11 = ((void*)0);
 void *VAR_12 = ((void*)0);
 int VAR_13;

 VAR_12 = FUNC_6(VAR_10);
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = FUNC_6(VAR_10);
 if (!VAR_11) {
  FUNC_3(VAR_12);
  return -VAR_0;
 }

 FUNC_1(VAR_6, VAR_12, VAR_3, VAR_8->local_port);
 if (VAR_9)
  FUNC_1(VAR_6, VAR_12, VAR_2, VAR_8->admin_mtu);

 VAR_13 = FUNC_5(VAR_7, VAR_12, VAR_10, VAR_11, VAR_10, VAR_1, 0,
       !!VAR_9);
 if (VAR_13)
  goto out;

 if (!VAR_9) {
  VAR_8->local_port = FUNC_0(VAR_6, VAR_11, VAR_3);
  VAR_8->max_mtu = FUNC_7(VAR_7, FUNC_0(VAR_6, VAR_11,
             VAR_4));
  VAR_8->admin_mtu = FUNC_7(VAR_7, FUNC_0(VAR_6, VAR_11,
        VAR_2));
  VAR_8->oper_mtu = FUNC_7(VAR_7, FUNC_0(VAR_6, VAR_11,
       VAR_5));
 }

out:
 FUNC_4(VAR_12);
 FUNC_4(VAR_11);
 return VAR_13;
}
