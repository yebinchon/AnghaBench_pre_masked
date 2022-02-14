
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_i2c_device {int dummy; } ;
struct TYPE_3__ {int next; } ;
struct snd_i2c_bus {int (* private_free ) (struct snd_i2c_bus*) ;int card; TYPE_1__ buses; scalar_t__ master; TYPE_1__ devices; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_i2c_bus*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,struct snd_i2c_bus*) ;
 struct snd_i2c_device* FUNC_5 (int ) ;
 int FUNC_6 (struct snd_i2c_device*) ;
 struct snd_i2c_bus* FUNC_7 (int ) ;
 int FUNC_8 (struct snd_i2c_bus*) ;

__attribute__((used)) static int FUNC_9(struct snd_i2c_bus *VAR_1)
{
 struct snd_i2c_bus *VAR_2;
 struct snd_i2c_device *VAR_3;

 if (FUNC_3(!VAR_1))
  return -VAR_0;
 while (!FUNC_2(&VAR_1->devices)) {
  VAR_3 = FUNC_5(VAR_1->devices.next);
  FUNC_6(VAR_3);
 }
 if (VAR_1->master)
  FUNC_1(&VAR_1->buses);
 else {
  while (!FUNC_2(&VAR_1->buses)) {
   VAR_2 = FUNC_7(VAR_1->buses.next);
   FUNC_4(VAR_1->card, VAR_2);
  }
 }
 if (VAR_1->private_free)
  VAR_1->private_free(VAR_1);
 FUNC_0(VAR_1);
 return 0;
}
