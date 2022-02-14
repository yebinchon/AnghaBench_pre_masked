
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ u64 ;
struct mlx5_fpga_device {scalar_t__ shell_conn; } ;
typedef enum mlx5_fpga_access_type { ____Placeholder_mlx5_fpga_access_type } mlx5_fpga_access_type ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct mlx5_fpga_device*,size_t,scalar_t__,void*,int ) ;
 int FUNC_1 (struct mlx5_fpga_device*,char*,size_t,int ,char*) ;
 int FUNC_2 (struct mlx5_fpga_device*,size_t,scalar_t__,void*) ;
 int FUNC_3 (struct mlx5_fpga_device*,char*,int) ;

int FUNC_4(struct mlx5_fpga_device *VAR_3, size_t VAR_4, u64 VAR_5,
   void *VAR_6, enum mlx5_fpga_access_type VAR_7)
{
 int VAR_8;

 if (VAR_7 == VAR_1)
  VAR_7 = VAR_3->shell_conn ? 128 :
       129;

 FUNC_1(VAR_3, "Writing %zu bytes at 0x%jx over %s",
        VAR_4, (uintmax_t)VAR_5, VAR_7 ? "RDMA" : "I2C");

 switch (VAR_7) {
 case 128:
  VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_2);
  if (VAR_8)
   return VAR_8;
  break;
 case 129:
  VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
  if (VAR_8)
   return VAR_8;
  break;
 default:
  FUNC_3(VAR_3, "Unexpected write access_type %u\n",
          VAR_7);
  return -VAR_0;
 }

 return VAR_4;
}
