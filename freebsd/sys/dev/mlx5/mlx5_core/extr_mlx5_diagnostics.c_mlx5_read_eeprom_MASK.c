
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_eeprom {int data; scalar_t__ len; scalar_t__ page_valid; int page_num; scalar_t__ device_addr; int i2c_addr; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct mlx5_core_dev*,char*) ;
 int FUNC_3 (struct mlx5_core_dev*,struct mlx5_eeprom*) ;
 int FUNC_4 (struct mlx5_core_dev*,struct mlx5_eeprom*) ;

int
FUNC_5(struct mlx5_core_dev *VAR_6, struct mlx5_eeprom *VAR_7)
{
 int VAR_8;

 VAR_7->i2c_addr = VAR_2;
 VAR_7->device_addr = 0;
 VAR_7->page_num = VAR_0;
 VAR_7->page_valid = 0;


 VAR_8 = FUNC_4(VAR_6, VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_6,
      "Failed reading EEPROM initial information\n");
  return (VAR_8);
 }




 VAR_7->data = FUNC_1(VAR_7->len + VAR_1,
     VAR_3, VAR_4 | VAR_5);


 VAR_8 = FUNC_3(VAR_6, VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_6, "Failed reading EEPROM\n");
  VAR_8 = 0;




 }
 FUNC_0(VAR_7->data, VAR_3);

 return (VAR_8);
}
