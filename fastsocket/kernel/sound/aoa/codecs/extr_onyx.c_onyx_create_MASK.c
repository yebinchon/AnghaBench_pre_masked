
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {TYPE_1__* driver; int detected; } ;
struct i2c_board_info {int addr; struct device_node* platform_data; int type; } ;
struct i2c_adapter {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int clients; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct i2c_client* FUNC_0 (struct i2c_adapter*,struct i2c_board_info*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct i2c_board_info*,int ,int) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_2,
         struct device_node *VAR_3,
         int VAR_4)
{
 struct i2c_board_info VAR_5;
 struct i2c_client *VAR_6;

 FUNC_3(&VAR_5, 0, sizeof(struct i2c_board_info));
 FUNC_4(VAR_5.type, "aoa_codec_onyx", VAR_1);
 VAR_5.addr = VAR_4;
 VAR_5.platform_data = VAR_3;
 VAR_6 = FUNC_0(VAR_2, &VAR_5);
 if (!VAR_6)
  return -VAR_0;
 if (!VAR_6->driver) {
  FUNC_1(VAR_6);
  return -VAR_0;
 }





 FUNC_2(&VAR_6->detected, &VAR_6->driver->clients);
 return 0;
}
