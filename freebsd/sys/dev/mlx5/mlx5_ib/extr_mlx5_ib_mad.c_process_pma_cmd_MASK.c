
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_pma_portcounters_ext {int dummy; } ;
struct ib_pma_portcounters {int dummy; } ;
struct TYPE_2__ {scalar_t__ attr_id; } ;
struct ib_mad {scalar_t__ data; TYPE_1__ mad_hdr; } ;
struct ib_device {int dummy; } ;
struct ib_class_port_info {int capability_mask; } ;
typedef int cpi ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (scalar_t__,struct ib_class_port_info*,int) ;
 int FUNC_3 (int ,int ,void*,int) ;
 int FUNC_4 (int ,int ,int ,int ,void*,int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct ib_pma_portcounters*,void*) ;
 int FUNC_7 (struct ib_pma_portcounters_ext*,void*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct mlx5_ib_dev* FUNC_8 (struct ib_device*) ;

__attribute__((used)) static int FUNC_9(struct ib_device *VAR_8, u8 VAR_9,
      const struct ib_mad *VAR_10, struct ib_mad *VAR_11)
{
 struct mlx5_ib_dev *VAR_12 = FUNC_8(VAR_8);
 int VAR_13;
 void *VAR_14;


 if (VAR_10->mad_hdr.attr_id == VAR_4) {
  struct ib_class_port_info VAR_15 = {};

  VAR_15.capability_mask = VAR_3;
  FUNC_2((VAR_11->data + 40), &VAR_15, sizeof(VAR_15));
  return VAR_2 | VAR_1;
 }

 if (VAR_10->mad_hdr.attr_id == VAR_5) {
  struct ib_pma_portcounters_ext *VAR_16 =
   (struct ib_pma_portcounters_ext *)(VAR_11->data + 40);
  int VAR_17 = FUNC_0(VAR_7);

  VAR_14 = FUNC_5(VAR_17);
  if (!VAR_14)
   return VAR_0;

  VAR_13 = FUNC_4(VAR_12->mdev, 0, 0,
          VAR_9, VAR_14, VAR_17);
  if (!VAR_13)
   FUNC_7(VAR_16, VAR_14);
 } else {
  struct ib_pma_portcounters *VAR_18 =
   (struct ib_pma_portcounters *)(VAR_11->data + 40);
  int VAR_19 = FUNC_0(VAR_6);

  VAR_14 = FUNC_5(VAR_19);
  if (!VAR_14)
   return VAR_0;

  VAR_13 = FUNC_3(VAR_12->mdev, VAR_9,
            VAR_14, VAR_19);
  if (!VAR_13)
   FUNC_6(VAR_18, VAR_14);
  }

 FUNC_1(VAR_14);
 if (VAR_13)
  return VAR_0;

 return VAR_2 | VAR_1;
}
