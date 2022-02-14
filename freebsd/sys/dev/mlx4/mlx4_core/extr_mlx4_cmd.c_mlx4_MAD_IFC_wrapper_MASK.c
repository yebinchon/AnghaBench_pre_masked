
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_vhcr {int in_modifier; int op_modifier; int op; } ;
struct TYPE_6__ {TYPE_1__* slave_state; } ;
struct TYPE_7__ {TYPE_2__ master; } ;
struct mlx4_priv {int*** virt2phys_pkey; TYPE_3__ mfunc; } ;
struct TYPE_8__ {int num_ports; int* pkey_table_len; } ;
struct mlx4_dev {TYPE_4__ caps; } ;
struct mlx4_cmd_mailbox {int dma; struct ib_smp* buf; } ;
struct mlx4_cmd_info {int dummy; } ;
struct ib_smp {int* data; int base_version; scalar_t__ mgmt_class; int class_version; scalar_t__ method; scalar_t__ attr_id; scalar_t__ attr_mod; } ;
typedef scalar_t__ __be64 ;
typedef scalar_t__ __be32 ;
typedef int __be16 ;
struct TYPE_5__ {scalar_t__* ib_cap_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct mlx4_dev*,int,int *,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*) ;
 int * FUNC_5 (int,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int*,scalar_t__*,int) ;
 int FUNC_8 (int*,int ,int) ;
 int FUNC_9 (struct mlx4_dev*,int ,int ,int,int,int ,int ,int ) ;
 int FUNC_10 (struct mlx4_dev*,char*,int,scalar_t__,scalar_t__,char*,int ) ;
 scalar_t__ FUNC_11 (struct mlx4_dev*,int,int) ;
 scalar_t__ FUNC_12 (struct mlx4_dev*,int) ;
 int FUNC_13 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_14 (struct mlx4_dev*) ;
 int FUNC_15 (struct mlx4_dev*,scalar_t__,int,int) ;
 int FUNC_16 (struct mlx4_dev*,int,int) ;
 int FUNC_17 (struct mlx4_dev*,int,int) ;
 int FUNC_18 (struct mlx4_dev*,int,int) ;

__attribute__((used)) static int FUNC_19(struct mlx4_dev *VAR_14, int VAR_15,
    struct mlx4_vhcr *VAR_16,
    struct mlx4_cmd_mailbox *VAR_17,
    struct mlx4_cmd_mailbox *VAR_18,
    struct mlx4_cmd_info *VAR_19)
{
 struct ib_smp *VAR_20 = VAR_17->buf;
 u32 VAR_21;
 u8 VAR_22, VAR_23;
 u8 VAR_24;
 u16 *VAR_25;
 int VAR_26;
 int VAR_27, VAR_28;
 int VAR_29;
 struct mlx4_priv *VAR_30 = FUNC_14(VAR_14);
 struct ib_smp *VAR_31 = VAR_18->buf;
 __be16 *VAR_32 = (__be16 *)(VAR_31->data);
 __be32 VAR_33;
 __be64 VAR_34;

 VAR_23 = VAR_16->in_modifier;
 VAR_22 = FUNC_16(VAR_14, VAR_15, VAR_23);


 VAR_24 = VAR_16->op_modifier & ~0x8;
 VAR_29 = !!(VAR_16->op_modifier & 0x8);

 if (VAR_20->base_version == 1 &&
     VAR_20->mgmt_class == VAR_4 &&
     VAR_20->class_version == 1) {

  if (!VAR_29 && VAR_20->method == VAR_5) {
   if (VAR_20->attr_id == VAR_8) {
    VAR_21 = FUNC_1(VAR_20->attr_mod);
    if (VAR_22 < 1 || VAR_22 > VAR_14->caps.num_ports)
     return -VAR_0;
    VAR_25 = FUNC_5((VAR_14->caps.pkey_table_len[VAR_22] / 32) + 1,
      sizeof(*VAR_25) * 32, VAR_3);

    if (!VAR_25)
     return -VAR_1;



    VAR_26 = FUNC_4(VAR_14, VAR_22, VAR_25, VAR_17, VAR_18);
    if (!VAR_26) {
     for (VAR_27 = VAR_21 * 32; VAR_27 < (VAR_21 + 1) * 32; ++VAR_27) {
      VAR_28 = VAR_30->virt2phys_pkey[VAR_15][VAR_22 - 1][VAR_27];
      VAR_32[VAR_27 % 32] = FUNC_2(VAR_25[VAR_28]);
     }
    }
    FUNC_6(VAR_25);
    return VAR_26;
   }
   if (VAR_20->attr_id == VAR_9) {


    VAR_20->attr_mod = FUNC_3(VAR_22);
    VAR_26 = FUNC_9(VAR_14, VAR_17->dma, VAR_18->dma,
         VAR_22, VAR_24,
         VAR_16->op, VAR_11, VAR_10);

    if (!VAR_26 && VAR_15 != FUNC_13(VAR_14)) {
     u8 *VAR_35 = VAR_31->data + VAR_13;

     if (VAR_22 < 1 || VAR_22 > VAR_14->caps.num_ports)
      return -VAR_0;
     *VAR_35 = (*VAR_35 & 0xf0) | FUNC_18(VAR_14, VAR_22, VAR_15);
     VAR_33 = VAR_30->mfunc.master.slave_state[VAR_15].ib_cap_mask[VAR_22];
     FUNC_7(VAR_31->data + VAR_12, &VAR_33, 4);
    }
    return VAR_26;
   }
   if (VAR_20->attr_id == VAR_6) {
    __be64 VAR_36;

    if (VAR_22 < 1 || VAR_22 > VAR_14->caps.num_ports)
     return -VAR_0;

    VAR_36 = FUNC_11(VAR_14, VAR_15, VAR_22);




    if (VAR_15 == 0 && VAR_36 == 0) {
     VAR_20->attr_mod = 0;
     VAR_26 = FUNC_9(VAR_14,
          VAR_17->dma,
          VAR_18->dma,
          VAR_16->in_modifier,
          VAR_24,
          VAR_16->op,
          VAR_11,
          VAR_10);
     if (VAR_26)
      return VAR_26;
     FUNC_15(VAR_14,
           *(__be64 *)VAR_31->
           data, VAR_15, VAR_22);
    } else {
     FUNC_7(VAR_31->data, &VAR_36, 8);
    }


    FUNC_8(VAR_31->data + 8, 0, 56);
    return 0;
   }
   if (VAR_20->attr_id == VAR_7) {
    VAR_26 = FUNC_9(VAR_14, VAR_17->dma, VAR_18->dma,
          VAR_22, VAR_24,
          VAR_16->op, VAR_11, VAR_10);
    if (!VAR_26) {
     VAR_34 = FUNC_12(VAR_14, VAR_15);
     FUNC_7(VAR_31->data + 12, &VAR_34, 8);
    }
    return VAR_26;
   }
  }
 }




 if (VAR_15 != FUNC_13(VAR_14) &&
     !FUNC_17(VAR_14, VAR_15, VAR_22)) {
  if (!(VAR_20->mgmt_class == VAR_4 &&
        VAR_20->method == VAR_5) || VAR_29) {
   FUNC_10(VAR_14, "Unprivileged slave %d is trying to execute a Subnet MGMT MAD, class 0x%x, method 0x%x, view=%s for attr 0x%x. Rejecting\n",
     VAR_15, VAR_20->mgmt_class, VAR_20->method,
     VAR_29 ? "Network" : "Host",
     FUNC_0(VAR_20->attr_id));
   return -VAR_2;
  }
 }

 return FUNC_9(VAR_14, VAR_17->dma, VAR_18->dma,
        VAR_16->in_modifier, VAR_24,
        VAR_16->op, VAR_11, VAR_10);
}
