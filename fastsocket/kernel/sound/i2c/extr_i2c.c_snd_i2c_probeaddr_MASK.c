
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_i2c_bus {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* probeaddr ) (struct snd_i2c_bus*,unsigned short) ;} ;


 int FUNC_0 (struct snd_i2c_bus*,unsigned short) ;

int FUNC_1(struct snd_i2c_bus *VAR_0, unsigned short VAR_1)
{
 return VAR_0->ops->probeaddr(VAR_0, VAR_1);
}
