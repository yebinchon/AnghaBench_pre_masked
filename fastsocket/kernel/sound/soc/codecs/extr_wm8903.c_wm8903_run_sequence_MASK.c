
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_codec {struct i2c_client* control_data; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct snd_soc_codec*,int ) ;
 int FUNC_4 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_codec *VAR_6, unsigned int VAR_7)
{
 u16 VAR_8[5];
 struct i2c_client *VAR_9 = VAR_6->control_data;

 FUNC_0(VAR_7 > 48);


 VAR_8[0] = FUNC_3(VAR_6, VAR_0);
 VAR_8[0] |= VAR_4;
 FUNC_4(VAR_6, VAR_0, VAR_8[0]);

 FUNC_1(&VAR_9->dev, "Starting sequence at %d\n", VAR_7);

 FUNC_4(VAR_6, VAR_1,
       VAR_7 | VAR_5);





 do {
  FUNC_2(10);

  VAR_8[4] = FUNC_3(VAR_6, VAR_2);
 } while (VAR_8[4] & VAR_3);

 FUNC_1(&VAR_9->dev, "Sequence complete\n");


 FUNC_4(VAR_6, VAR_0,
       VAR_8[0] & ~VAR_4);

 return 0;
}
