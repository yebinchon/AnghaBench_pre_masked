
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ptys_reg {void* eth_proto_lp_advertise; void* ib_proto_oper; void* ib_link_width_oper; void* eth_proto_oper; void* ib_proto_admin; void* ib_link_width_admin; void* eth_proto_admin; void* ib_proto_cap; void* ib_link_width_cap; void* eth_proto_cap; void* proto_mask; void* local_port; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,void*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,void*,int ,void*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int VAR_12 ;
 int FUNC_5 (struct mlx5_core_dev*,void*,int,void*,int,int ,int ,int) ;
 void* FUNC_6 (int) ;
 int VAR_13 ;
 int VAR_14 ;

int FUNC_7(struct mlx5_core_dev *VAR_15,
     struct mlx5_ptys_reg *VAR_16, int VAR_17)
{
 int VAR_18 = FUNC_2(VAR_14);
 void *VAR_19 = ((void*)0);
 void *VAR_20 = ((void*)0);
 int VAR_21;

 VAR_20 = FUNC_6(VAR_18);
 if (!VAR_20)
  return -VAR_0;

 VAR_19 = FUNC_6(VAR_18);
 if (!VAR_19) {
  FUNC_3(VAR_20);
  return -VAR_0;
 }

 FUNC_1(VAR_14, VAR_20, VAR_12, VAR_16->local_port);
 FUNC_1(VAR_14, VAR_20, VAR_13, VAR_16->proto_mask);
 if (VAR_17) {
  FUNC_1(VAR_14, VAR_20, VAR_3,
    VAR_16->eth_proto_cap);
  FUNC_1(VAR_14, VAR_20, VAR_7,
    VAR_16->ib_link_width_cap);
  FUNC_1(VAR_14, VAR_20, VAR_10,
    VAR_16->ib_proto_cap);
  FUNC_1(VAR_14, VAR_20, VAR_2, VAR_16->eth_proto_admin);
  FUNC_1(VAR_14, VAR_20, VAR_6,
    VAR_16->ib_link_width_admin);
  FUNC_1(VAR_14, VAR_20, VAR_9, VAR_16->ib_proto_admin);
  FUNC_1(VAR_14, VAR_20, VAR_5, VAR_16->eth_proto_oper);
  FUNC_1(VAR_14, VAR_20, VAR_8,
    VAR_16->ib_link_width_oper);
  FUNC_1(VAR_14, VAR_20, VAR_11, VAR_16->ib_proto_oper);
  FUNC_1(VAR_14, VAR_20, VAR_4,
    VAR_16->eth_proto_lp_advertise);
 }

 VAR_21 = FUNC_5(VAR_15, VAR_20, VAR_18, VAR_19, VAR_18, VAR_1, 0,
       !!VAR_17);
 if (VAR_21)
  goto out;

 if (!VAR_17) {
  VAR_16->local_port = FUNC_0(VAR_14, VAR_19, VAR_12);
  VAR_16->proto_mask = FUNC_0(VAR_14, VAR_19, VAR_13);
  VAR_16->eth_proto_cap = FUNC_0(VAR_14, VAR_19,
            VAR_3);
  VAR_16->ib_link_width_cap = FUNC_0(VAR_14, VAR_19,
        VAR_7);
  VAR_16->ib_proto_cap = FUNC_0(VAR_14, VAR_19,
           VAR_10);
  VAR_16->eth_proto_admin = FUNC_0(VAR_14, VAR_19,
       VAR_2);
  VAR_16->ib_link_width_admin = FUNC_0(VAR_14, VAR_19,
           VAR_6);
  VAR_16->ib_proto_admin = FUNC_0(VAR_14, VAR_19, VAR_9);
  VAR_16->eth_proto_oper = FUNC_0(VAR_14, VAR_19, VAR_5);
  VAR_16->ib_link_width_oper = FUNC_0(VAR_14, VAR_19,
          VAR_8);
  VAR_16->ib_proto_oper = FUNC_0(VAR_14, VAR_19, VAR_11);
  VAR_16->eth_proto_lp_advertise = FUNC_0(VAR_14, VAR_19,
       VAR_4);
 }

out:
 FUNC_4(VAR_20);
 FUNC_4(VAR_19);
 return VAR_21;
}
