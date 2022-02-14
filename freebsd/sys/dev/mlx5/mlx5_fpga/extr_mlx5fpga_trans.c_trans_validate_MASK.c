
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uintmax_t ;
typedef size_t u64 ;
typedef int u32 ;
struct mlx5_fpga_device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_0 (struct mlx5_fpga_device*) ;
 int FUNC_1 (struct mlx5_fpga_device*,char*,size_t,...) ;

__attribute__((used)) static int FUNC_2(struct mlx5_fpga_device *VAR_4, u64 VAR_5, size_t VAR_6)
{
 if (VAR_6 > VAR_1) {
  FUNC_1(VAR_4, "Cannot access %zu bytes at once. Max is %u\n",
          VAR_6, VAR_1);
  return -VAR_0;
 }
 if (VAR_6 & VAR_2) {
  FUNC_1(VAR_4, "Cannot access %zu bytes. Must be full dwords\n",
          VAR_6);
  return -VAR_0;
 }
 if (VAR_6 < 1) {
  FUNC_1(VAR_4, "Cannot access %zu bytes. Empty transaction not allowed\n",
          VAR_6);
  return -VAR_0;
 }
 if (VAR_5 & VAR_2) {
  FUNC_1(VAR_4, "Cannot access %zu bytes at unaligned address %jx\n",
          VAR_6, (uintmax_t)VAR_5);
  return -VAR_0;
 }
 if ((VAR_5 >> VAR_3) !=
     ((VAR_5 + VAR_6 - 1) >> VAR_3)) {
  FUNC_1(VAR_4, "Cannot access %zu bytes at address %jx. Crosses page boundary\n",
          VAR_6, (uintmax_t)VAR_5);
  return -VAR_0;
 }
 if (VAR_5 < FUNC_0(VAR_4)) {
  if (VAR_6 != sizeof(u32)) {
   FUNC_1(VAR_4, "Cannot access %zu bytes at cr-space address %jx. Must access a single dword\n",
           VAR_6, (uintmax_t)VAR_5);
   return -VAR_0;
  }
 }
 return 0;
}
