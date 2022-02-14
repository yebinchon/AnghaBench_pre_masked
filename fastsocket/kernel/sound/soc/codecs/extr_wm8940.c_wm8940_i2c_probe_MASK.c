
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int * dev; struct i2c_client* control_data; scalar_t__ hw_write; } ;
struct wm8940_priv {struct snd_soc_codec codec; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
typedef scalar_t__ hw_write_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct i2c_client*,struct wm8940_priv*) ;
 struct wm8940_priv* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wm8940_priv*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_4,
       const struct i2c_device_id *VAR_5)
{
 struct wm8940_priv *VAR_6;
 struct snd_soc_codec *VAR_7;

 VAR_6 = FUNC_1(sizeof *VAR_6, VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_7 = &VAR_6->codec;
 VAR_7->hw_write = (hw_write_t)VAR_3;
 FUNC_0(VAR_4, VAR_6);
 VAR_7->control_data = VAR_4;
 VAR_7->dev = &VAR_4->dev;

 return FUNC_2(VAR_6, VAR_2);
}
