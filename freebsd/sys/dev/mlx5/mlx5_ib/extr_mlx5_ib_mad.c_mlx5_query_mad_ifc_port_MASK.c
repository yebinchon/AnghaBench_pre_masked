
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {TYPE_1__* port_caps; } ;
struct ib_smp {int* data; void* attr_mod; int attr_id; } ;
struct ib_port_attr {int lmc; int sm_sl; int state; int phys_state; int port_cap_flags; int gid_tbl_len; int max_msg_sz; int active_width; int active_speed; int max_mtu; int active_mtu; int subnet_timeout; int max_vl_num; int init_type_reply; void* qkey_viol_cntr; void* bad_pkey_cntr; int pkey_tbl_len; void* sm_lid; void* lid; } ;
struct ib_device {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_2__ {int ext_port_cap; int pkey_table_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_6 ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct ib_smp*) ;
 int FUNC_5 (struct ib_smp*) ;
 struct ib_smp* FUNC_6 (int,int ) ;
 struct ib_smp* FUNC_7 (int,int ) ;
 int VAR_7 ;
 int FUNC_8 (struct ib_port_attr*,int ,int) ;
 int FUNC_9 (struct mlx5_ib_dev*,int,int,int,int *,int *,struct ib_smp*,struct ib_smp*) ;
 int FUNC_10 (struct mlx5_ib_dev*,char*,int) ;
 int VAR_8 ;
 struct mlx5_ib_dev* FUNC_11 (struct ib_device*) ;

int FUNC_12(struct ib_device *VAR_9, u8 VAR_10,
       struct ib_port_attr *VAR_11)
{
 struct mlx5_ib_dev *VAR_12 = FUNC_11(VAR_9);
 struct mlx5_core_dev *VAR_13 = VAR_12->mdev;
 struct ib_smp *VAR_14 = ((void*)0);
 struct ib_smp *VAR_15 = ((void*)0);
 int VAR_16;
 int VAR_17 = -VAR_1;

 if (VAR_10 < 1 || VAR_10 > FUNC_0(VAR_13, VAR_8)) {
  FUNC_10(VAR_12, "invalid port number %d\n", VAR_10);
  return -VAR_0;
 }

 VAR_14 = FUNC_7(sizeof(*VAR_14), VAR_2);
 VAR_15 = FUNC_6(sizeof(*VAR_15), VAR_2);
 if (!VAR_14 || !VAR_15)
  goto out;

 FUNC_8(VAR_11, 0, sizeof(*VAR_11));

 FUNC_4(VAR_14);
 VAR_14->attr_id = VAR_4;
 VAR_14->attr_mod = FUNC_3(VAR_10);

 VAR_17 = FUNC_9(VAR_12, 1, 1, VAR_10, ((void*)0), ((void*)0), VAR_14, VAR_15);
 if (VAR_17) {
  FUNC_10(VAR_12, "err %d\n", VAR_17);
  goto out;
 }

 VAR_11->lid = FUNC_1((__be16 *)(VAR_15->data + 16));
 VAR_11->lmc = VAR_15->data[34] & 0x7;
 VAR_11->sm_lid = FUNC_1((__be16 *)(VAR_15->data + 18));
 VAR_11->sm_sl = VAR_15->data[36] & 0xf;
 VAR_11->state = VAR_15->data[32] & 0xf;
 VAR_11->phys_state = VAR_15->data[33] >> 4;
 VAR_11->port_cap_flags = FUNC_2((__be32 *)(VAR_15->data + 20));
 VAR_11->gid_tbl_len = VAR_15->data[50];
 VAR_11->max_msg_sz = 1 << FUNC_0(VAR_13, VAR_7);
 VAR_11->pkey_tbl_len = VAR_13->port_caps[VAR_10 - 1].pkey_table_len;
 VAR_11->bad_pkey_cntr = FUNC_1((__be16 *)(VAR_15->data + 46));
 VAR_11->qkey_viol_cntr = FUNC_1((__be16 *)(VAR_15->data + 48));
 VAR_11->active_width = VAR_15->data[31] & 0xf;
 VAR_11->active_speed = VAR_15->data[35] >> 4;
 VAR_11->max_mtu = VAR_15->data[41] & 0xf;
 VAR_11->active_mtu = VAR_15->data[36] >> 4;
 VAR_11->subnet_timeout = VAR_15->data[51] & 0x1f;
 VAR_11->max_vl_num = VAR_15->data[37] >> 4;
 VAR_11->init_type_reply = VAR_15->data[41] >> 4;


 if (VAR_11->port_cap_flags & VAR_3) {
  VAR_16 = VAR_15->data[62] >> 4;

  switch (VAR_16) {
  case 1:
   VAR_11->active_speed = 16;
   break;
  case 2:
   VAR_11->active_speed = 32;
   break;
  }
 }


 if (VAR_11->active_speed == 4) {
  if (VAR_13->port_caps[VAR_10 - 1].ext_port_cap &
      VAR_6) {
   FUNC_4(VAR_14);
   VAR_14->attr_id = VAR_5;
   VAR_14->attr_mod = FUNC_3(VAR_10);

   VAR_17 = FUNC_9(VAR_12, 1, 1, VAR_10,
        ((void*)0), ((void*)0), VAR_14, VAR_15);
   if (VAR_17)
    goto out;


   if (VAR_15->data[15] & 0x1)
    VAR_11->active_speed = 8;
  }
 }

out:
 FUNC_5(VAR_14);
 FUNC_5(VAR_15);

 return VAR_17;
}
