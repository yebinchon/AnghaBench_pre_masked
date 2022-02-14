
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_dev_cap {int flags2; } ;
struct TYPE_2__ {scalar_t__ steering_mode; scalar_t__ tunnel_offload_mode; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mlx4_dev*,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct mlx4_dev *VAR_4,
           struct mlx4_dev_cap *VAR_5)
{
 if (VAR_4->caps.steering_mode == VAR_1 &&
     VAR_5->flags2 & VAR_0)
  VAR_4->caps.tunnel_offload_mode = VAR_3;
 else
  VAR_4->caps.tunnel_offload_mode = VAR_2;

 FUNC_0(VAR_4, "Tunneling offload mode is: %s\n", (VAR_4->caps.tunnel_offload_mode
   == VAR_3) ? "vxlan" : "none");
}
