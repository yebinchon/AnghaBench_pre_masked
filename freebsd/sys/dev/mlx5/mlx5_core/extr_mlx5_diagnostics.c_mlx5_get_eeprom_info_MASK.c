
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_eeprom {int page_valid; void* len; void* type; int module_num; int device_addr; int page_num; int i2c_addr; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;




 int FUNC_0 (struct mlx5_core_dev*,char*,int,...) ;
 int FUNC_1 (struct mlx5_core_dev*,int ,int ,int ,int ,int ,int*,int*) ;
 int FUNC_2 (struct mlx5_core_dev*,int *) ;
 int * VAR_11 ;

int
FUNC_3(struct mlx5_core_dev *VAR_12, struct mlx5_eeprom *VAR_13)
{
 u32 VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16;

 VAR_16 = FUNC_2(VAR_12, &VAR_13->module_num);
 if (VAR_16) {
  FUNC_0(VAR_12, "Failed query module error=%d\n", VAR_16);
  return (-VAR_16);
 }


 VAR_16 = FUNC_1(VAR_12, VAR_13->i2c_addr, VAR_13->page_num,
     VAR_13->device_addr, VAR_2, VAR_13->module_num, &VAR_14,
     &VAR_15);
 if (VAR_16) {
  FUNC_0(VAR_12,
      "Failed query EEPROM module error=0x%x\n", VAR_16);
  return (-VAR_16);
 }

 switch (VAR_14 & VAR_1) {
 case 131:
  VAR_13->type = VAR_5;
  VAR_13->len = VAR_6;
  break;
 case 129:
 case 130:
  if ((VAR_14 & VAR_1) == 130 ||
      ((VAR_14 & VAR_4) >> 8) >= 0x3) {
   VAR_13->type = VAR_9;
   VAR_13->len = VAR_10;
  } else {
   VAR_13->type = VAR_5;
   VAR_13->len = VAR_6;
  }
  if ((VAR_14 & VAR_3) == 0)
   VAR_13->page_valid = 1;
  break;
 case 128:
  VAR_13->type = VAR_7;
  VAR_13->len = VAR_8;
  break;
 default:
  FUNC_0(VAR_12, "Not recognized cable type = 0x%x(%s)\n",
      VAR_14 & VAR_1,
      VAR_11[VAR_14 & VAR_1]);
  return (VAR_0);
 }
 return (0);
}
