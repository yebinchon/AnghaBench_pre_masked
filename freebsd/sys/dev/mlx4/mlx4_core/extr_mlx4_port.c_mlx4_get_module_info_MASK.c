
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct mlx4_mad_ifc {int method; int class_version; int mgmt_class; int base_version; scalar_t__ data; int status; void* attr_id; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; scalar_t__ buf; } ;
struct mlx4_cable_info {int data; void* size; scalar_t__ i2c_addr; scalar_t__ page_num; void* dev_mem_address; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 struct mlx4_cmd_mailbox* FUNC_7 (struct mlx4_dev*) ;
 int FUNC_8 (struct mlx4_dev*,int ,int ,int ,int,int ,int ,int ) ;
 int FUNC_9 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 int FUNC_10 (struct mlx4_dev*,char*,int,int ,scalar_t__,scalar_t__,scalar_t__,int,int ) ;

int FUNC_11(struct mlx4_dev *VAR_8, u8 VAR_9,
    u16 VAR_10, u16 VAR_11, u8 *VAR_12)
{
 struct mlx4_cmd_mailbox *VAR_13, *VAR_14;
 struct mlx4_mad_ifc *VAR_15, *VAR_16;
 struct mlx4_cable_info *VAR_17;
 u16 VAR_18;
 int VAR_19;

 if (VAR_11 > VAR_7)
  VAR_11 = VAR_7;

 VAR_13 = FUNC_7(VAR_8);
 if (FUNC_0(VAR_13))
  return FUNC_2(VAR_13);

 VAR_14 = FUNC_7(VAR_8);
 if (FUNC_0(VAR_14)) {
  FUNC_9(VAR_8, VAR_13);
  return FUNC_2(VAR_14);
 }

 VAR_15 = (struct mlx4_mad_ifc *)(VAR_13->buf);
 VAR_16 = (struct mlx4_mad_ifc *)(VAR_14->buf);

 VAR_15->method = 0x1;
 VAR_15->class_version = 0x1;
 VAR_15->mgmt_class = 0x1;
 VAR_15->base_version = 0x1;
 VAR_15->attr_id = FUNC_5(0xFF60);

 if (VAR_10 < VAR_3 && VAR_10 + VAR_11 > VAR_3)



  VAR_11 -= VAR_10 + VAR_11 - VAR_3;

 VAR_18 = VAR_2;
 if (VAR_10 >= VAR_3) {

  VAR_18 = VAR_1;
  VAR_10 -= VAR_3;
 }

 VAR_17 = (struct mlx4_cable_info *)VAR_15->data;
 VAR_17->dev_mem_address = FUNC_5(VAR_10);
 VAR_17->page_num = 0;
 VAR_17->i2c_addr = VAR_18;
 VAR_17->size = FUNC_5(VAR_11);

 VAR_19 = FUNC_8(VAR_8, VAR_13->dma, VAR_14->dma, VAR_9, 3,
      VAR_4, VAR_6,
      VAR_5);
 if (VAR_19)
  goto out;

 if (FUNC_3(VAR_16->status)) {

  VAR_19 = FUNC_3(VAR_16->status);






  if (VAR_18 == VAR_1 &&
      FUNC_1(VAR_19) == VAR_0)



   VAR_19 = 0;
  else
   VAR_19 = -VAR_19;
  goto out;
 }
 VAR_17 = (struct mlx4_cable_info *)VAR_16->data;
 FUNC_6(VAR_12, VAR_17->data, VAR_11);
 VAR_19 = VAR_11;
out:
 FUNC_9(VAR_8, VAR_13);
 FUNC_9(VAR_8, VAR_14);
 return VAR_19;
}
