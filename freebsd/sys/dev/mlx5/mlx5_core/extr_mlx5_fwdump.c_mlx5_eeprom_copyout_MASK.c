
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_eeprom_get {int * eeprom_info_buf; scalar_t__ eeprom_info_out_len; scalar_t__ eeprom_info_page_valid; } ;
struct mlx5_eeprom {int data; scalar_t__ len; scalar_t__ page_valid; int page_num; scalar_t__ device_addr; int i2c_addr; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_4 (struct mlx5_core_dev*,struct mlx5_eeprom*) ;
 int FUNC_5 (struct mlx5_core_dev*,struct mlx5_eeprom*) ;

__attribute__((used)) static int
FUNC_6(struct mlx5_core_dev *VAR_6, struct mlx5_eeprom_get *VAR_7)
{
 struct mlx5_eeprom VAR_8;
 int VAR_9;

 VAR_8.i2c_addr = VAR_2;
 VAR_8.device_addr = 0;
 VAR_8.page_num = VAR_0;
 VAR_8.page_valid = 0;


 VAR_9 = FUNC_5(VAR_6, &VAR_8);
 if (VAR_9 != 0) {
  FUNC_3(VAR_6,
      "Failed reading EEPROM initial information\n");
  return (VAR_9);
 }
 VAR_7->eeprom_info_page_valid = VAR_8.page_valid;
 VAR_7->eeprom_info_out_len = VAR_8.len;

 if (VAR_7->eeprom_info_buf == ((void*)0))
  return (0);




 VAR_8.data = FUNC_2(VAR_8.len + VAR_1,
     VAR_3, VAR_4 | VAR_5);


 VAR_9 = FUNC_4(VAR_6, &VAR_8);
 if (VAR_9 != 0) {
  FUNC_3(VAR_6, "Failed reading EEPROM error = %d\n",
      VAR_9);
  VAR_9 = 0;




 }
 VAR_9 = FUNC_0(VAR_8.data, VAR_7->eeprom_info_buf,
     VAR_8.len);
 FUNC_1(VAR_8.data, VAR_3);

 return (VAR_9);
}
