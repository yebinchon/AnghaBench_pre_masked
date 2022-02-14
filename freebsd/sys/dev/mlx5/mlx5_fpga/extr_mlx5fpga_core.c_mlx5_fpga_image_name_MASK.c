
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mlx5_fpga_image { ____Placeholder_mlx5_fpga_image } mlx5_fpga_image ;





__attribute__((used)) static const char *FUNC_0(enum mlx5_fpga_image VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "user";
 case 129:
  return "factory";
 default:
  return "unknown";
 }
}
