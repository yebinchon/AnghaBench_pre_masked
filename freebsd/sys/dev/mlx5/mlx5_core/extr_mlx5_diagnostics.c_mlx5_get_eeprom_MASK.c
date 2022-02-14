
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_eeprom {int len; int device_addr; int page_valid; scalar_t__ data; int module_num; int page_num; int i2c_addr; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_1 (struct mlx5_core_dev*,int ,int ,int,int,int ,scalar_t__,int*) ;

int
FUNC_2(struct mlx5_core_dev *VAR_4, struct mlx5_eeprom *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;

 if (VAR_5->len == 0)
  return (VAR_0);


 while (VAR_5->device_addr < VAR_5->len) {
  VAR_7 = FUNC_1(VAR_4, VAR_5->i2c_addr, VAR_5->page_num, VAR_5->device_addr,
      VAR_5->len - VAR_5->device_addr, VAR_5->module_num,
      VAR_5->data + (VAR_5->device_addr / 4), &VAR_6);
  if (VAR_7) {
   FUNC_0(VAR_4,
       "Failed reading EEPROM, error = 0x%02x\n", VAR_7);
   return (-VAR_7);
  }
  VAR_5->device_addr += VAR_6;
 }


 if (VAR_5->page_valid == 1) {
  VAR_5->device_addr = VAR_2;
  VAR_5->page_num = VAR_1;
  VAR_6 = 0;
  while (VAR_5->device_addr < VAR_3) {
   VAR_7 = FUNC_1(VAR_4, VAR_5->i2c_addr, VAR_5->page_num,
       VAR_5->device_addr, VAR_3 - VAR_5->device_addr,
       VAR_5->module_num, VAR_5->data + (VAR_5->len / 4) +
       ((VAR_5->device_addr - VAR_2) / 4),
       &VAR_6);
   if (VAR_7) {
    FUNC_0(VAR_4,
        "Failed reading EEPROM, error = 0x%02x\n",
        VAR_7);
    return (-VAR_7);
   }
   VAR_5->device_addr += VAR_6;
  }
 }
 return (0);
}
