
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {struct mlx5_flow_table* t; } ;
struct TYPE_5__ {TYPE_1__ main; } ;
struct mlx5e_priv {int* tirn; TYPE_2__ fts; } ;
struct mlx5e_eth_addr_info {int tt_vec; struct mlx5_flow_rule** ft_rule; int addr; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_rule {int dummy; } ;
struct mlx5_flow_destination {int tir_num; int type; } ;
struct TYPE_6__ {int ethertype; int ip_protocol; int dmac_47_16; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct mlx5_flow_rule*) ;



 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int* FUNC_2 (int ,int*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (int ,int*,int ,int ) ;
 int FUNC_4 (int ,int*,int ) ;
 int FUNC_5 (struct mlx5_flow_rule*) ;
 int FUNC_6 (int*,int ) ;
 int VAR_22 ;
 int FUNC_7 (int*,int,int ) ;
 struct mlx5_flow_rule* FUNC_8 (struct mlx5_flow_table*,int,int*,int*,int ,int ,struct mlx5_flow_destination*) ;
 int FUNC_9 (struct mlx5e_priv*,struct mlx5e_eth_addr_info*) ;
 int FUNC_10 (struct mlx5e_eth_addr_info*,int) ;
 TYPE_3__ VAR_23 ;

__attribute__((used)) static int
FUNC_11(struct mlx5e_priv *VAR_24,
    struct mlx5e_eth_addr_info *VAR_25, int VAR_26,
    u32 *VAR_27, u32 *VAR_28)
{
 struct mlx5_flow_destination VAR_29 = {};
 u8 VAR_30 = 0;
 struct mlx5_flow_rule **VAR_31;
 struct mlx5_flow_table *VAR_32 = VAR_24->fts.main.t;
 u8 *VAR_33 = FUNC_2(VAR_22, VAR_27,
       VAR_23.dmac_47_16);
 u8 *VAR_34 = FUNC_2(VAR_22, VAR_28,
       VAR_23.dmac_47_16);
 u32 *VAR_35 = VAR_24->tirn;
 u32 VAR_36;
 int VAR_37 = 0;

 VAR_29.type = VAR_19;

 switch (VAR_26) {
 case 129:
  VAR_30 = VAR_21;
  FUNC_7(VAR_33, 0xff, VAR_2);
  FUNC_6(VAR_34, VAR_25->addr);
  break;

 case 130:
  VAR_30 = VAR_21;
  VAR_33[0] = 0x01;
  VAR_34[0] = 0x01;
  break;

 case 128:
  break;
 default:
  break;
 }

 VAR_36 = FUNC_10(VAR_25, VAR_26);

 if (VAR_36 & FUNC_0(VAR_7)) {
  VAR_31 = &VAR_25->ft_rule[VAR_7];
  VAR_29.tir_num = VAR_35[VAR_7];
  *VAR_31 = FUNC_8(VAR_32, VAR_30, VAR_27, VAR_28,
          VAR_18,
          VAR_20, &VAR_29);
  if (FUNC_1(*VAR_31))
   goto err_del_ai;
  VAR_25->tt_vec |= FUNC_0(VAR_7);
 }

 VAR_30 = VAR_21;
 FUNC_4(VAR_22, VAR_27, VAR_23.ethertype);

 if (VAR_36 & FUNC_0(VAR_8)) {
  VAR_31 = &VAR_25->ft_rule[VAR_8];
  VAR_29.tir_num = VAR_35[VAR_8];
  FUNC_3(VAR_22, VAR_28, VAR_23.ethertype,
    VAR_0);
  *VAR_31 = FUNC_8(VAR_32, VAR_30, VAR_27, VAR_28,
          VAR_18,
          VAR_20, &VAR_29);
  if (FUNC_1(*VAR_31))
   goto err_del_ai;
  VAR_25->tt_vec |= FUNC_0(VAR_8);
 }

 if (VAR_36 & FUNC_0(VAR_13)) {
  VAR_31 = &VAR_25->ft_rule[VAR_13];
  VAR_29.tir_num = VAR_35[VAR_13];
  FUNC_3(VAR_22, VAR_28, VAR_23.ethertype,
    VAR_1);
  *VAR_31 = FUNC_8(VAR_32, VAR_30, VAR_27, VAR_28,
          VAR_18,
          VAR_20, &VAR_29);
  if (FUNC_1(*VAR_31))
   goto err_del_ai;
  VAR_25->tt_vec |= FUNC_0(VAR_13);
 }

 FUNC_4(VAR_22, VAR_27, VAR_23.ip_protocol);
 FUNC_3(VAR_22, VAR_28, VAR_23.ip_protocol, VAR_6);

 if (VAR_36 & FUNC_0(VAR_12)) {
  VAR_31 = &VAR_25->ft_rule[VAR_12];
  VAR_29.tir_num = VAR_35[VAR_12];
  FUNC_3(VAR_22, VAR_28, VAR_23.ethertype,
    VAR_0);
  *VAR_31 = FUNC_8(VAR_32, VAR_30, VAR_27, VAR_28,
          VAR_18,
          VAR_20, &VAR_29);
  if (FUNC_1(*VAR_31))
   goto err_del_ai;
  VAR_25->tt_vec |= FUNC_0(VAR_12);
 }

 if (VAR_36 & FUNC_0(VAR_17)) {
  VAR_31 = &VAR_25->ft_rule[VAR_17];
  VAR_29.tir_num = VAR_35[VAR_17];
  FUNC_3(VAR_22, VAR_28, VAR_23.ethertype,
    VAR_1);
  *VAR_31 = FUNC_8(VAR_32, VAR_30, VAR_27, VAR_28,
          VAR_18,
          VAR_20, &VAR_29);
  if (FUNC_1(*VAR_31))
   goto err_del_ai;
  VAR_25->tt_vec |= FUNC_0(VAR_17);
 }

 FUNC_3(VAR_22, VAR_28, VAR_23.ip_protocol, VAR_5);

 if (VAR_36 & FUNC_0(VAR_11)) {
  VAR_31 = &VAR_25->ft_rule[VAR_11];
  VAR_29.tir_num = VAR_35[VAR_11];
  FUNC_3(VAR_22, VAR_28, VAR_23.ethertype,
    VAR_0);
  *VAR_31 = FUNC_8(VAR_32, VAR_30, VAR_27, VAR_28,
          VAR_18,
          VAR_20, &VAR_29);
  if (FUNC_1(*VAR_31))
   goto err_del_ai;
  VAR_25->tt_vec |= FUNC_0(VAR_11);
 }

 if (VAR_36 & FUNC_0(VAR_16)) {
  VAR_31 = &VAR_25->ft_rule[VAR_16];
  VAR_29.tir_num = VAR_35[VAR_16];
  FUNC_3(VAR_22, VAR_28, VAR_23.ethertype,
    VAR_1);
  *VAR_31 = FUNC_8(VAR_32, VAR_30, VAR_27, VAR_28,
          VAR_18,
          VAR_20, &VAR_29);
  if (FUNC_1(*VAR_31))
   goto err_del_ai;

  VAR_25->tt_vec |= FUNC_0(VAR_16);
 }

 FUNC_3(VAR_22, VAR_28, VAR_23.ip_protocol, VAR_3);

 if (VAR_36 & FUNC_0(VAR_9)) {
  VAR_31 = &VAR_25->ft_rule[VAR_9];
  VAR_29.tir_num = VAR_35[VAR_9];
  FUNC_3(VAR_22, VAR_28, VAR_23.ethertype,
    VAR_0);
  *VAR_31 = FUNC_8(VAR_32, VAR_30, VAR_27, VAR_28,
          VAR_18,
          VAR_20, &VAR_29);
  if (FUNC_1(*VAR_31))
   goto err_del_ai;
  VAR_25->tt_vec |= FUNC_0(VAR_9);
 }

 if (VAR_36 & FUNC_0(VAR_14)) {
  VAR_31 = &VAR_25->ft_rule[VAR_14];
  VAR_29.tir_num = VAR_35[VAR_14];
  FUNC_3(VAR_22, VAR_28, VAR_23.ethertype,
    VAR_1);
  *VAR_31 = FUNC_8(VAR_32, VAR_30, VAR_27, VAR_28,
          VAR_18,
          VAR_20, &VAR_29);
  if (FUNC_1(*VAR_31))
   goto err_del_ai;
  VAR_25->tt_vec |= FUNC_0(VAR_14);
 }

 FUNC_3(VAR_22, VAR_28, VAR_23.ip_protocol, VAR_4);

 if (VAR_36 & FUNC_0(VAR_10)) {
  VAR_31 = &VAR_25->ft_rule[VAR_10];
  VAR_29.tir_num = VAR_35[VAR_10];
  FUNC_3(VAR_22, VAR_28, VAR_23.ethertype,
    VAR_0);
  *VAR_31 = FUNC_8(VAR_32, VAR_30, VAR_27, VAR_28,
          VAR_18,
          VAR_20, &VAR_29);
  if (FUNC_1(*VAR_31))
   goto err_del_ai;
  VAR_25->tt_vec |= FUNC_0(VAR_10);
 }

 if (VAR_36 & FUNC_0(VAR_15)) {
  VAR_31 = &VAR_25->ft_rule[VAR_15];
  VAR_29.tir_num = VAR_35[VAR_15];
  FUNC_3(VAR_22, VAR_28, VAR_23.ethertype,
    VAR_1);
  *VAR_31 = FUNC_8(VAR_32, VAR_30, VAR_27, VAR_28,
          VAR_18,
          VAR_20, &VAR_29);
  if (FUNC_1(*VAR_31))
   goto err_del_ai;
  VAR_25->tt_vec |= FUNC_0(VAR_15);
 }

 return 0;

err_del_ai:
 VAR_37 = FUNC_5(*VAR_31);
 *VAR_31 = ((void*)0);
 FUNC_9(VAR_24, VAR_25);

 return VAR_37;
}
