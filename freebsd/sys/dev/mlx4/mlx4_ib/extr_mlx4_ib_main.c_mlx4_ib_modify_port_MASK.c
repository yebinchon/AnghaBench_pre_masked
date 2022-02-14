
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct mlx4_ib_dev {int cap_mask_mutex; TYPE_1__* dev; } ;
struct ib_port_modify {int set_port_cap_mask; int clr_port_cap_mask; } ;
struct ib_port_attr {int port_cap_flags; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {scalar_t__* port_type; } ;
struct TYPE_3__ {TYPE_2__ caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mlx4_ib_dev*,size_t,int,int) ;
 int FUNC_1 (struct ib_device*,size_t,struct ib_port_attr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mlx4_ib_dev* FUNC_4 (struct ib_device*) ;

__attribute__((used)) static int FUNC_5(struct ib_device *VAR_2, u8 VAR_3, int VAR_4,
          struct ib_port_modify *VAR_5)
{
 struct mlx4_ib_dev *VAR_6 = FUNC_4(VAR_2);
 u8 VAR_7 = VAR_6->dev->caps.port_type[VAR_3] == VAR_1;
 struct ib_port_attr VAR_8;
 u32 VAR_9;
 int VAR_10;





 if (VAR_7)
  return 0;

 FUNC_2(&VAR_6->cap_mask_mutex);

 VAR_10 = FUNC_1(VAR_2, VAR_3, &VAR_8);
 if (VAR_10)
  goto out;

 VAR_9 = (VAR_8.port_cap_flags | VAR_5->set_port_cap_mask) &
  ~VAR_5->clr_port_cap_mask;

 VAR_10 = FUNC_0(VAR_6, VAR_3,
          !!(VAR_4 & VAR_0),
          VAR_9);

out:
 FUNC_3(&FUNC_4(VAR_2)->cap_mask_mutex);
 return VAR_10;
}
