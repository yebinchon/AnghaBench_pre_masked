
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ u64 ;
struct mlx5_fpga_tools_dev {int fdev; int lock; } ;
typedef enum mlx5_fpga_access_type { ____Placeholder_mlx5_fpga_access_type } mlx5_fpga_access_type ;


 int FUNC_0 (int ,char*,size_t,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t,scalar_t__,void*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct mlx5_fpga_tools_dev *VAR_0, void *VAR_1, size_t VAR_2,
    u64 VAR_3, enum mlx5_fpga_access_type VAR_4, size_t *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_3(&VAR_0->lock);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_6 = FUNC_2(VAR_0->fdev, VAR_2, VAR_3, VAR_1, VAR_4);
 FUNC_4(&VAR_0->lock);
 if (VAR_6 < 0) {
  FUNC_0(FUNC_1(VAR_0->fdev),
   "Failed to read %zu bytes at address 0x%jx: %d\n",
   VAR_2, (uintmax_t)VAR_3, VAR_6);
  return (-VAR_6);
 }
 *VAR_5 = VAR_6;
 return (0);
}
