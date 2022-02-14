
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_i2c_device {int (* private_free ) (struct snd_i2c_device*) ;int list; scalar_t__ bus; } ;


 int FUNC_0 (struct snd_i2c_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_i2c_device*) ;

int FUNC_3(struct snd_i2c_device *VAR_0)
{
 if (VAR_0->bus)
  FUNC_1(&VAR_0->list);
 if (VAR_0->private_free)
  VAR_0->private_free(VAR_0);
 FUNC_0(VAR_0);
 return 0;
}
