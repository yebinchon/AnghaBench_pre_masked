
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {scalar_t__* port_mask; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct ib_device {int dummy; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;
struct TYPE_4__ {struct mlx4_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (struct ib_device*) ;

__attribute__((used)) static enum rdma_link_layer
FUNC_1(struct ib_device *VAR_3, u8 VAR_4)
{
 struct mlx4_dev *VAR_5 = FUNC_0(VAR_3)->dev;

 return VAR_5->caps.port_mask[VAR_4] == VAR_2 ?
  VAR_1 : VAR_0;
}
