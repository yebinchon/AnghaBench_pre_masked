
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ipsec_command_context {scalar_t__ status; int status_code; int dev; int complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mlx5_ipsec_command_context*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;

int FUNC_3(void *VAR_3)
{
 struct mlx5_ipsec_command_context *VAR_4 = VAR_3;
 int VAR_5;

 VAR_5 = FUNC_2 (&VAR_4->complete);
 if (VAR_5) {
  FUNC_1(VAR_4->dev, "Failure waiting for IPSec command response\n");
  return -VAR_0;
 }

 if (VAR_4->status == VAR_2)
  VAR_5 = VAR_4->status_code;
 else
  VAR_5 = -VAR_1;

 FUNC_0(VAR_4);
 return VAR_5;
}
